#pragma once
#include <Arduino.h>

enum ControllerPosition
{
    LEFT,
    MIDDLE,
    RIGHT
};

enum RotationDirection
{
    FORWARD = HIGH,
    BACKWARD = LOW
};