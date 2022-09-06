/*****************************************************************************/
/* Title        	: 	LCD Driver				                             */
/* File Name    	: 	LCD_int.h                                            */
/* Author       	: 	Moohamed Mohalhal                                    */
/* Origin Date  	: 	02/09/2022                                           */
/* Version      	: 	1.0.0                                                */
/* Notes        	: 	None                                                 */
/*****************************************************************************/

/******************************************************************************
* Description 	: Guard to protect this File from include more 		          *
*                 than one time.                               	 	          *
******************************************************************************/

#ifndef LCD_INT_H
#define LCD_INT_H

void LCD_voidInit(void);
tenuErrorStatus LCD_enuWriteCmd(uint8 u8LcdIndxCpy , uint8 u8LcdCmdCpy);
tenuErrorStatus LCD_enuWriteData(uint8 u8LcdIndxCpy , uint8 u8LcdDataCpy);


#endif

/*** !comment : End of gaurd [LCD_int.h] **********************************/