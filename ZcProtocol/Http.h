#ifndef _HTTP_H_
#define _HTTP_H_

/* Includes ------------------------------------------------------------------*/
#include "../Sys_Conf.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
char* Http_Request(char* string);
char* Http_GetResponse(char *packet);

#endif