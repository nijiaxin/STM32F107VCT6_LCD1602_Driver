#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "led.h"
#include "lcd1602.h"

int main(void)
{
	u8 str[] = "ATOM@ALIENTEK";
	
	delay_init();
	NVIC_Configuration();
	uart_init(9600);
	GPIO_Configuration();
	LED_Init();
	LCD_BACK();
	LCD1602_Init();
	LCD1602_Show_Str(1, 0, str);
 	LCD1602_Show_Str(2, 1, "I love STM32");//ÁÐ ÐÐ ÎÄ×Ö
	while(1)
	{
		delay_ms(2000);
		delay_ms(2000);
		delay_ms(2000);
		LCD1602_ClearScreen();
		//LCD1602_Write_Cmd(0x18);
		LCD1602_Show_Str(0,0, "Ikkkkkkkkkkk");
		LCD1602_Show_Str(1,0, "L");
		LED0 = 0;
		delay_ms(200);
		LED0 = 1;
		delay_ms(200);
	}
}

