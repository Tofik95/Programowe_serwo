/*
 * uartt.h
 *
 *  Created on: 09.11.2017
 *      Author: dorota
 */

#ifndef UARTT_H_
#define UARTT_H_

#define BAUD 115200			//dla fclk = 11 059200
#define MYUBBR 5


void uartPut(uint8_t c);
uint8_t uartGet();
void uartInit(void);
void calibrate();

char str[16];				//tablica do przyjmowania komend z UARTA



#endif /* UARTT_H_ */

