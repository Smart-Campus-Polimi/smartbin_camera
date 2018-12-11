/*
WIFI 
  1 wlan_salt *
  2 iotpolimi
  3 vodafone 5g
  4 saponetta
*/
/*
BROKER
1 aws surf
2 cluster
3 aws UC15 *
*/
/*
 * HOST
 * 1 ﻿virtual machine
 * 2 cluster *
 */
#define WIFI 1 
#define BROKER 1 
#define HIGH_QUALITY 2
#define HOST 2
#define API_PAGE "/image_api.php"


/* TIME TO PICS CONFIG */
#define SECOND_PAUSE 200 //Seconds to wait before making a pic
#define TIME_TO_PIC 3
/* ULTRASOUND SENSOR RANGE*/
#define RANGE_MIN 4
#define RANGE_MAX 20

/* PIN CONFIG */
#define CS_CAM 0 // set pin 0 as the slave select for the digital pot:
#define LED_UNSORTED 1
#define LED_PLASTIC 2
#define LED_PAPER 3
#define LED_DISTANCE_OK 4
#define LED_DISTANCE_NO 5
#define ECHO_PIN 6
#define TRIG_PIN 7
/*********** WIFI CONFIG ***********/

#if WIFI == 1
  #define SSID_WIFI "wlan_saltuaria"
  #define PASS_WIFI "antlabpolitecnicomilano"
#endif

#if WIFI == 2
  #define SSID_WIFI "IoTPolimi"
  #define PASS_WIFI "ZpvYs=gT-p3DK3wb"
#endif

#if WIFI == 3
  #define SSID_WIFI "HUAWEI-5GCPE-D858"
  #define PASS_WIFI "Vodafone5G"
#endif

#if WIFI == 4
  #define SSID_WIFI "VodafoneMobileWiFi-ECE395"
  #define PASS_WIFI "3890107988"
#endif
/*********** END WIFI ***********/


/*********** BROKER CONFIG ***********/
#if BROKER == 1
  #define MQTT_BROKER "ec2-35-166-12-244.us-west-2.compute.amazonaws.com"
#endif

#if BROKER == 2
  #define MQTT_BROKER "10.79.5.210"
#endif

#if BROKER == 3
  #define MQTT_BROKER "34.222.27.8"
#endif
/*********** END BROKER ***********/

/*********** HOST CONFIG ***********/
#if HOST == 1
  #define HOST "192.168.1.65"
#endif
#if HOST == 2
  #define HOST "10.79.5.210"
#endif
/*********** END HOST ***********/


/*********** QUALITY CONFIG ***********/
#if HIGH_QUALITY == 1
  #define IMAGE_QUALITY OV5642_640x480
#else
    #define IMAGE_QUALITY OV5642_320x240
#endif
/*********** END QUALITY ***********/

