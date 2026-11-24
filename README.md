 **Automatic Light Control Using LDR Sensor**
 **Project Description**
This project is an automatic lighting system using an LDR sensor and Arduino UNO. It detects light intensity and automatically switches an LED ON or OFF based on the sensor reading.

 **Components Used**
- Arduino UNO
- LDR Photoresistor Sensor
- LED
- 220 Ohm Resistor
- Wokwi Simula
  
  ## Connections
| Component | Arduino Pin |
 LDR AO - A0 
 LDR VCC - 5V 
 LDR GND - GND 
 LED Anode (+) - D9 through 220Ω resistor 
 LED Cathode (-) - GND 

## Working Principle
The LDR sensor detects the surrounding light intensity and sends an analog reading to the Arduino. The Arduino compares the reading with a threshold value of 500.

- If the sensor value is below 500, the LED turns ON.
- If the sensor value is 500 or above, the LED turns OFF.

The sensor is read every 500 milliseconds.

## Software Used
- Arduino IDE (C++)
- Wokwi Online Simulator
- GitHub

## How to Run
1. Open the Wokwi project.
2. Start the simulation.
3. Open the Serial Monitor.
4. Observe the sensor readings and LED response.

## Project Outcome
The system successfully detects changes in light intensity and automatically controls the LED based on the programmed threshold.
