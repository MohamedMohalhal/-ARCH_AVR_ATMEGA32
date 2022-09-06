/*****************************************************************************/
/* Title        	: 	DIO Driver											 */
/* File Name    	: 	DIO_private.h                                        */
/* Author       	: 	Moohamed Mohalhal                                    */
/* Version      	: 	1.0.0                                                */
/* Origin Date  	: 	20/08/2022                                           */
/* Notes        	: 	None                                                 */
/*****************************************************************************/

/******************************************************************************
* Description 	: Guard to protect this File from include more 			      *
*                 than one time.                               	 	 		  *
******************************************************************************/

#ifndef DIO_PRIV_H 
#define DIO_PRIV_H



/******************************************************************************
* !comment : DDRx Registers Addesses Definitions.  	      		         	  *
******************************************************************************/
#define DDRA  *((volatile uint8 *) 0x3A)
#define DDRB  *((volatile uint8 *) 0x37)
#define DDRC  *((volatile uint8 *) 0x34)
#define DDRD  *((volatile uint8 *) 0x31)


/******************************************************************************
* !comment : PINx Registers Addesses Definitions.  			         	      *
******************************************************************************/
#define IDRA  *((volatile uint8 *) 0x39)
#define IDRB  *((volatile uint8 *) 0x36)
#define IDRC  *((volatile uint8 *) 0x33)
#define IDRD  *((volatile uint8 *) 0x30)


/******************************************************************************
* !comment : PORTx Registers Addesses Definitions.  			         	  *
******************************************************************************/
#define ODRA  *((volatile uint8 *) 0x3B)
#define ODRB  *((volatile uint8 *) 0x38)
#define ODRC  *((volatile uint8 *) 0x35)
#define ODRD  *((volatile uint8 *) 0x32)


#define DIO_OUTPUT 1
#define DIO_INPUT  0

#define CONC(b7,b6,b5,b4,b3,b2,b1,b0)  CONC_HELP(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_HELP(b7,b6,b5,b4,b3,b2,b1,b0)  0b##b7##b6##b5##b4##b3##b2##b1##b0

#ifndef  DIO_u8DIR_PIN_0
#define  DIO_u8DIR_PIN_0 DIO_INPUT
#endif 


#endif 

/*** !comment : End of gaurd [DIO_PRIVATE_H] *********************************/