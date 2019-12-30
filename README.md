# Motionsensor-Arduino
A motion sensor to work as a burglary alarm or a decoration item
Aim of project: Using arduino with Ultrasonic sensor as a burglary alarm.
Introduction:
Ultrasonic ranging module HC - SR04 provides 2cm - 400cm non-contact measurement function, the ranging accuracy can reach to 3mm. The modules includes ultrasonic transmitters, receiver and control circuit. 
This is a simple example of using the ultrasonic sensor (HC-SR04) in Arduino where we will turn on a led with the variation of distance and print the distance from an object to the serial monitor. In this way, it can be used as a distance calculator, a motion detector and a decoration item at home if you use led of some bright nice color.  
In addition to this, we also added alarm so that when you are not at home and someone break-opens your house, the ultrasonic sensor detects their presence, starts an alarm which won’t end unless the police or the neighbours switch off the alarm or reset the arduino.
Working Principle:
Ultrasonic sensors work by emitting sound waves at a frequency too high for humans to hear. They then wait for the sound to be reflected back, calculating distance based on the time required.
If you need to measure the specific distance from your sensor, this can be calculated based on this formula:
Distance = ½ T x C
(T = Time and C = the speed of sound)
At 20°C (68°F), the speed of sound is 343 mps (1125 ft/s), but this varies depending on temperature and humidity. 

Components Required:
1. Arduino Uno
2. Ultrasonic Sensor (HC-SR04)
3. Mini-BreadBoard
4. 1 k ohm Resistor
5. Jumpers
6. Blue LED.

Results:
Once an object is brought into the range of ultrasonic sensor, the alarm(buzzer) starts ringing until the arduino is reset. Each time an object is brought into the proximity of the sensor, the LED glows.
Conclusion and Future Scope:
Ultrasonic sensor works as distance calculator and for sensing movement. Using this, we can glow an LED when someone passes nearby or start an alarm when someone forcefully enters your house.
We can develop it to do the following:
⦁	Send a mail to owner when someone enters the house.
⦁	Motion sensor to turn lights on/off based on movement of user.
⦁	Open doors when someone is nearby.
⦁	Send a message or start an alarm  when the water level in tank crosses threshold.
⦁	Remove the buzzer and use the LED as a decorative item attached to the door.
