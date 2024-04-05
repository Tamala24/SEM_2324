#include <stdio.h>
void delay(uint16_t retardo);

void app_main(void)
{
    for(;;)
    {
        printf("Hola, Mundo\n\r");
        delay(50);
    }
}
void delay(uint16_t retardo)
{
    while(retardo--) 
    {
        for(volatile uint32_t i = 0; i < 100000UL; i++) {};
    }
}