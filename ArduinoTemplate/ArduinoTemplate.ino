/*
    ------------------------------------------------
                    Arduino template
    See: https://github.com/hyankov/arduino_template
    ------------------------------------------------
*/

// 1st party includes
#include "Pins.hh"              // Pin layout. Set pins according to your wiring
#include "Settings.hh"          // Include settings
#include "Display.hh"           // Display handling
#include "SampleModule.hh"      // Sample module inclusion
#include "World.hh"             // The world

// Setup and initialize
void setup()
{
    // Random seed
    randomSeed(analogRead(PIN_UNUSED_ANALOG));

    // Setup the display
    setupDisplay();

    // Sets up the sample module
    setupSampleModule();
}

// The main loop, repeating over and over again
void loop()
{
    world.now = millis();
    loopSampleModule();
    loopDisplay();
}