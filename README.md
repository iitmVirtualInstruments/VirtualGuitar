
# Virtual Guitar
A repository containing the arduino codes,the python code and the .apk files used to make a virtual guitar. 
FL Studio was the music software used to play the sounds.

# Mechanical and Electronic Part
The guitar uses two smartphones.The first phone has an app used as the guitar fretboard. The other phone has an app used as the strumming part of guitar. The two phones are connected to a bluetooth module(bluetooth module HC-05) each, through which they communicate what combination has been pressed on the fretboard and whether the guitar has been strummed.
 
# Source Programs
* guitarbluetooth.ino : Arduino code to receive data from bluetooth modules(which receive data from the apps).
* guitar.py : Python code which acts as interface between the arduino and FL Studio.
* guitarfret.apk : Source code for fret app.
* guitarstrum.apk : Source code for strum app.

# Dependencies
* Arduino IDE 1.6
* Python (version 3)
* FL Studio 12


