#ifndef ADC_H_INCLUDED

#include"../LIB/TYPEDEF.h"


/*FUNCTION FOR INTIALZIE THE PREPHIRAL AND THE OTHER TO GET THE DATA*/
void ADC_Init_channel(uint8 channelID);
void ADC_ReadChannel(uint8 channelID);


#define ADC_H_INCLUDED

#endif