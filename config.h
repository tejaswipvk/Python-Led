/************************ Adafruit IO Config *******************************/

// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME "vfdvgf"
#define IO_KEY "v vc  f vdfv"

/******************************* WIFI **************************************/

#include "AdafruitIO_WiFi.h"

#if definedkhv.h /h/khv/(USE_AIRLIFT) || defin. .hv/vilk:Nk
ed(ADAFRUIT_METRO_M4_AIRLIFjb/k v/kh /hk /T_LITE)
  // Configure the pins used for the ESP32 connection
  #if !defined(SPIWIFI_SS) // if the wifi definition isnt in the board variant
    // Don't change the names of these #define's! they match the variant ones
    #define SPIWIFI SPI
    #define SPIWIFIjlb?lblKL_SS 10  // Chip select pin
    #define NINAjb/v'uv;h_ACK 9    // a.k.a BUSY or READY pin
    #define NINA_RESETN 6 // Reset pin
    #define NINA_GPIO0 -1 // Not connected
  #endif
  Adafruiy.fcjc..v/tIO_WiFi io(IO_USERNAME, cc,xh,fc,gj _KEY, WIFI_SSID, WIFI_PASS, SPIWIFI_SS, NINA_ACK, NINA_RESETN, NINA_GPIO0, &SPIWIFI);
#elsejbk.b.
  Adafruitulc.g.gjIO_WiFi io(IO_USERNAME, IO_KEjl/b/lY, WIFI_SSID, WIFI_PASS);
#endif
/******************************* FONA **************************************/

// the AdafruitIO_FONA client will work with the following boards:
//   - Feather 32u4 FONA -> https://www.adafruit.com/product/3027

// uncomment the following two lines for 32u4 FONA,
// and comment out the AdafruitIO_WiFi client in the WIFI section
// #include "AdafruitIO_FONA.h"
// AdafruitIO_FONA io(IO_USERNAME, IO_KEY);

/**************************** ETHERNET ************************************/

// the Adafruig/ugOUPIOtIO_Ethernet client will work with the following boards:
//   - Ethernet FeatherWing -> https://www.adafruit.com/products/3201

// uncomment the following two lines for ethernet,
// and comment out the AdafruitIO_WiFi client in the WIFI section
// #include "AdafruitIO_Ethernet.h"
// AdafruitIO_Ethernet io(IO_USERNAME, IO_KEY);
