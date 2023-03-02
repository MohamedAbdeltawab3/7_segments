/*
 * *****************************  SSD_program.C **************************************************
 *
 * Created: 2/19/2023 11:18:45 PM
 * Author : Mohamed Abdel_tawab Farghal
 * Layer  : HAL
 * SWC    : SSD
 */

 #include "STD_TYPES.h"
 #include "BIT_MATH.h"

 #include "DIO_interface.h"
 
 #include "SSD_interface.h" 

static u8 Local_u8SSDNumber[10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};




void SSD_voidItnial_Port(u8 Copy_u8PORT)
{
	DIO_voidPortDirection        ( Copy_u8PORT , 0xff    );
}


void SSD_voidSetNnmber_Cathod(u8 Copy_u8PORT, u8 Copy_u8Number)
{
	DIO_voidPortValue        ( Copy_u8PORT , Local_u8SSDNumber[Copy_u8Number]    );
	
}

void SSD_voidSetNnmber_Anode(u8 Copy_u8PORT, u8 Copy_u8Number)
{
	DIO_voidPortValue        ( Copy_u8PORT , ~( Local_u8SSDNumber[Copy_u8Number] )   );	
}


void SSD_voidEnable_Cathod (u8 Copy_u8PORT,u8 Copy_u8PIN)
{
	DIO_voidSetPinDirection  ( Copy_u8PORT ,  Copy_u8PIN , DIO_PIN_OUTPUT);
	DIO_voidSetPinValue      ( Copy_u8PORT ,  Copy_u8PIN ,DIO_PIN_LOW );
}


void SSD_voidEnable_Anode (u8 Copy_u8PORT,u8 Copy_u8PIN)
{
	DIO_voidSetPinDirection  ( Copy_u8PORT ,  Copy_u8PIN , DIO_PIN_OUTPUT);
	DIO_voidSetPinValue      ( Copy_u8PORT ,  Copy_u8PIN ,DIO_PIN_HIGH );
}


void SSD_voidDisable_Cathod (u8 Copy_u8PORT,u8 Copy_u8PIN)
{
	DIO_voidSetPinDirection  ( Copy_u8PORT ,  Copy_u8PIN , DIO_PIN_OUTPUT);
	DIO_voidSetPinValue      ( Copy_u8PORT ,  Copy_u8PIN ,DIO_PIN_HIGH );
}


void SSD_voidDisableable_Anode (u8 Copy_u8PORT,u8 Copy_u8PIN)
{
	DIO_voidSetPinDirection  ( Copy_u8PORT ,  Copy_u8PIN , DIO_PIN_OUTPUT);
	DIO_voidSetPinValue      ( Copy_u8PORT ,  Copy_u8PIN ,DIO_PIN_LOW );
}
