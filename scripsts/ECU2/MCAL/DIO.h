#ifndef DIO_H_INCLUDED


#include"../LIB/TYPEDEF.h"
typedef enum {
    INPUT,
    OUTPUT
}MODE;


typedef enum {
    LOW,
    HIGH
}LEVEL_DATA;

typedef enum {
    PIN0,
    PIN1,
    PIN2,
    PIN3,   
    PIN4, 
    PIN5, 
    PIN6, 
    PIN7, 

}PIN_ID;


typedef enum {
    PORT_A,
    PORT_B,
    PORT_C,
    PORT_D,  
}PORT_ID;

typedef struct DIO_PIN_CONFIG
{
    /* data */
    PIN_ID pin;
    PORT_ID port;
    MODE mode;
};




void DIO_Init_PIN(DIO_PIN_CONFIG pin_struct);
State DIO_ReadChannel(PORT_ID port,PIN_ID pin);
void DIO_WriteChannel(PORT_ID port,PIN_ID pin);


#define DIO_H_INCLUDED

#endif