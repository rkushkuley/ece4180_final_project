# ECE 4180 Final Project- Bluetooth Controlled Car
Team members:
Tim Felbinger, 
Ron Kushkuley,
Richard Nguyen,
Huy Hoang 

## **Project Description**
Our team wanted to demonstrate the capability of Bluetooth, motor, and sensor technology, that were learned during class, and demonstrate it in a robot car. With this robot car, users are able to use the Bluefruit Connect app to control the robot car and also receive live temperature readings from the robot car.

## **Parts List**
mbed LPC1768

Motor Driver - Dual TB6612FNG (with Headers)

Adafruit Bluefruit LE UART Friend

Wheel - 65mm (rubber, tire, pair)

DC Barrel Jack Adapter

Shadow Chasis Motor Pair

4xAA battery holder with barrel jack connector

Jumper wires 

TMP36 Temp Sensor

Breadboard 

## **Hardware**
![Circuit layout](https://github.com/rkushkuley/ece4180_final_project/blob/master/images/99583743a0df4e598afe1985432b0a25.jpeg)

## **Wiring Diagram**
The wiring for the various parts to the MBed can be found below:

#### **Mbed with Motor Driver**

| Motor Driver | Mbed |
| ------------- | ------------- |
| VM  | + |
| GND  | -  |
| A01  | Left Motor (Black) |
| A02  | Left Motor (Red)  |
| B02  | Right Motor (Red)  |
| B01  | Right Motor (Black)  |
| GND  | -  |
| PWMA  | P21  |
| AI2  | P23  |
| AI1  | P22  |
| STBY  | +  |
| BI1  | P25  |
| BI2  | P26  |
| PWMB  | P24  |
| GND  | GND  |

#### **Mbed with Adafruit BLE**
| Adafruit BLE  | Mbed |
| ------------- | ------------- |
| GND  | -  |
| VIN  | +  |
| RX1  | P28 |
| TX0  | P27  |
| CTS  | -  |

#### **Med with LM61**
| LM61  | Mbed |
| ------------- | ------------- |
| GND  | -  |
| VS  | +  |
| VOUT  | 15  |
