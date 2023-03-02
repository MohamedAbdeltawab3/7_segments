/*
 * *****************************  SSD_interface.h  **************************************************
 *
 * Created: 2/19/2023 11:18:45 PM
 * Author : Mohamed Abdel_tawab Farghal
 * Layer  : HAL
 * SWC    : SSD
 */ 
#ifndef SSD_interface_H
#define  SSD_interface_H
 #include "STD_TYPES.h"
 #include "BIT_MATH.h"



void SSD_voidItnial_Port(u8 Copy_u8PORT);
void SSD_voidSetNnmber_Cathod(u8 Copy_u8PORT, u8 Copy_u8Number);
void SSD_voidSetNnmber_Anode(u8 Copy_u8PORT, u8 Copy_u8Number);
void SSD_voidEnable_Cathod (u8 Copy_u8PORT,u8 Copy_u8PIN);
void SSD_voidEnable_Anode (u8 Copy_u8PORT,u8 Copy_u8PIN);
void SSD_voidDisable_Cathod (u8 Copy_u8PORT,u8 Copy_u8PIN);

#endif /* SSD_interface_H */