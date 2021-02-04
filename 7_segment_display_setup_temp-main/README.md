# 7-segment-display on Arduino

<p align="center"><img src="https://github.com/4lch3my/7_segment_display_setup/blob/main/gif.gif"/></p>

A 7-segment-display is a small 8-bit display, where you can display numbers and letters with 7 LED's (+ 1 bottom dot).
In this project we are building and testing this display with an Arduino.
Difficulty: 3/10

## What you need

- 1x Arduino Uno
- 1x Breadboard
- 1x 7-segment-display (LED)
- 9x Wires (to connect Arduino with Board)
- 12x Jumper wire (for Board connections)
- 8x 220 Ohm resistor

## Getting Started

#### How does it work
7-segment-display's use 8 pins that connect to a microcomputer, in our case an Arduino. The display itself is divided in 2 main parts:
- A-G letters (marked with A,B,C,D,E,F,G on most diagrams)
- DisplayDot (marked DP on most diagrams)

<p align="center"><img src="https://github.com/4lch3my/7_segment_display_setup/blob/main/7segment_image.png"/></p>

Every letter corresponds to a tiny LED inside of the display itself what lights up that section. 


#### Polarity
First we need to determine if our display is a Common-Cathode (CC) or Common-Anode (CA) display. To do this, grab the model number of the display and a quick google search will tell you exactly what you have. Mine is "5161AS" what is a Common-Cathode (CC) model. You can pick up here: https://ebay.to/2O8ktWl if you want the exact same one. It is very important that you determine this before you start building, I will explain why later.

#### Breadboard setup
Now that we know this, we need to setup our breadboard with all the components before connecting it to the Arduino. I have included a handy image and schematic on how everything needs to be setup on the board. (Coloured wires DO NOT represent the polarity of the wires.)

<p align="center"><img src="https://github.com/4lch3my/7_segment_display_setup_temp/blob/main/7_segment_breadboard.png"/></p>

After connecting all the wires, you should end up with something like this:

<p align="center"><img src="https://github.com/4lch3my/7_segment_display_setup_temp/blob/main/board_setup.jpg"/></p>

#### Connecting to Arduino

After the board is setup, we can start working on connecting it to the Arduino. This is where the polarity of the 7-segment-display comes in to play.<br>
I am using a "Common-Cathode (CC) version", so I will hook up the "X" wire to the "GND" PIN (as marked on the image below). <br>

<p align="center"><img src="https://github.com/4lch3my/7_segment_display_setup_temp/blob/main/7_segment_breadboard_Common_Cathode.png"/></p>

If you have a "Common-Anode (CA)" version, connect the "X" wire to the "5V" PIN on the right side of the Arduino (as marked on the image below). 

<p align="center"><img src="https://github.com/4lch3my/7_segment_display_setup_temp/blob/main/7_segment_breadboard_Common_Anode.png"/></p>

!!Make sure you are 100% sure about this, as if you connect it the incorrect way, it will fry and destroy your display!!


Now the only thing left to do is connect the Breadboard to the Arduino PIN's. I have added a coloire coded image below, so you can easily attach all cables as needed

<p align="center"><img src="https://github.com/4lch3my/7_segment_display_setup_temp/blob/main/7_segment_breadboard_with_wires.png"/></p>

#### Installing/Running the software
Now that the hardware part is out of the way, we can finally test the display. Download the "7_segment_display_test.ino" file from the REPO above and load it on to your Arduino. If all goes well the segments will all light up one after another (the dot included) then it will count from 0 to 9, then repeat all actions in a loop until you don’t reset/unplug it.


#### Ending words
Congratulations! You should have a working 7-segment-display on your Arduino now. Did you get stuck? Do you have any questions? Have an issue or an idea? Please let me know by messaging me so we can have a chat about it. 


## Author

This project was made by 4lch3my on 2021.02.04 and can be viewed on http://4lch3my.net/ *some link will go here as soon as the forum is up*
