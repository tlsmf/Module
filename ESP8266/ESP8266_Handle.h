#ifndef _ESP8266_HANDLE_H_
#define _ESP8266_HANDLE_H_

/* Includes ------------------------------------------------------------------*/
#include "../UartDma/SimpleBuffer.h"
#include "../Sys_Conf.h"

/* Public typedef ------------------------------------------------------------*/
/* Public define -------------------------------------------------------------*/
/* Public macro --------------------------------------------------------------*/
/* Public variables ----------------------------------------------------------*/
/* Public function prototypes ------------------------------------------------*/
void ESP8266_SendData(uint8_t *data, uint16_t length);
void ESP8266_SendString(const char *string);
void ESP8266_HardWareReset();

#endif