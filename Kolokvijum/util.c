/**
 * @file util.c
 * @brief Koristi se za definiciju pomocnih funkcija
 * @author Srecko Veselinovic
 * @date 16-05-2021
 */

#include <string.h>
#include "util.h"
#include "../usart/usart.h"

/**********************************************************************************/
void Sort(int16_t* array, int16_t array_length, int8_t mode)
{
	int16_t tmp;
	array_length = strlen(array);
	uint8_t i, j;

	/// Algoritam za sortiranje u rastucem poretku
	if(mode == UP)
	{
		for(i = 0; i < array_length; i++)
		{
			for(j = i+1; j < array_length - i - 1; j++)
			{
				if(array[i] > array[j])
				{
					tmp = array[i];
					array[i] = array[j];
					array[j] = tmp;
				}
			}
		}
	}

	/// Algoritam za sortiranje u opadajucem poretku
	if (mode == DOWN)
	{
		for(i = 0; i < array_length; i++)
		{
			for(j = i+1; j < array_length - i - 1; j++)
			{
				if(array[i] < array[j])
				{
					tmp = array[i];
					array[i] = array[j];
					array[j] = tmp;
				}
			}
		}
	}
}
