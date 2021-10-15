#pragma once

//CONSTANTS
#define ADV7280 0
#define ADV7180Q32 1

//CONFIG
#define DECODER ADV7180Q32

//BOARD VERSION
#define BOARD_VERSION_MAJOR 3
#define BOARD_VERSION_MINOR 0

//OLED SUPPORT
#define OLED_ENABLED

#if (BOARD_VERSION_MAJOR==2)
//TODO
#elif (BOARD_VERSION_MAJOR==3)
//PINS
#define LED_INPUT PIN_PD5
#define LED_LOCK PIN_PD6
#define LED_SIGNAL PIN_PB1

#define BTN_INPUT PIN_PD3
//#define BTN_MENU PB0
#define BTN_MINUS PIN_PB2 
#define BTN_PLUS PIN_PD7
#define RESET_ADV PIN_PD2
#endif
