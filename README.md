# Arduino-Digital-Hourglass

## Overview

This project uses an Arduino, tilt sensor, and six LEDs to create a digital hourglass timer. One LED turns on every 10 minutes, with the full timer running for one hour and flashing to signal an hour has elapsed.

## Objective

* Create a timer using the Arduino's `millis()` function
* Use a tilt sensor to turn the LEDs off when it is flipped
* Control six LEDs based on elapsed time
* Use an `unsigned long` variable to track time

## Components used

* Arduino board
* Tilt sensor
* 6 LEDs
* 220 Ω resistors
* 10 kΩ resistor
* A Breadboard
* Connecting wires

## How It Works

1. Uses `millis()` to track the elapsed time without stopping the Arduino program.
2. Turns on one LED from left to right every 10 minutes.
3. After one hour, all six LEDs are illuminated and begin flashing to signal an hour has elapsed.
4. When flipped, the tilt sensor detects a change in orientation and the LEDs turn off and the timer resets.

## What I Learned

* Using `millis()` to create timers
* Working with `unsigned long` variables
* Detecting changes in a digital input
* Using a tilt sensor to detect orientation changes
* Controlling multiple LEDs using a `for()` loop

## Demonstration

Two videos showing the digital hourglass timer and reset function can be seen below

This video demonstrates how the tilt sensor works to turn off all LEDs and reset the timer

This video demonstrates how the 6 LED lights simulate an hour glass.

{Note: The LEDs in the video are programmed to turn on every 3 seconds instead of 10 minutes for easy demonstration purposes! This can be changed with a simple change of value in the code :) }

[Watch the project demonstration](./Arduino_Digital_Hourglass_demo.mp4)


