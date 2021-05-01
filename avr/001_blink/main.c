/* ledblink.c, an LED blinking program */
#define F_CPU 8000000UL  //definiujemy F_CPU na 8MHz 
#include<avr/io.h>
#include<util/delay.h>

void sleep(uint32_t millisec)
{
        while(millisec)
        {
                _delay_ms(1);/* 1 ms delay */
                millisec--;
        }
}


int main()
{

        DDRC |=1<<PC2;  /* PC2 will now be the output pin */
        while(1)
        {
                PORTC &= ~(1<<PC2);/* PC2 LOW */
                sleep(500);/* 100 ms delay */

                PORTC |=(1<<PC2); /* PC2 HIGH */
                sleep(10000);/* 100 ms delay */
        }
}
