byte hctob(char c) /* converts char into binary HEX */
{
  if(c > 'A')
    return c - 'A' + 10;
  else
    return c - '0';
}
void btohc(byte b, char* c1, char* c2) /* converts byte in two chars */
{
  *c1 = (b & 15);
  *c2 = (b & 240) >> 4;
}
char btohct(byte b, int num) /* converts byte in one char */
{
  char ret;
  if(num == 1)
    ret = (b & 15);
  else
    ret = (b & 240) >> 4;
  if(ret < 10)
    ret += '0';
  else
    ret += ('A' - 10);
  return ret;
}
//char btohc(byte b, int num)
//{
//  Serial.println(b, HEX);
//  if(num == 1)
//  {
//    byte c = b & (byte)15;
//    for(int i=0; i<8; i++)
//      Serial.print(bitRead(c, i) == 0 ? "0" : "1");
//    Serial.println();
//    return c;
//  }
//  else if(num == 2)
//  {
//    byte c = (b & (byte)15) >> 4;
//    for(int i=0; i<8; i++)
//      Serial.print(bitRead(c, i) == 0 ? "0" : "1");
//    Serial.println();
//    return c;
//  }
//  else
//  {
//    Serial.println("FAIL");
//  }
//}

const byte SmallFont[1140] PROGMEM = {                                    /* Data for setting the Text */

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // <space>
0x00,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x20,0x00,0x00,  // !
0x00,0x28,0x50,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // "
0x00,0x00,0x28,0x28,0xFC,0x28,0x50,0xFC,0x50,0x50,0x00,0x00,  // #
0x00,0x20,0x78,0xA8,0xA0,0x60,0x30,0x28,0xA8,0xF0,0x20,0x00,  // $
0x00,0x00,0x48,0xA8,0xB0,0x50,0x28,0x34,0x54,0x48,0x00,0x00,  // %
0x00,0x00,0x20,0x50,0x50,0x78,0xA8,0xA8,0x90,0x6C,0x00,0x00,  // &
0x00,0x40,0x40,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // '
0x00,0x04,0x08,0x10,0x10,0x10,0x10,0x10,0x10,0x08,0x04,0x00,  // (
0x00,0x40,0x20,0x10,0x10,0x10,0x10,0x10,0x10,0x20,0x40,0x00,  // )
0x00,0x00,0x00,0x20,0xA8,0x70,0x70,0xA8,0x20,0x00,0x00,0x00,  // *
0x00,0x00,0x20,0x20,0x20,0xF8,0x20,0x20,0x20,0x00,0x00,0x00,  // +
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x80,  // ,
0x00,0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,  // -
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,  // .
0x00,0x08,0x10,0x10,0x10,0x20,0x20,0x40,0x40,0x40,0x80,0x00,  // /

0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x00,0x00,  // 0
0x00,0x00,0x20,0x60,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00,  // 1
0x00,0x00,0x70,0x88,0x88,0x10,0x20,0x40,0x80,0xF8,0x00,0x00,  // 2
0x00,0x00,0x70,0x88,0x08,0x30,0x08,0x08,0x88,0x70,0x00,0x00,  // 3
0x00,0x00,0x10,0x30,0x50,0x50,0x90,0x78,0x10,0x18,0x00,0x00,  // 4
0x00,0x00,0xF8,0x80,0x80,0xF0,0x08,0x08,0x88,0x70,0x00,0x00,  // 5
0x00,0x00,0x70,0x90,0x80,0xF0,0x88,0x88,0x88,0x70,0x00,0x00,  // 6
0x00,0x00,0xF8,0x90,0x10,0x20,0x20,0x20,0x20,0x20,0x00,0x00,  // 7
0x00,0x00,0x70,0x88,0x88,0x70,0x88,0x88,0x88,0x70,0x00,0x00,  // 8
0x00,0x00,0x70,0x88,0x88,0x88,0x78,0x08,0x48,0x70,0x00,0x00,  // 9
0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x20,0x00,0x00,  // :
0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x20,0x20,0x00,  // ;
0x00,0x04,0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x04,0x00,0x00,  // <
0x00,0x00,0x00,0x00,0xF8,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,  // =
0x00,0x40,0x20,0x10,0x08,0x04,0x08,0x10,0x20,0x40,0x00,0x00,  // >
0x00,0x00,0x70,0x88,0x88,0x10,0x20,0x20,0x00,0x20,0x00,0x00,  // ?

0x00,0x00,0x70,0x88,0x98,0xA8,0xA8,0xB8,0x80,0x78,0x00,0x00,  // @
0x00,0x00,0x20,0x20,0x30,0x50,0x50,0x78,0x48,0xCC,0x00,0x00,  // A
0x00,0x00,0xF0,0x48,0x48,0x70,0x48,0x48,0x48,0xF0,0x00,0x00,  // B
0x00,0x00,0x78,0x88,0x80,0x80,0x80,0x80,0x88,0x70,0x00,0x00,  // C
0x00,0x00,0xF0,0x48,0x48,0x48,0x48,0x48,0x48,0xF0,0x00,0x00,  // D
0x00,0x00,0xF8,0x48,0x50,0x70,0x50,0x40,0x48,0xF8,0x00,0x00,  // E
0x00,0x00,0xF8,0x48,0x50,0x70,0x50,0x40,0x40,0xE0,0x00,0x00,  // F
0x00,0x00,0x38,0x48,0x80,0x80,0x9C,0x88,0x48,0x30,0x00,0x00,  // G
0x00,0x00,0xCC,0x48,0x48,0x78,0x48,0x48,0x48,0xCC,0x00,0x00,  // H
0x00,0x00,0xF8,0x20,0x20,0x20,0x20,0x20,0x20,0xF8,0x00,0x00,  // I
0x00,0x00,0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x90,0xE0,0x00,  // J
0x00,0x00,0xEC,0x48,0x50,0x60,0x50,0x50,0x48,0xEC,0x00,0x00,  // K
0x00,0x00,0xE0,0x40,0x40,0x40,0x40,0x40,0x44,0xFC,0x00,0x00,  // L
0x00,0x00,0xD8,0xD8,0xD8,0xD8,0xA8,0xA8,0xA8,0xA8,0x00,0x00,  // M
0x00,0x00,0xDC,0x48,0x68,0x68,0x58,0x58,0x48,0xE8,0x00,0x00,  // N
0x00,0x00,0x70,0x88,0x88,0x88,0x88,0x88,0x88,0x70,0x00,0x00,  // O

0x00,0x00,0xF0,0x48,0x48,0x70,0x40,0x40,0x40,0xE0,0x00,0x00,  // P
0x00,0x00,0x70,0x88,0x88,0x88,0x88,0xE8,0x98,0x70,0x18,0x00,  // Q
0x00,0x00,0xF0,0x48,0x48,0x70,0x50,0x48,0x48,0xEC,0x00,0x00,  // R
0x00,0x00,0x78,0x88,0x80,0x60,0x10,0x08,0x88,0xF0,0x00,0x00,  // S
0x00,0x00,0xF8,0xA8,0x20,0x20,0x20,0x20,0x20,0x70,0x00,0x00,  // T
0x00,0x00,0xCC,0x48,0x48,0x48,0x48,0x48,0x48,0x30,0x00,0x00,  // U
0x00,0x00,0xCC,0x48,0x48,0x50,0x50,0x30,0x20,0x20,0x00,0x00,  // V
0x00,0x00,0xA8,0xA8,0xA8,0x70,0x50,0x50,0x50,0x50,0x00,0x00,  // W
0x00,0x00,0xD8,0x50,0x50,0x20,0x20,0x50,0x50,0xD8,0x00,0x00,  // X
0x00,0x00,0xD8,0x50,0x50,0x20,0x20,0x20,0x20,0x70,0x00,0x00,  // Y
0x00,0x00,0xF8,0x90,0x10,0x20,0x20,0x40,0x48,0xF8,0x00,0x00,  // Z
0x00,0x38,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x38,0x00,  // [
0x00,0x40,0x40,0x40,0x20,0x20,0x10,0x10,0x10,0x08,0x00,0x00,  // <backslash>
0x00,0x70,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x70,0x00,  // ]
0x00,0x20,0x50,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ^
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,  // _

0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // `
0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x38,0x48,0x3C,0x00,0x00,  // a
0x00,0x00,0xC0,0x40,0x40,0x70,0x48,0x48,0x48,0x70,0x00,0x00,  // b
0x00,0x00,0x00,0x00,0x00,0x38,0x48,0x40,0x40,0x38,0x00,0x00,  // c
0x00,0x00,0x18,0x08,0x08,0x38,0x48,0x48,0x48,0x3C,0x00,0x00,  // d
0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x78,0x40,0x38,0x00,0x00,  // e
0x00,0x00,0x1C,0x20,0x20,0x78,0x20,0x20,0x20,0x78,0x00,0x00,  // f
0x00,0x00,0x00,0x00,0x00,0x3C,0x48,0x30,0x40,0x78,0x44,0x38,  // g
0x00,0x00,0xC0,0x40,0x40,0x70,0x48,0x48,0x48,0xEC,0x00,0x00,  // h
0x00,0x00,0x20,0x00,0x00,0x60,0x20,0x20,0x20,0x70,0x00,0x00,  // i
0x00,0x00,0x10,0x00,0x00,0x30,0x10,0x10,0x10,0x10,0x10,0xE0,  // j
0x00,0x00,0xC0,0x40,0x40,0x5C,0x50,0x70,0x48,0xEC,0x00,0x00,  // k
0x00,0x00,0xE0,0x20,0x20,0x20,0x20,0x20,0x20,0xF8,0x00,0x00,  // l
0x00,0x00,0x00,0x00,0x00,0xF0,0xA8,0xA8,0xA8,0xA8,0x00,0x00,  // m
0x00,0x00,0x00,0x00,0x00,0xF0,0x48,0x48,0x48,0xEC,0x00,0x00,  // n
0x00,0x00,0x00,0x00,0x00,0x30,0x48,0x48,0x48,0x30,0x00,0x00,  // o

0x00,0x00,0x00,0x00,0x00,0xF0,0x48,0x48,0x48,0x70,0x40,0xE0,  // p
0x00,0x00,0x00,0x00,0x00,0x38,0x48,0x48,0x48,0x38,0x08,0x1C,  // q
0x00,0x00,0x00,0x00,0x00,0xD8,0x60,0x40,0x40,0xE0,0x00,0x00,  // r
0x00,0x00,0x00,0x00,0x00,0x78,0x40,0x30,0x08,0x78,0x00,0x00,  // s
0x00,0x00,0x00,0x20,0x20,0x70,0x20,0x20,0x20,0x18,0x00,0x00,  // t
0x00,0x00,0x00,0x00,0x00,0xD8,0x48,0x48,0x48,0x3C,0x00,0x00,  // u
0x00,0x00,0x00,0x00,0x00,0xEC,0x48,0x50,0x30,0x20,0x00,0x00,  // v
0x00,0x00,0x00,0x00,0x00,0xA8,0xA8,0x70,0x50,0x50,0x00,0x00,  // w
0x00,0x00,0x00,0x00,0x00,0xD8,0x50,0x20,0x50,0xD8,0x00,0x00,  // x
0x00,0x00,0x00,0x00,0x00,0xEC,0x48,0x50,0x30,0x20,0x20,0xC0,  // y
0x00,0x00,0x00,0x00,0x00,0x78,0x10,0x20,0x20,0x78,0x00,0x00,  // z
0x00,0x18,0x10,0x10,0x10,0x20,0x10,0x10,0x10,0x10,0x18,0x00,  // {
0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,  // |
0x00,0x60,0x20,0x20,0x20,0x10,0x20,0x20,0x20,0x20,0x60,0x00,  // }
0x40,0xA4,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,  // ~
};

#ifdef BIG_AND_FAST
class anzeige
{
	public:
		anzeige(int x, int y, int cnt, int l, int c, int d);                                     /* x is width, y is height, l is latch-Pin, c is clock-Pin, d is data-Pin */
		~anzeige();                                                                     /* Destruktor */
		bool isSet(int s);                                                              /* get the State of a Pixel */
		bool setBit(int s, bool state);                                                 /* sets Pixel */
		bool resize(int x, int y);                                                      /* resizes the screen */
		bool clearAll();                                                                /* deletes the screen */
    bool getDataFromTheInternet(char* s, int g, char right, char wrong);            /* gets data from the Internet and converts it to Picture -----> as Chars */
    bool getDataFromTheInternet(char* s, unsigned int g);                           /* gets data from the Internet and converts it to Picture -----> as Chars, but reading the bits */
    bool getDataFromTheInternetHEX(const char* s, unsigned int g);                  /* gets data from the Internet and converts it to Picture -----> as Chars, which ones are in a HEX format */
    bool getDataFromTheInternetHEX(String& s, unsigned int g);                      /* gets data from the Internet and converts it to Picture -----> as String, which one is in an HEX format */
		bool setImage(int x, int y, int w, int h, bool** arr);                          /* Inserts a 2D-Array on the Screen */
		bool set(int x, int y, bool state);                                             /* sets a Pixel */
		bool render(int coulum, int dt = 0);                                            /* Loads the screen to the Array and shown it */
    bool randomize();                                                               /* generates Random Values */
    bool setAll(bool state);                                                        /* sets all Pixels to a Value */
    bool setText(int x, int y, char* s, unsigned int g);                            /* writes Text on the Screen -------> as Char */
    bool setText(int x, int y, const char* s, unsigned int g);                            /* writes Text on the Screen -------> as const Char */
    bool setText(int x, int y, String& s, unsigned int g);                          /* writes Text on the Screen -------> as String */
    bool printMap();                                                                /* prints all Data on the Serial Monitor */
    bool schach();                                                                  /* generates a chess-like screen */
    bool load(int coulum);                                                          /* loads the Pixels into the shift registers ------> horizontal screen */
    bool load(double angle, int l, int cam_pos_x = -1, int cam_pos_y = -1);         /* loads the Pixels into the shift registers ------> vertical screen */
    void apply();                                                                   /* shows the screen */

		int width, height, cnt_arms;
		int _latch, _clock, _data;
		bool** data = NULL;
};

anzeige::anzeige(int x, int y, int cnt, int l, int c, int d)
{
  /* setting Values and pinModes and creating array */
	width = x;
	height = y;

  cnt_arms = cnt;
  
 	_latch = l;
 	_clock = c;
 	_data = d;

   pinMode(_latch, OUTPUT);
   pinMode(_clock, OUTPUT);
   pinMode(_data, OUTPUT);

	data = new bool*[width];
	for(int i=0; i<width; i++)
		data[i] = new bool[height];
}
anzeige::~anzeige()
{
  /* Destruktor */
	for(int i=0; i<width; i++)
		delete[] data[i];
	delete[] data;
}
bool anzeige::clearAll()
{
  /* Deletes the Array */
	for(int i=0; i<width; i++)
		delete[] data[i];
	delete[] data;
	data = NULL;
}
bool anzeige::resize(int x, int y)
{
  /* Resize Array */
	if(x == width && y == height) /* if new size is the same as the old size do nothing */
		return true;

	width = x;
	height = y;

	for(int i=0; i<width; i++) /* Delete Array */
		delete[] data[i];
	delete[] data;

	data = new bool*[width]; /* Re-Create Array */
	for(int i=0; i<width; i++)
		data[i] = new bool[height];
}
bool anzeige::getDataFromTheInternet(char* s, int g, char right, char wrong) //TODO: Richtig machen
{
	int laenge = width*height;
	if(g != laenge)
		return false;

	for(int i=0; i<width; i++)
	{
		for(int t=0; t<height; t++)
			data[i][t] = s[(i*height) + t] == right ? 1 : 0;
	}
	return true;
}
bool anzeige::getDataFromTheInternet(char* s, unsigned int g)
{
  //noInterrupts();
  int laenge = width*height;
  if(g != laenge)
    return false;

  for(int i=0; i<g; i++)
  {
    for(int t=0; t<8; t++)
      data[((i*8)+t)%width][((i*8)+t)/width] = bitRead(s[i], t);
  }
  //interrupts();
  return true;
}
bool anzeige::getDataFromTheInternetHEX(const char* s, unsigned int g)
{
  byte tmp[g/2];
  for(int i=0; i<g; i)
  {
    char c1, c2;
    #ifdef DEBUG
      Serial.println(i);
    #endif
    c1 = s[i++];
    #ifdef DEBUG
      Serial.println(i);
    #endif
    c2 = s[i++];
    
    byte o, p = 0;
    o = hctob(c1);
    p = hctob(c2);
    tmp[i/2] = (o << 4) + p;

    #ifdef DEBUG
      Serial.print("o= ");
      Serial.println(o);
      Serial.print("p = ");
      Serial.println(p);
    #endif
    tmp[i/2] = (o << 4) + p;
    #ifdef DEBUG
      Serial.print(F("pos "));
      Serial.print(i/2);
      Serial.print(F(" is "));
      Serial.println(tmp[i/2]);
    #endif
  }
  
  for(int i=0; i<(g/2); i++)
  {
    for(int t=0; t<8; t++)
      data[((i*8)+t)%width][((i*8)+t)/width] = bitRead(tmp[i], t);
  }
}
bool anzeige::getDataFromTheInternetHEX(String& s, unsigned int g)
{
  noInterrupts();
  #ifdef DEBUG
    Serial.println(F("String Function"));
  #endif
  byte tmp;
  for(int i=0; i<g; i)
  {
    char c1, c2;
    #ifdef DEBUG
      Serial.println(i);
    #endif
    c1 = s[i++];
    #ifdef DEBUG
      Serial.println(i);
    #endif
    c2 = s[i++];

    tmp = hctob(c1) << 4;
    tmp += hctob(c2);
    for(int t=0; t<8; t++)
    {
      data[((i*8)+t)%width][((i*8)+t)/width] = bitRead(tmp, t);
      #ifdef DEBUG
        Serial.print(bitRead(tmp, t) ? "1" : "0");
      #endif
    }

    #ifdef DEBUG1
      Serial.print(F("pos "));
      Serial.print(i/2);
      Serial.print(F(" is "));
      Serial.println(tmp);
    #endif
  }
  interrupts();
}
bool anzeige::set(int x, int y, bool state)
{
	if(x > width || y > height || x < 0 || y < 0)
		return false;
	data[x][y] = state;     /* set Pixeel */
	return true;
}
bool anzeige::setImage(int x, int y, int w, int h, bool** arr)
{
  //noInterrupts();
	if(x < 0 || x < w || y < 0 || y < h)
		return false;

	for(int i=0; i<w; i++)
	{
		for(int t=0; t<h; t++)
			data[((x+i) < width) ? (x+i) : ((x+i)-width)][(y+t) < height ? (y+t) : ((y+t)-height)] =  arr[i][t]; /* wenn man über die Array-größe hinausschreibt, wird man an den Anfang der Anzeige zurückgesetzt */
	}
 //interrupts();
	return true;
}
bool anzeige::render(int coulum, int dt)
{
	if(coulum > width)
		return false;
	
	digitalWrite(_latch, HIGH);
	delay(dt);
	for(int i=0; i<height; i++)
	{
    digitalWrite(_data, data[coulum][i] == 0 ? LOW : HIGH);
    digitalWrite(_clock, HIGH);
    digitalWrite(_clock, LOW);
	}
  digitalWrite(_latch, LOW);
	return true;
}
bool anzeige::randomize()
{
  for(int i=0; i<width; i++)
  {
    for(int t=0; t<height; t++)
      data[i][t] = rand()%2;
  }
}
bool anzeige::setAll(bool state)
{
  if(!data)
    return false;
  for(int i=0; i<width; i++)
  {
    for(int t=0; t<height; t++)
      data[i][t] = state;
  }
  return true;
}
bool anzeige::setText(int x, int y, char* s, unsigned int g)
{
  //noInterrupts();
  #ifdef DEBUG
  Serial.println(F("------------------------- SET TEXT FUNCTION CALLED ------------------------------"));
    int delta1, delta2;
    delta1 = micros();
  #endif
  if(x + FONT_WIDTH > width || y + FONT_HEIGHT > height)
    return false;
  
  for(int i=0; i<g; i++)
  {
    char c;
    c = s[i];
    c -= 32;
    byte b = 0x01;
    for(int x1=0; x1<FONT_WIDTH; x1++)
    {
      b = b<<1;
      for(int y1=0; y1<FONT_HEIGHT; y1++)
      {
        //data[x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1][y + y1] = bitRead(SmallFont[c*FONT_HEIGHT + y1], x1);
        //data[(x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1)<width ? (x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1) : (x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1)-width][y + y1<height ? y + y1 : y + y1 - height] = SmallFont[c*FONT_HEIGHT + y1] & b;
        data[(x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1)<width ? (x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1) : (x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1)-width][y + y1<height ? y + y1 : y + y1 - height] = pgm_read_byte_near(SmallFont + (c*FONT_HEIGHT + y1)) & b;

      }
    }
  }
  #ifdef DEBUG
    delta2 = micros();
    Serial.print(F("delta1 = "));
    Serial.println(delta1);
    Serial.print(F("delta2 = "));
    Serial.println(delta2);
    Serial.println(F("diff: "));
    Serial.println(delta2 - delta1);
  #endif
  //interrupts();
  return true;
}
bool anzeige::setText(int x, int y, const char* s, unsigned int g)
{
  //noInterrupts();
  #ifdef DEBUG
  Serial.println(F("------------------------- SET TEXT FUNCTION CALLED ------------------------------"));
    int delta1, delta2;
    delta1 = micros();
  #endif
  if(x + FONT_WIDTH > width || y + FONT_HEIGHT > height)
    return false;
  
  for(int i=0; i<g; i++)
  {
    char c;
    c = s[i];
    c -= 32;
    byte b = 0x01;
    for(int x1=0; x1<FONT_WIDTH; x1++)
    {
      b = b<<1;
      for(int y1=0; y1<FONT_HEIGHT; y1++)
      {
        //data[x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1][y + y1] = bitRead(SmallFont[c*FONT_HEIGHT + y1], x1);
        //data[(x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1)<width ? (x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1) : (x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1)-width][y + y1<height ? y + y1 : y + y1 - height] = SmallFont[c*FONT_HEIGHT + y1] & b;
        data[(x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1)<width ? (x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1) : (x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1)-width][y + y1<height ? y + y1 : y + y1 - height] = pgm_read_byte_near(SmallFont + (c*FONT_HEIGHT + y1)) & b;

      }
    }
  }
  #ifdef DEBUG
    delta2 = micros();
    Serial.print(F("delta1 = "));
    Serial.println(delta1);
    Serial.print(F("delta2 = "));
    Serial.println(delta2);
    Serial.println(F("diff: "));
    Serial.println(delta2 - delta1);
  #endif
  //interrupts();
  return true;
}
bool anzeige::setText(int x, int y, String& s, unsigned int g)
{
  //noInterrupts();
  #ifdef DEBUG
    Serial.println(F("String"));
    Serial.println(F("------------------------- SET TEXT FUNCTION CALLED ------------------------------"));
    int delta1, delta2;
    delta1 = micros();
  #endif
  if(x + FONT_WIDTH > width || y + FONT_HEIGHT > height)
    return false;
  
  for(int i=0; i<g; i++)
  {
    char c;
    c = s[i];
    c -= 32;
    byte b = 0x01;
    for(int x1=0; x1<FONT_WIDTH; x1++)
    {
      b = b<<1;
      for(int y1=0; y1<FONT_HEIGHT; y1++)
      {
        //data[x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1][y + y1] = bitRead(SmallFont[c*FONT_HEIGHT + y1], x1);
        //data[(x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1)<width ? (x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1) : (x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1)-width][y + y1<height ? y + y1 : y + y1 - height] = SmallFont[c*FONT_HEIGHT + y1] & b;
        data[(x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1)<width ? (x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1) : (x + i*FONT_WIDTH + (FONT_WIDTH-x1)-1)-width][y + y1<height ? y + y1 : y + y1 - height] = pgm_read_byte_near(SmallFont + (c*FONT_HEIGHT + y1)) & b;
      }
    }
  }
  #ifdef DEBUG
    delta2 = micros();
    Serial.print(F("delta1 = "));
    Serial.println(delta1);
    Serial.print(F("delta2 = "));
    Serial.println(delta2);
    Serial.println(F("diff: "));
    Serial.println(delta2 - delta1);
  #endif
  //interrupts();
  return true;
}
bool anzeige::printMap()
{
  Serial.println("\n\n----------------------------------- DISPLAY BINARY MAP -------------------------------------\n");
  for(int i=0; i<height; i++)
  {
    for(int t=0; t<width; t++)
      Serial.print(data[t][i] == 0 ? " " : "#");
    Serial.println();
  }
}
bool anzeige::schach()
{
  setAll(0);
  
  for(int i=0; i<width; i++)
  {
    for(int t=0; t<height; t++)
    {
      if(i%2 == 0 && t%2 == 1 || i%2 == 1 && t%2 == 0)
      {
        data[i][t] = 1;
      }
    }
  }
}
bool anzeige::load(int coulum)
{
  double length_of_strips;
  #ifdef DEBUG
    unsigned long int d1, d2;
    d1 = micros();
    Serial.print(F("loading coulum "));
    Serial.println(coulum);
  #endif
  if(coulum >= width)
  {
    #ifdef DEBUG
      Serial.println("ERROR");
    #endif
    return false;
  }
  length_of_strips = width/ (double)cnt_arms;
  digitalWrite(_latch, HIGH);
  for(int t=0; t < cnt_arms; t++)
  {
    for(int i=0; i<height; i++)
    {
      digitalWrite(_data, data[(int)(coulum + (int)(t*length_of_strips)) < width ? (int)((coulum + (int)t*length_of_strips)) : (int)((coulum + (int)(t*length_of_strips)) - width)][i] == 0 ? LOW : HIGH);
      digitalWrite(_clock, HIGH);
      digitalWrite(_clock, LOW);
    }
  }
  #ifdef DEBUG
    d2 = micros() - d1;
    Serial.println(d2, DEC);
  #endif
  return true;
}
bool anzeige::load(double angle, int l, int cam_pos_x, int cam_pos_y)    //TODO:
{
  Serial.println("function");
  noInterrupts();
  #ifdef DEBUG
    unsigned long int d1, d2;
    d1 = micros();
  #endif
  double angle_of_strips, a;
  int x, y, x_render, y_render;

  if(cam_pos_x >= width || cam_pos_x < 0 || cam_pos_y >= height || cam_pos_y < 0)
    return false;
  
  angle -= 90;
  if(angle < 0);
    angle = 360-angle;
  if(cam_pos_x == -1 && cam_pos_y == -1)
  {
    cam_pos_x = width/ 2;
    cam_pos_y = height/ 2;
  }

  angle_of_strips = 360/ cnt_arms;
  digitalWrite(_latch, HIGH);
  for(int t=0; t < cnt_arms; t++)
  {
    for(int i=0; i<l; i++)
    {
      a = (angle + t*angle_of_strips) < 360 ? (angle + t*angle_of_strips) : (angle + t*angle_of_strips) - 360;
      x = cos(a) * i;
      y = sin(a) * i;

      #ifdef DEBUG
        delay(1);
      #endif
      
       if(x + cam_pos_x < 0)
        x_render = x + cam_pos_x + width;
      else if(x + cam_pos_x >= width)
        x_render = x + cam_pos_x - width;
      
      if(y + cam_pos_y < 0)
        y_render = y + cam_pos_y + height;
      else if(y + cam_pos_y >= height)
        y_render = y + cam_pos_y - height;

      #ifdef DEBUG
        Serial.print("sin(a) = ");
        Serial.println(sin(a));
        Serial.print("cos(a) = ");
        Serial.println(cos(a));
        Serial.print("x = ");
        Serial.println(x);
        Serial.print("y = ");
        Serial.println(y);
        Serial.print("i = ");
        Serial.println(i);
        Serial.print("x_render = ");
        Serial.println(x_render);
        Serial.print("y_render = ");
        Serial.println(y_render);
        Serial.println();
      #endif
                
      digitalWrite(_data, data[x_render][y_render] == 0 ? LOW : HIGH);
      digitalWrite(_clock, HIGH);
      digitalWrite(_clock, LOW);
    }
  }
  #ifdef DEBUG
    d2 = micros() - d1;
    Serial.println(d2, DEC);
  #endif
  interrupts();
  return true;
}
void anzeige::apply()
{
  #ifdef DEBUG
    Serial.println(F("Applying the States"));
  #endif
  digitalWrite(_latch, LOW);
}
#endif





















































































#ifdef SMALL_AND_SLOW
class anzeige
{
  public:
    anzeige(int x, int y, int l, int c, int d);
    ~anzeige();
    bool isSet(int s);
    bool setBit(int s, bool state);
    bool resize(int x, int y);
    bool clearAll();
    bool getDataFromTheInternet(char* s, int g);
    bool setImage(int x, int y, int w, int h, bool** arr);
    bool set(int x, int y, bool state);
    bool load(int coulum);
    bool render(int coulum);

    int width, height, byte_width, byte_height;
    int _latch, _clock, _data;
    byte** data = NULL;
    bool*  tmp  = NULL;
};

anzeige::anzeige(int x, int y, int l, int c, int d)
{
  width = x;
  height = y;

  byte_width = (width%8 == 0 ? width/8 : 1+(width/8));

  _latch = l;
  _clock = c;
  _data = d;

  data = new byte*[byte_width];
  for(int i=0; i<byte_width; i++)
    data[i] = new byte[height];
}
anzeige::~anzeige()
{
  for(int i=0; i<byte_width; i++)
    delete[] data[i];
  delete[] data;
}
bool anzeige::clearAll()
{
  for(int i=0; i<byte_width; i++)
    delete[] data[i];
  delete[] data;
  data = NULL;
}
bool anzeige::resize(int x, int y)
{
  if(x == width && y == height)
    return true;

  width = x;
  height = y;

  if(width%8 == 0)
    byte_width = width/8;
  else
    byte_width = 1+(width/8);

  for(int i=0; i<byte_width; i++)
    delete[] data[i];
  delete[] data;

  data = new byte*[byte_width];
  for(int i=0; i<byte_width; i++)
    data[i] = new byte[height];
}
bool anzeige::getDataFromTheInternet(char* s, int g) //TODO: Richtig machen
{
  int laenge = width*height;
  if(g != laenge)
    return false;

  for(int i=0; i<width; i++)
  {
    for(int t=0; t<height; t++)
      data[i][t] = s[(i*height) + t];
  }
  return true;
}
bool anzeige::set(int x, int y, bool state)
{
  if(x > width || y > height || x < 0 || y < 0)
    return false;
  bitWrite(data[x/8][y], x%8, state);
  return true;
}
bool anzeige::setImage(int x, int y, int w, int h, bool** arr)
{
  if(x < 0 || x < w || y < 0 || y < h)
    return false;

  for(int i=0; i<w; i++)
  {
    for(int t=0; t<h; t++)
      bitWrite(data[((x+i) < width) ? (x+i)/8 : ((x+i)-width)/8][(y+t) < height ? (y+t) : ((y+t)-height)], x%8, arr[i][t]); /* wenn man über die Array-größe hinausschreibt, wird man an den Anfang der Anzeige zurückgesetzt */
  }
  return true;
}
bool anzeige::load(int coulum)
{
  if(tmp || coulum > width)
    return false;
  
  tmp = new bool[height];
  for(int i=0; i<height; i++)
  {
    tmp[i] = bitRead(data[coulum/8][i], coulum%8);
  }
  return true;
}
bool anzeige::render(int coulum)
{
  if(coulum > width || !tmp)
    return false;
  
  digitalWrite(_latch, HIGH);
  for(int i=0; i<height; i++)
  {
    digitalWrite(_data, tmp[i] == 0 ? LOW : HIGH);
    digitalWrite(_clock, HIGH);
    digitalWrite(_data, LOW);
    digitalWrite(_clock, LOW);
  }
  delete[] tmp;
  tmp = NULL;
  
  return true;
}
#endif
