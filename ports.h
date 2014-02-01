#ifndef PORTS_H
#define PORTS_H


// DriveTrain Channels
const static uint32_t TALON_FL_CHANNEL = 0;
const static uint32_t TALON_FR_CHANNEL = 1;
const static uint32_t TALON_RL_CHANNEL = 3;
const static uint32_t TALON_RR_CHANNEL = 4;
// DriveTrain Modules
const static uint8_t  TALON_FL_MODULE  = 0;
const static uint8_t  TALON_FR_MODULE  = 1;
const static uint8_t  TALON_RL_MODULE  = 3;
const static uint8_t  TALON_RR_MODULE  = 4;
// Pneumatics Channels
const static uint32_t PNUM_DIGIN_CHANNEL = 1;
const static uint32_t PNUM_RELAY_CHANNEL = 0;
// Pneumatics Modules
const static uint8_t  PNUM_DIGIN_MODULE  = 1;
const static uint8_t  PNUM_RELAY_MODULE  = 0;

// Shifter
const static uint32_t SHIFT_FCHAN = 0;
const static uint32_t SHIFT_RCHAN = 1;
const static uint8_t  SHIFT_MOD   = 1;

// Shooter
const static uint32_t SHOOT_TALON_CHANNEL = 1;
const static uint8_t  SHOOT_TALON_MODULE  = 1;
const static uint8_t  SHOOT_JAG_MODULE    = 1;
const static uint32_t SHOOT_SLNOID_FCHAN  = 2;
const static uint32_t SHOOT_SLNOID_RCHAN  = 3;
const static uint8_t  SHOOT_SLNOID_MODULE = 1;

// Encoder Modules
const uint8_t  ENCODER_LMODULE_A  = 1;
const uint8_t  ENCODER_RMODULE_A  = 2;
const uint8_t  ENCODER_LMODULE_B  = 3;
const uint8_t  ENCODER_RMODULE_B  = 4;
// Encoder Channels
const uint32_t ENCODER_LCHANNEL_A = 5;
const uint32_t ENCODER_RCHANNEL_A = 6;
const uint32_t ENCODER_LCHANNEL_B = 7;
const uint32_t ENCODER_RCHANNEL_B = 8;

// Joystick
const uint32_t DRIVER_JOY_PORT = 1;
const uint32_t GUNNER_JOY_PORT = 2;

#endif
