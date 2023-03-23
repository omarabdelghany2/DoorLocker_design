#ifndef APP_H_INCLUDED
#define APP_H_INCLUDED

#include"../LIB/TYPEDEF.h"


void Hardware_Init();//this API to initialize all the hardware used (this will call init func in HAL)

void service_RecievedData(uint8 RecievedData);/*THIS FUNCTION CALL CHECNK STATE THEN PERFORM STATE*/

uint8 ReadDataVia_CAN();/*READ FUNCTION WILL BE CALLED AFTER COLLECTING THE DATA TO THE ECU2*/
#endif