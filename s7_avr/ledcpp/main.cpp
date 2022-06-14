#define F_CPU 16000000UL

#include <avr/io.h>
#include <avr/delay.h>

class Led
{
public:
    Led()
    {
        DDRA = 0xff;
        PORTA = 0x00;
    }
    void toggle()
    {
        _delay_ms(500);
        PORTA = ~PORTA;
    }
};
int main()
{
    Led ledcolors;

    while (1)
    {
        ledcolors.toggle();
    }
}