void displayAllOld()
{
    if(micros()-micros_old > DELAY_TIME)
  {
    #ifdef DEBUG
      delta1 = micros() - micros_old;
    #endif
    
    a.render(select);
    select++;
    if(select >= DISPLAY_WIDTH)
      select = 0;
    
    #ifdef DEBUG
      delta2 = micros() - micros_old;
    #endif
    
    micros_old = micros();
  }
  #ifdef DEBUG
    if(delta1 > 0 && delta2 > 0)
    {
      Serial.print("delta1 = ");
      Serial.println(delta1);
      Serial.print("delta2 = ");
      Serial.println(delta2);
      Serial.print("a.render takes ");
      Serial.println(delta2 - delta1);
      Serial.println("\n\n");
      delta1 = 0;
      delta2 = 0;
    }
  #endif
}
void greeting()
{
    a.setAll(0);
  a.setText(0, 0, "Hallo Tomate", 12);
  a.setText(0, FONT_HEIGHT, "HALLO SCHLAPPI", 14);
  a.setText(0, 2*FONT_HEIGHT, "HALLO MAMA + PAPA", 17);
  a.setText(0, 3*FONT_HEIGHT, "Und natuerlich auch,", 20);
  a.setText(0, 4*FONT_HEIGHT, "Kamikaze/ Schrotti,", 19);
  a.setText(0, 5*FONT_HEIGHT, "halbe Portion und", 17);
  a.setText(0, 6*FONT_HEIGHT, "Chippie", 7);
  a.setText(0, 7*FONT_HEIGHT, "Gute Nacht!!!", 13);
  a.printMap();
}
void line(float f = 1.0, int start = 100)
{
  int dt;
  for(int t=0; t<10; t++)
  {
    dt = start;
    digitalWrite(LATCH, HIGH);
    digitalWrite(DATA, HIGH);
    digitalWrite(CLOCK, HIGH);
    digitalWrite(CLOCK, LOW);
    digitalWrite(LATCH, LOW);
    digitalWrite(DATA, LOW);
    for(int i=0; i<DISPLAY_HEIGHT; i++)
    {
      dt *= f;
      digitalWrite(LATCH, HIGH);
      digitalWrite(CLOCK, HIGH);
      digitalWrite(CLOCK, LOW);
      digitalWrite(LATCH, LOW);
      delay(dt);
    }
  }
}
