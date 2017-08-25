// For this project, I have written one extra function in the WebServer Class
// If you want to compile, you have to add
//    - "char argChar(String name, int number);        // get request argument value by name// - "
//    to the File ESP8266WebServer.h
//
//    - "
//	char ESP8266WebServer::argChar(String name, int number) {
//      	for (int i = 0; i < _currentArgCount; ++i) {
//			if ( _currentArgs[i].key == name )
//				return _currentArgs[i].value[number];
//			}
//	 }"
//	 to the File ESP8266WebServer.cpp
//
// These files can be found:
// -Linux:  	$(HOME)/.arduino15/packages/esp8266/hardware/esp8266/2.3.0/libraries/ESP8266WebServer/src
// -Mac:    	unknown
// -Windows:	unknown
