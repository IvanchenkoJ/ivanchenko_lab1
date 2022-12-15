#include "stm32f10x.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
//--------Prototipe functions-----
void delay(void);
int main(void)
{
 int i;
 GPIO_InitTypeDef GPIO_InitStructure;
 /* Initialize LED which connected to PA7 */
 // Enable PORTC Clock
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
 /* Configure the GPIO_LED pin */
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
 GPIO_Init(GPIOA, &GPIO_InitStructure);
 //GPIO_SetBits(GPIOA, GPIO_Pin_7); // Set A7 to High level ("1")
 GPIO_ResetBits(GPIOA, GPIO_Pin_7); // Set A7 to Low level ("0")
/* Initialize Button input PA7 */
 // Enable PORTB Clock
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
 /* Configure the GPIO_BUTTON pin */
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_15;
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
 GPIO_Init(GPIOB, &GPIO_InitStructure);
 while (1) {
 if (GPIO_ReadInputDataBit(GPIOB, GPIO_Pin_15) != 0) {
 /* Toggle LED which connected to PA7*/
 GPIO_ResetBits(GPIOA, GPIO_Pin_7); // Set A7 to Low level ("0")
 /* delay */
void delay(void);
 /* Toggle LED which connected to PA7*/

 /* delay */
void delay(void); }
 else { GPIO_SetBits(GPIOA, GPIO_Pin_7); }
GPIO_SetBits(GPIOA, GPIO_Pin_7); 
void delay(void);
GPIO_ResetBits(GPIOA, GPIO_Pin_7); 
void delay(void);
GPIOC->ODR&=~GPIO_Pin_7;
void delay(void);
GPIOC->ODR|=GPIO_Pin_7;
void delay(void);
 }
}
//-------------functions -----------
void delay(void) { 
int i;
	for(i=0;i<0x100000;i++); 
}
