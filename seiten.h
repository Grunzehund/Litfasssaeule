#define startseite "\
  <meta charset='UTF-8'>\
  <html lang='de'>\
    <head>\
      <title>\
        Die Elektronische Litfaßsäule\
      </title>\
    </head>\
    <body>\
        <h1> Wilkommen in dem Kontroll-Center von der elektronischen Litfaßsäule </h1>\
        <h3> Hier können sie den Text, sowie die dazugehörigen x- und y-Koordinaten eingeben </br> oder die Anzeige leeren </h3>\
        <form action='set.html' method='get'>\
          <h3>x: <input type='number' name='xwert' value='0'></h3></br>\
          <h3>y: <input type='number' name='ywert'value='0'></h3></br></br>\
          <input type='text' name='text' value='text'></br>\
          <input type='submit' name='submit' value='submit-set'>\
          <input type='reset'>\
      </form> \
      <form action='set.html' method='get'>\
        <input type='submit' name='submit' value='submit-clear' max='DISPLAY_WIDTH/FONT_WIDTH'>\
      </form>\
      <h3><a href='specs.html'>zu den Technischen Daten des NodeMCU</a></h3>\
      <h3>Software by Jannik Klarmann</h3>\
    </body>\
  </html>"

#define done_seite "\
  <meta charset='UTF-8'>\
  <html lang='de'>\
    <head>\
      <title>\
        Ihre Änderungen wurden erfolgreich übernommen\
      </title>\
    </head>\
    <body>\
      <h1><center> Ihre Änderungen wurden erfolgreich übernommen </center></h1>\
      <h3><a href='/'>zurück zur Startseite</a></h3>\
      <h3>Software by Jannik Klarmann</h3>\
      </body>\
  </html>"

#define error_seite "\
  <meta charset='UTF-8'>\
  <html lang='de'>\
    <head>\
      <title>\
        ERROR\
      </title>\
    </head>\
    <body>\
    <h1><center>Ein Fehler ist aufgetreten!!!</center></h1>\
     <details>\
      <summary>Einige Tipps zur Fehlerbehebung</summary>\
        <ol>\
          <li>Versuchen sie es einfach <a href='/'>noch einmal</a></li>\
          <li>Kompilieren und laden sie den Quellcode neu auf den NodeMCU</li>\
          <li>Kontaktieren sie ihren Systemadministrator oder jemanden, der sich damit auskennt</li>\
        </ol>\
     </details>\
     <h3>Software by Jannik Klarmann</h3>\
    </body>\
  </html>"

#define nicht_gefunden_seite "\
  <meta charset='UTF-8'>\
  <html lang='de'>\
    <head>\
      <title>\
        ERROR 404\
      </title>\
    </head>\
    <body>\
    <h1><center>Die Seite wurde nicht gefunden</center></h1>\
    <h3>Diese Internetseite existiert nicht. Überprüfen sie Tippfehler wie\
      <ol>\
        <li>http statt https</li>\
        <li>ww statt www</li>\
        <li>die falsche IP-Adresse --> die richtige ist die <a href='/'>192.168.4.1</a></li>\
        <li>Fragen sie den zuständigen Administrator</li>\
      </ol>\
    </h3>\
    <h3>Software by Jannik Klarmann</h3>\
    </body>\
  </html>"

#define technik_seite_0 "\
  <html lang='de'>\
    <head>\
      <title>\
        Technische Daten - NodeMCU\
      </title>\
    </head>\
    <body>\
    <h1><center>technische Daten zum NodeMCU</center></h1>\
    <h3>hier sind einige Daten des NodeMCU: \
      <ul>\
        <li>Maximale Ausgangs Spnnung: 3.3V</li>\
        <li>Aktuelle Taktfrequenz:     80 MHz</li>\
        <li>Umdrehungen pro Sekunde: "
#define technik_seite_1 "\
        </li>\
      </ul>\
    </h3>\
    <details>\
      <summary>Display Anzeige</summary><font face='Consolas'>"
#define technik_seite_2 "\
    </font></details>\
    <h3><a href='/'>zurück zur Startseite</a></h3>\
    <h3>Software by Jannik Klarmann</h3>\
    </body>\
  </html>"
