#ifndef APP_H_INCLUDED
#define APP_H_INCLUDED

#include "../LIB/TYPEDEF.h"

void Hardware_Init();//this API to initialize all the hardware used (this will call init func in HAL)


/*THIS GETTERS TO GET THE SENSORS READINGS*/
uint8 GetSpeedSensor_Reading();
State GetLightSwitch_Reading();
State GetDoorSensor_Reading();

/*SEND FUNCTION WILL BE CALLED AFTER COLLECTING THE DATA TO THE ECU2*/
void SendDataVia_CAN();

#endif