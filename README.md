# ECE 4180 Final Project- Bluetooth Controlled Car
Team members:
Tim Felbinger, 
Ron Kushkuley,
Richard Nguyen,
Huy Hoang 

## **Project Description**
Our team wanted to demonstrate the capability of Bluetooth, motor, and sensor technology, that were learned during class, and demonstrate it in a robot car. With this robot car, users are able to use the Bluefruit Connect app to control the robot car and also receive live temperature readings from the robot car.

## **Parts List**
* [mbed LPC1768](https://www.sparkfun.com/products/9564)

* [Motor Driver - Dual TB6612FNG (with Headers)](https://www.sparkfun.com/products/1445)

* [Adafruit Bluefruit LE UART Friend](https://www.adafruit.com/product/2479)

* [Wheel - 65mm (rubber, tire, pair)](https://www.sparkfun.com/products/13259)

* [DC Barrel Jack Adapter](https://www.sparkfun.com/products/10811)

* [Shadow Chasis Motor Pair](https://www.sparkfun.com/products/13302)

* [4xAA battery holder with barrel jack connector](https://www.sparkfun.com/products/9835)

* [Jumper wires](https://www.sparkfun.com/products/11026) 

* [TMP36 Temp Sensor](https://www.sparkfun.com/products/10988)

* [Breadboard](https://www.sparkfun.com/products/12614) 

* 4xAA batteries

* smartphone with Wifi connection

## **Hardware**
![Circuit layout](https://github.com/rkushkuley/ece4180_final_project/blob/master/images/d52c6b54f8de4dbab1ec039f81881e83.jpeg)
![Circuit layout w/ lights](https://github.com/rkushkuley/ece4180_final_project/blob/master/images/5931e52af6d94578ace75bd15a531765.jpeg)

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

## **Software**
![Snippet](https://github.com/rkushkuley/ece4180_final_project/blob/master/images/snip.png)

* This is a snippet of our code that was used during this projec that can be found in this GitHub.

1. Import files and code onto the [mbed website](https://os.mbed.com/)
2. Download the file and upload to mbed.
3. Download the app called Bluefruit Connect app to either ios or android smartphones
4. Open the app then hit on the first Unknown wifi bar
5. Go to the control pad and sensors tab to control the robot


## **Block Diagram**




## **Demo Video**



## **References**
 [My Mini Race Car](https://learn.adafruit.com/my-mini-race-car?view=all)
 
 [LM61 and TMP36 Analog Temperature Sensors](https://os.mbed.com/users/4180_1/notebook/lm61-analog-temperature-sensor/)

[Bluefruit LE Connect for iOS and Android](https://learn.adafruit.com/bluefruit-le-connect/controller)

[Robot Control Using Bluetooth Xbox Controller](https://os.mbed.com/users/carlislejonah/notebook/robot-control-using-bluetooth-xbox-controller/)

