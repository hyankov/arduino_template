/*
    ----------------
    A sample module.
    ----------------
*/

// 2nd party includes
#include "Arduino.h"

// 1st party includes
#include "Pins.hh"                  // Pin layout. Set pins according to your wiring
#include "Settings.hh"              // Include settings
#include "World.hh"                 // The world

/* -----------------------
    Private methods
----------------------- */

// This is a sample
unsigned long _nextTimeAt = 0;

/* -----------------------
    Public methods
----------------------- */

void setupSampleModule()
{
    // TODO: Setup logic
}

void loopSampleModule()
{
    unsigned long currentMs = millis();

    // Every SOME_INTERVAL_MS milliseconds
    if (world.now >= _nextTimeAt)
    {
        // Change the enum value
        world.flipSampleEnum();

        // Next time the enum will be changed
        _nextTimeAt = world.now + SOME_INTERVAL_MS;
    }
}