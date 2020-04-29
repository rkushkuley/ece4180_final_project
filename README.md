# ECE 4180 Final Project- Bluetooth Controlled Car
Team members:
Tim Felbinger, 
Ron Kushkuley,
Richard Nguyen,
Huy Hoang 

## **Project Description**
Our team wanted to create a robotic platform that can be used for a wide array of measurement tasks using the Bluetooth, motor, and sensor technology that were learned during class. 

With this robot car, users are able to use the Bluefruit Connect app to control the robot car and also receive live temperature readings from the robot car.

This platform could easily be scaled to include more sensor streams, but we were working with limited hardware availability due to COVID-19.

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
For this project, we decided to integrate parts of the Bluetooth sample and motor control code that were utilized in previous labs. We also implemented lines of code to allow the Bluefruit Connect app to receive live temperature readings from the bot. With some changes to and implementing the code, we got our finished result.

![Snippet](https://github.com/rkushkuley/ece4180_final_project/blob/master/images/snip.png)

* This is a snippet of our code that was used during this projec that can be found in this GitHub.

1. Import files and code onto the [mbed compiler website](https://os.mbed.com/)
2. Upload to mbed and compile the main.cpp file
3. Connect the mbed device and upload the main.cpp file onto the mbed
4. Wait for the led blink indicating that the file has successfully been uploaded and push the button on the mbed
4. Download the app called Bluefruit Connect app to either [ios](https://apps.apple.com/us/app/bluefruit-connect/id830125974) or [android](https://play.google.com/store/apps/details?id=com.adafruit.bluefruit.le.connect&hl=en_US) smartphones
5. Open the app then hit on the first Unknown full wifi bar
6. Go to the control pad and sensors tab to control the robot


## **Block Diagram**

## **Future Additions & Revisions**
* Within the Control Pad of the Bluefruit app, we can customize the 4 buttons to make the robot car do certain actions that the user deems reasonable.
* Add several more sensors to the robot for it to collect data beyond just temperature as shown in this project
* Motor and drive system could be scaled to work with larger applications


## **References**
 [My Mini Race Car](https://learn.adafruit.com/my-mini-race-car?view=all)
 
 [LM61 and TMP36 Analog Temperature Sensors](https://os.mbed.com/users/4180_1/notebook/lm61-analog-temperature-sensor/)

[Bluefruit LE Connect for iOS and Android](https://learn.adafruit.com/bluefruit-le-connect/controller)

[Robot Control Using Bluetooth Xbox Controller](https://os.mbed.com/users/carlislejonah/notebook/robot-control-using-bluetooth-xbox-controller/)

