/**
 * @file main.c
 * @brief Glavni fajl koji objedinjuje sve biblioteke sa zadatka
 * @author Srecko Veselinovic
 * @date 16-05-2021
 */


#include <stdio.h>
#include <string.h>
#include <util/delay.h>
#include "pin.h"
#include "../timer0/timer0.h"
#include "../usart/usart.h"

int main()
{
	usartInit(9600);
	usartPutString("Unesite niz: \r\n");


	return 0;
}
