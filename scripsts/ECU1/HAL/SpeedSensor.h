#ifndef SPEEDSENSOR_H_INCLUDED

#include"../LIB/TYPEDEF.h"

void SPEED_sensor_Init(uint8 SensorChannel);
uint8 ReadSpeedsensor_Data(uint8 SensorChannel);

#define SPEEDSENSOR_H_INCLUDED

#endif