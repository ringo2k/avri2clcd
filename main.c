/*
 * main.c
 *
 *  Created on: 04.03.2014
 *      Author: christoph
 */
#include <avr/io.h>
#include <avr/delay.h>

void wait_ms(unsigned int time)
{
	while(time--)
		_delay_ms(1);
}


int main()
{
	// GREEN LED config on PB2
	DDRB |= ( 1 << PB2);
	while(1)
	{
		wait_ms(1000);
		PORTB ^= (1 << PB2);
	}
	return 0;
}
