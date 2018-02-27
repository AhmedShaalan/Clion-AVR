#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRC = 0xFF; //make PORTC as Output

    //infinite loop
    while (1) {
        PORTC = 0xFF;       //Turns ON All LEDs
        _delay_ms(10);      //1 second delay
        PORTC = 0x00;       //Turns OFF All LEDs
        _delay_ms(10);      //1 second delay
    }
}