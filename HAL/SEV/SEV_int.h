/*****************************************************************************/
/* Title        	: 	7-Segment Driver									 */
/* File Name    	: 	SEV_int.h         		                             */
/* Author       	: 	Moohamed Mohalhal                                    */
/* Version      	: 	1.0.0                                                */
/* Origin Date  	: 	01/09/2022                                           */
/* Notes        	: 	None                                                 */
/*****************************************************************************/

/******************************************************************************
* Description 	: Guard to protect this File from include more 			      *
*                 than one time.                               	 	 		  *
******************************************************************************/


#ifndef SEV_INT_H
#define SEV_INT_H

tenuErrorStatus SEV_enuOnOff(uint8 u8SevIndxCpy, uint8 u8SevStateCpy);

tenuErrorStatus SEV_enuWrite(uint8 u8SevIndxCpy , uint8 u8SevValueCpy);


#endif

 /*** !comment : End of gaurd [SEV_INT_H] *********************************/