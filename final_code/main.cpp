#include "mbed.h"
#include "Motor.h"
 
Motor left(p21, p23, p22); // pwm, fwd, rev
Motor right(p24, p25, p26); // pwm, fwd, rev
AnalogIn LM61(p15); //temp sensor
DigitalOut P16(p16);
DigitalOut P17(p17);
DigitalOut P18(p18);
DigitalOut P19(p19);
DigitalOut P20(p20);

BusOut myled(LED1,LED2,LED3,LED4);
Serial blue(p28,p27);

float s = 1.0;
float tempC, tempF;

int main()
{
    char bnum=0;
    char bhit=0;
    while(1) {
        tempC = ((LM61*3.3)-0.600)*100.0;
        tempF = (9.0*tempC)/5.0 + 32.0;
        blue.printf("Temperature: %5.2F C %5.2F F \n", tempC, tempF);

        if (blue.getc()=='!') {
            if (blue.getc()=='B') { //button data packet
                bnum = blue.getc(); //button number
                bhit = blue.getc(); //1=hit, 0=release
                if (blue.getc()==char(~('!' + 'B' + bnum + bhit))) { //checksum OK?
                    myled = bnum - '0'; //current button number will appear on LEDs
                    switch (bnum) {
                        case '1': //number button 1
                            if (bhit=='1') {
                                s = 0.25;
                            } else {
                                //add release code here
                            }
                            break;
                        case '2': //number button 2
                            if (bhit=='1') {
                                s = 0.5;
                            } else {
                                //add release code here
                            }
                            break;
                        case '3': //number button 3
                            if (bhit=='1') {
                                s = 0.75;
                            } else {
                                //add release code here
                            }
                            break;
                        case '4': //number button 4
                            if (bhit=='1') {
                                s = 1.0;
                            } else {
                                //add release code here
                            }
                            break;
                        case '5': //button 5 up arrow
                            if (bhit=='1') {
                                //add hit code here
                                left.speed(s);
                                right.speed(s);
                            } else {
                                //add release code here
                                left.speed(0);
                                right.speed(0);
                            }
                            break;
                        case '6': //button 6 down arrow
                            if (bhit=='1') {
                                left.speed(-1*s);
                                right.speed(-1*s);
                            } else {
                                //add release code here
                                left.speed(0);
                                right.speed(0);
                            }
                            break;
                        case '7': //button 7 left arrow
                            if (bhit=='1') {
                                //add hit code here
                                left.speed(-1*s);
                                right.speed(s);
                            } else {
                                //add release code here
                                left.speed(0);
                                right.speed(0);
                            }
                            break;
                        case '8': //button 8 right arrow
                            if (bhit=='1') {
                                //add hit code here
                                left.speed(s);
                                right.speed(-1*s);
                            } else {
                                //add release code here
                                left.speed(0);
                                right.speed(0);
                            }
                            break;
                        default:
                            break;
                    }
                }
            }
        }
    }
}


