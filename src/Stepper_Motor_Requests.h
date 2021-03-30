#ifndef STEPPER_MOTOR_REQUESTS_H
#define STEPPER_MOTOR_REQUESTS_H

/* Client_Server_Interface */
typedef struct {
    void (*Step_Clockwise) ( void );
    void (*Step_Counterclockwise) ( void );
} Stepper_Motor_Requests;

#endif