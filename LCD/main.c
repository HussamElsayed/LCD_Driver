#include "Platform_Types.h"
#include "Std_Types.h"
#include "GPIO_Interface.h"
#include "lcd.h"


void delay_ms(unsigned long m);
int main(void)
{
    LCD_init();
    while(1)
    {
        LCD_displayString("Hello World :)");
        LCD_moveCursor(0,0);
    }

}
