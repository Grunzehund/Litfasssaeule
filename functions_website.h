void start()
{
  #ifdef DEBUG1
    Serial.println("Normale Seite aufgerufen");
  #endif
  WebServer.send(200, "text/html", F(startseite));
}
void notFound()
{
  WebServer.send(404, "text/html", F(nicht_gefunden_seite));
}
void doStuff()
{
  String submit;
  submit = WebServer.arg("submit");
  if(submit == "submit-clear")
  {
    #ifdef DEBUG1
      Serial.println("submit-clear");
    #endif
    WebServer.send(200, "text/html", F(done_seite));
    a.setAll(0);
  }else if(submit == "submit-set")
  {
    String text1;
    #ifdef DEBUG1
      Serial.println("submit-set");
    #endif
        
    text1 = WebServer.arg("text");
    
    if(text1.length() >= MAX_TEXT_LENGTH)
    {
      #ifdef DEBUG
        Serial.println("FATAL ERROR");
      #endif
      WebServer.send(405, "text/html", F(error_seite));
      return;
    }

    String xwert, ywert;
    char text2[MAX_TEXT_LENGTH];
    int x,  y, cnt_lines;
    
    for (int i = 0; i < text1.length(); i++)
      text2[i] = text1[i];
    
    xwert = WebServer.arg("xwert");
    ywert = WebServer.arg("ywert");
    
    x = xwert.toInt();
    y = ywert.toInt();
    #ifdef DEBUG
      Serial.print("x = ");
      Serial.println(x, DEC);
      Serial.print("y = ");
      Serial.println(y, DEC);
    #endif

    cnt_lines = text1.length() / (DISPLAY_WIDTH/FONT_WIDTH) + 1;
    #ifdef DEBUG
      Serial.print("cnt_lines = ");
      Serial.println(cnt_lines, DEC);
    #endif
    
    char* tmp;
    for(int i=0; i<cnt_lines; i++)
    {
      tmp = text2 + i*(DISPLAY_WIDTH/FONT_WIDTH);
      if(text1.length() / (DISPLAY_WIDTH/FONT_WIDTH) == i) /* letzte Runde */
        a.setText(x, i*FONT_HEIGHT + y, tmp, text1.length() % (DISPLAY_WIDTH/FONT_WIDTH));
      else
        a.setText(x, i*FONT_HEIGHT + y, tmp, (DISPLAY_WIDTH/FONT_WIDTH));
    }
    WebServer.send(200, "text/html", F(done_seite));
    a.printMap();
  }else
  {
    #ifdef DEBUG
      Serial.println("submit-fail");
    #endif
    WebServer.send(404, "text/html", F(error_seite));
  }
  
}
void specs()
{
  char m[8];
  dtostrf((double)(MICRO/(double)micros_duration_turn), 0, 7, m);
  
  WebServer.sendContent(F(technik_seite_0));
  WebServer.sendContent(m);
  WebServer.sendContent(F(technik_seite_1));
  for(int i=0; i<a.height; i++)
  {
    for(int t=0; t<a.width; t++)
      WebServer.sendContent(a.data[t][i] == 0 ? " " : " #");
    WebServer.sendContent(F("</br>"));
  }
  WebServer.send(200, "text/html", F(technik_seite_2));
}
void setTest()
{
  String laenge1;
  char laenge2[10];
  #ifdef DEBUG
    Serial.println("eingabe-Binärseite aufgerufen");
  #endif
  char tmp1, tmp2, tmp3;
  int l;

  a.setAll(0);
  #ifdef DEBUG
    Serial.println("Alles auf 0 gesetzt");
  #endif
  laenge1 = WebServer.arg("l");
  for(int i=0; i<laenge1.length(); i++)
    laenge2[i] = laenge1[i];
  l = atoi(laenge2);

  #ifdef DEBUG
    Serial.print("length = ");
    Serial.println(l);
  #endif
  for(int i=0; i<l;)
  {
    tmp1 = WebServer.argChar("text", i++);
    tmp2 = WebServer.argChar("text", i++);
    tmp3 = hctob(tmp1) << 4;
    tmp3 += hctob(tmp2);

    for(int t=0; t<8; t++)
    {
      a.data[((i*8)+t)%a.width][((i*8)+t)/a.width] = bitRead(tmp3, t);
    }
  }
  WebServer.send(200, "text/html", F(done_seite));
  a.printMap();
}
