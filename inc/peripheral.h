/**
  ******************************************************************************
  * @file    Project/STM32F4xx_StdPeriph_Templates/pheripheral.h 
  * @author 
  * @version 
  * @date   
  * @brief   Header for pheripheral.c module
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PERIPHERAL_H
#define __PERIPHERAL_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"

void _initGPIO( void );
void _initTIMER( void );
void _initNVIC( void );

#endif /* __PERIPHERAL_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
