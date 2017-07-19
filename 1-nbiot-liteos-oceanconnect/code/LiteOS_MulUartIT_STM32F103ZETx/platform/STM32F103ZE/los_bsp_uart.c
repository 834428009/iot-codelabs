#include "los_bsp_uart.h"
#include <stdarg.h>

#include "los_sem.h"
#include "los_base.ph"
#include "los_hwi.h"
#include "los_api_sem.h"

#ifdef LOS_STM32F103ZETx
#include "stm32f1xx_hal.h"


UART_HandleTypeDef UartHandle;

UINT32 g_uartrSemID;

static char uartfifo[2][1056];
static int curbuf = 0;

//#define LOS_UART_IT 1

void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
void _Error_Handler(char * file, int line)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  while(1) 
  {
  }
  /* USER CODE END Error_Handler_Debug */ 
}


#endif



void LOS_EvbUartInit(void)
{
#ifdef LOS_STM32F103ZETx

#endif
    
    return;
}


/*************************************************************************************************
 *  ���ܣ��򴮿�1����һ���ַ�                                                                    *
 *  ������(1) ��Ҫ�����͵��ַ�                                                                   *
 *  ���أ�                                                                                       *
 *  ˵����                                                                                       *
 *************************************************************************************************/
void LOS_EvbUartWriteByte(char c)
{
#ifdef LOS_STM32F103ZETx

#endif
	return ;
}

/*************************************************************************************************
 *  ���ܣ��򴮿�1����һ���ַ���                                                                  *
 *  ������(1) ��Ҫ�����͵��ַ���                                                                 *
 *  ���أ�                                                                                       *
 *  ˵����                                                                                       *
 *************************************************************************************************/
void LOS_EvbUartWriteStr(const char* str)
{
	
#ifdef LOS_STM32F103ZETx
 
#endif
	return ;
}

void LOS_EvbUartWriteStr2(const char* str, unsigned short len)
{
	
#ifdef LOS_STM32F103ZETx
 
#endif
	return ;
}

/*************************************************************************************************
 *  ���ܣ��Ӵ���1����һ���ַ�                                                                    *
 *  ������(1) �洢���յ����ַ�                                                                   *
 *  ���أ�                                                                                       *
 *  ˵����                                                                                       *
 *************************************************************************************************/
void LOS_EvbUartReadByte(char* c)
{
#ifdef LOS_STM32F103ZETx

#endif
	return ;
}

void LOS_EvbUartStartReadIT(unsigned short len)
{
#ifdef LOS_STM32F103ZETx
 
#endif
	return ;
}

int LOS_EvbUartReadByte2(char* c, unsigned short len, unsigned int timeout)
{
    int rdlen = 0;
#ifdef LOS_STM32F103ZETx
 
#endif
	return rdlen;
}


#ifdef LOS_STM32F103ZETx
//static char _buffer[128];
#endif
void LOS_EvbUartPrintf(char* fmt, ...)
{
#ifdef LOS_STM32F103ZETx

#endif
    return;
}
