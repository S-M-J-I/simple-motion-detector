# A simple motion detector

A simple motion detector in Arduino that will detect motion upto 3 meters. An LED will glow after motion is detected. A bluetooth module has been attached to remotely turn off the glowing LED.

## Components used:
- Arduino UNO
- Breadboard
- PIR Motion Sensor (Delay 5 secs; Distance 3 meters)
- HC-05 Bluetooth Module
- LED (blue)
- 10 kOhm Resistor
- Male-male and male-female wires

## Component arrangement:
- Put LED on breadboard, connect ground using MM wire to GND pin above pin 13. Connect a resistor to the positive pin and use a MM wire to connect to pin 12.
- Connect Bluetooth Module TXD to pin 2, RXD to pin 3. Connect VCC to the '+' breadboard row and GND to the '-' row. Use MF wires for all connections.
- Connect ouput of the sensor to pin 8. Connect POWER to '+' row, and GND to the '-' row of the breadboard. Use MF wires for all connections.
- Connect a MM wire from the '+' row of the breadboard to 5V pin. Connect another MM wire from the '-' row of the breadboard to GND pin beside 5V pin.
