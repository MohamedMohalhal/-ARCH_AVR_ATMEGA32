/*****************************************************************************/
/* Title        	: 	DIO Driver											 */
/* File Name    	: 	DIO_interface.h                                      */
/* Author       	: 	Moohamed Mohalhal                                    */
/* Version      	: 	1.0.0                                                */
/* Origin Date  	: 	20/08/2022                                           */
/* Notes        	: 	None                                                 */
/*****************************************************************************/

/******************************************************************************
* Description 	: Guard to protect this File from include more 			      *
*                 than one time.                               	 	 		  *
******************************************************************************/

#ifndef  DIO_INT_H
#define  DIO_INT_H


void DIO_voidInit(void);

tenuErrorStatus DIO_enuWritePin(uint8  u8PinNumCpy ,uint8 u8PinValueCpy);

tenuErrorStatus DIO_enuReadPin(uint8 u8PinNumCpy , uint8 * pu8PinValueCpy);


tenuErrorStatus DIO_enuActivatePullUp(uint8 u8PinNumCpy, uint8 u8PinStateCpy);



#endif 

/*** !comment : End of gaurd [DIO_INTERFACE_H] *******************************/


















