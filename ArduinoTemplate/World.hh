/*
    -------------------
    World property bag.
    -------------------
*/

#pragma once

// 2nd party includes
#include "Arduino.h"

// The possible game states
enum SAMPLE_ENUM
{
    // Sample value 1
    VALUE_1,

    // Sample value 2
    VALUE_2
};

// Property bag, describing the world state
struct World
{
    /* -----------------------
        Private methods
    ----------------------- */

    // TODO: Private methods and vars here

    /* -----------------------
        Public methods
    ----------------------- */

    // TODO: Public methods and vars here

    // Common millis() for the loop
    unsigned long now = millis();

    // The game state
    enum SAMPLE_ENUM sampleEnum = SAMPLE_ENUM::VALUE_1;

    // Sample method
    void flipSampleEnum()
    {
        if (sampleEnum == SAMPLE_ENUM::VALUE_1)
        {
            sampleEnum = SAMPLE_ENUM::VALUE_2;
        }
        else
        {
            sampleEnum = SAMPLE_ENUM::VALUE_1;
        }
    }
};

// An instance of the World property bag
extern struct World world;