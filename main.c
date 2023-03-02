/*
 * main.c
 *
 * Created: 2/19/2023 11:18:45 PM
 * Author : Mohamed Abdel_tawab Farghal
 */ 

#define F_CPU 8000000UL
#include "util/delay.h"
#include <avr/io.h>
#include "DIO_interface.h"
#include "SSD_interface.h"



int main(void)
{
	u8 count=0;
	s8 J=0;
	
  button_voidInit ( DIO_PORTB , DIO_PIN0  , DIO_PIN_INPUT  );
 
DIO_voidSetPinDirection  ( DIO_PORTD, DIO_PIN0 , DIO_PIN_OUTPUT);
DIO_voidSetPinDirection  ( DIO_PORTD, DIO_PIN1 , DIO_PIN_OUTPUT);
DIO_voidSetPinDirection  ( DIO_PORTD, DIO_PIN2 , DIO_PIN_OUTPUT);
DIO_voidSetPinDirection  ( DIO_PORTD, DIO_PIN3 , DIO_PIN_OUTPUT);
 
 
   SSD_voidItnial_Port(DIO_PORTA);
  SSD_voidItnial_Port(DIO_PORTC);

  
    while (1) 
    {
	// ********************* the code counts from 0 to 9 then from 9 to 0  ************************	
		
		 for(count=0;count<10;count++)
		 {
			 SSD_voidSetNnmber_Cathod(DIO_PORTC, count);
			 _delay_ms(1000);
		 }
		 for(count=9;count>=0;count--)
		 {
			 SSD_voidSetNnmber_Cathod(DIO_PORTC, count);
			 _delay_ms(1000);
		 } 
	
// ******************** the code below display numbers from 0:99	*****************
		/*
		
		for(count=0;count<10;count++)
		{
			SSD_voidSetNnmber_Cathod(DIO_PORTA, count);
			for( J=0 ; J<10 ;J++){
				SSD_voidSetNnmber_Cathod( DIO_PORTC, J);
				_delay_ms(1000);
			}
		}
		*/
		
	//************************  the code makes the animation  ****************	
	
	/*
		for(J=0;J<6;J++){
			DIO_voidSetPinValue      ( DIO_PORTC, J , 1);
			_delay_ms(100);
	}
      DIO_voidPortValue(DIO_PORTC,0);
	  */
		
// *************************	the code below for button counter	******************
	/*
	
	if(button_voidGetPinValue ( DIO_PORTB,   DIO_PIN0 )==0)
	{
		count++;
	}
	if(count>9){
		count=0;
	}
	SSD_voidSetNnmber_Cathod( DIO_PORTA,count );
	_delay_ms(250); 
	*/
	
	// *************************	the code below use bcd	******************
	/*
	
	for(count=0;count<10;count++)
	{
		DIO_voidSetlownibble     (DIO_PORTD, count);
		_delay_ms(1000);
	}
	*/
	
	
	
	
}
}


