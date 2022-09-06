/*****************************************/
/* Description : Config file for  7seg   */
/* Author      : Mohamed Sayed           */
/* Date        : 1 sep  2022             */
/* Version     : 0.1V                    */ 
/*****************************************/
#include "BIT_Math.h"
#include "STD_Types.h"

#include "SEV_cfg.h"
#include "SEV_priv.h"

tstrSevCfg  SEV_astrConfig [SEV_MAX_NUM] =
{
	
	{
		SEV_COMMON_CATHODE ,
		31                 ,
		{0,1,2,3,4,5,6}
		
	} 
	,
	{
		SEV_COMMON_ANODE ,
		30               ,
		{12,13,14,15,16,17,18}
		
	}
	
};












