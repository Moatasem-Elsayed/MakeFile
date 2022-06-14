#define F_CPU 16000000UL

#include <avr/io.h>
#include <avr/delay.h>
int main()
{
    DDRA = 0xff;
    PORTA = 0x00;
    while (1)
    {
        _delay_ms(500);
        PORTA = ~PORTA;
    }
}