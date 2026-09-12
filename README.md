<img width="1280" height="640" alt="git (1)" src="https://github.com/user-attachments/assets/8920b256-2ba8-4988-b824-5351134eb4bd" />



# [Servo Naatyam] 🎯


## Basic Details
### Team Name: [Infinity]


### Team Members

- Member 1:[Krishnapriya MV] - [College of Engineering Attingal]
- Member 2: [Lekshmy S Raju] - [College of Engineering Attingal]

### Project Description
[Servo Naatyam is a fun Arduino-based robotic dance project inspired by the traditional Kerala dance form Thiruvathira. The project uses servo motors to control a group of small doll figures and create synchronized, rhythmic movements inspired by the hand movements and formations of Thiruvathira.

The dolls are mechanically connected to servo motors through vertical sticks, allowing their bodies and hands to move in different directions. The movements are programmed using an Arduino Uno and synchronized to the rhythm of a selected song.]

### The Problem (that doesn't exist)
[We noticed a serious issue: six dolls were standing around doing absolutely nothing.
So naturally, we gave five of them servo motors and taught them Thiruvathira.]

### The Solution (that nobody asked for)
[We built Servo Natyam, an Arduino-powered robotic dance setup where servo motors control a group of dolls to perform synchronized movements inspired by Kerala’s traditional Thiruvathira. The movements are pre-programmed to create coordinated hand movements and a rhythmic dance solving the completely unnecessary problem of dolls not being able to dance on their own.]

## Technical Details
### Technologies/Components Used
For Software:
- [Languages used]
- [Frameworks used]
- [Libraries used]
- [Tools used]

For Hardware:
[List main components:
* Arduino Uno
* 5 × SG90 Servo Motors
* 6 × Doll Figures
* Breadboard
* Jumper Wires
* Wooden/Plastic Sticks for connecting dolls to servos
* Base Board / Platform]

- [List specifications:
* Arduino Uno: ATmega328P, 5V operating voltage, 14 digital I/O pins
* Servo Motor: SG90, 5V, approximately 180° rotation
* Number of Servos: 5
* Doll Figures: 6, lightweight
* Control: Servo motors controlled through Arduino
* Movement: Pre-programmed angular movement to create synchronized dance motions
* Base: A4-sized platform with holes for the doll sticks]

- [List tools required:
* Arduino IDE
* USB cable for Arduino
* Wire cutters/strippers
* Screwdriver
* Hot glue gun / adhesive
* Scissors]


For Hardware:

# Schematic & Circuit
<img width="774" height="1024" alt="WhatsApp Image 2026-09-12 at 4 37 13 AM" src="https://github.com/user-attachments/assets/ee8043fd-e03c-4a7d-b908-eb790f98506e" />

Arduino Uno controls five SG90 servo motors. The signal wires of the servos are connected to digital pins D3, D5, D6, D9, and D10. The red power wires are connected to the 5V supply and the brown wires are connected to GND through the breadboard. The Arduino is programmed to control the servo angles and create synchronized Thiruvathira-inspired movements.
<img width="768" height="1024" alt="WhatsApp Image 2026-09-12 at 4 37 23 AM" src="https://github.com/user-attachments/assets/a5e8946a-ff40-4220-94eb-8d7f5c5e161a" />

The Arduino Uno acts as the main controller and is connected to five SG90 servo motors. Each servo receives a control signal from Arduino digital pins D3, D5, D6, D9, and D10. The servos share a common 5V power supply and GND through the breadboard. The programmed servo movements control the dolls to perform synchronized Thiruvathira-inspired dance movements.



# Build Photos
<img width="1206" height="677" alt="WhatsApp Image 2026-09-12 at 4 35 33 AM" src="https://github.com/user-attachments/assets/ad1fe8da-9573-4ec6-b8f1-2ff6e19f4c87" />

List out all components shown:
1. Arduino Uno
2. 5 × SG90 Servo Motors
3. Breadboard
4. Jumper Wires
5. USB Cable / Arduino Power Supply
6. 5V Power Rail
7. GND Rail
8. Servo Signal Connections
    * D3
    * D5
    * D6
    * D9
    * D10
9. Servo Power Connections
    * +5V
    * GND

<img width="1280" height="1600" alt="WhatsApp Image 2026-09-12 at 9 16 27 AM" src="https://github.com/user-attachments/assets/740268e7-a8c5-4381-aa92-d117d7fa8ed5" />

Explain the build steps:
1. Prepare the base
    * Take an A4-sized base board.
    * Mark positions for the 6 dolls in a circle/formation.
    * Make holes for the vertical sticks.
2. Fix the dolls
    * Attach one wooden/plastic stick to each doll.
    * Insert the sticks through the holes in the base.
    * Make sure the dolls can rotate freely.
3. Mount the servos
    * Fix 5 SG90 servos underneath the base, one for each moving doll.
    * Keep the 6th doll fixed without a servo.
4. Connect servo horns
    * Attach a servo horn to each SG90.
    * Position the end of each doll’s vertical stick so that it rests on/engages with the servo horn.
    * When the servo rotates, the horn pushes the stick and rotates the doll.
5. Wire the servos
    * Servo 1 signal → D3
    * Servo 2 signal → D5
    * Servo 3 signal → D6
    * Servo 4 signal → D9
    * Servo 5 signal → D10
    * Red wires → 5V
    * Brown wires → GND
6. Connect Arduino
    * Connect Arduino 5V → breadboard + rail.
    * Connect Arduino GND → breadboard − rail.
    * Connect the servo power wires to these rails.
7. Program the movements
    * Upload the Arduino code.
    * Program different angles for each servo so the dolls move in opposite directions where needed.
    * Adjust the angles physically until the neighbouring dolls’ hands meet/high-five.
8. Test and calibrate
    * Test each servo individually.
    * Adjust the servo horn position and angles.
    * Make sure no doll hits the base or another doll.
9. Add the dance sequence
    * Program the movements according to the three sections of Vira Virada:
        * 0:00–20.33 s → normal
        * 20.33–33.54 s → faster
        * 33.54–42.31 s → normal again
    * Play the song separately from a phone/laptop while the Arduino runs the choreography.
10. Final assembly

<img width="960" height="1280" alt="WhatsApp Image 2026-09-12 at 9 13 13 AM" src="https://github.com/user-attachments/assets/1cf2e640-5462-4976-bb14-8ef337618000" />

The final model will look like a small robotic Thiruvathira performance setup.

* 6 doll figures are arranged on an A4-sized base in a circular/semicircular formation.
* Each doll has a vertical stick passing through the base.
* 5 dolls are connected to SG90 servo motors underneath the base.
* The 6th doll remains fixed.
* The servo horns push/rotate the sticks, which makes the connected dolls turn left and right.
* The Arduino Uno controls all 5 servos and produces the pre-programmed dance movements.
* The movements are designed so neighbouring dolls can move their opposite hands toward each other, creating a Thiruvathira-like hand-touch/high-five effect.
* The movement timing changes with the song: normal → faster → normal.
* All electronics and wiring stay under the base, while the dolls and dance mechanism remain visible on top.

### Project Demo
# Video


https://github.com/user-attachments/assets/74bc0885-2caf-4a22-b389-4ca09f1680c9




The video demonstrates a miniature Thiruvathira-inspired robotic dance setup using servo motors. The movement of the doll figures is controlled through programmed servo movements, creating synchronized hand movements and dance patterns. Our project, Servo Natyam, is based on this concept and adapts it using Arduino and five servo motors.

Made with ❤️ at TinkerHub Useless Projects 

![Static Badge](https://img.shields.io/badge/TinkerHub-24?color=%23000000&link=https%3A%2F%2Fwww.tinkerhub.org%2F)
![Static Badge](https://img.shields.io/badge/UselessProjects--26-26?link=https%3A%2F%2Ftinkerhub.org%2Fevents%2F1M8ORET9A1%2Fuseless-projects-3.0)



