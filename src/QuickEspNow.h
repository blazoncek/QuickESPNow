#ifndef _QUICK_ESPNOW_h
#define _QUICK_ESPNOW_h

#ifndef _DEBUG_h
#define DEBUG_INFO(...)
#define DEBUG_WARN(...)
#define DEBUG_ERROR(...)
#define DEBUG_DBG(...)
#define DEBUG_VERBOSE(...)
#endif

#if defined ESP32
#include "QuickEspNow_esp32.h"
#elif defined ESP8266
#include "QuickEspNow_esp8266.h"
#else
#error "Unsupported platform"
#endif //ESP32

#endif //_QUICK_ESPNOW_h