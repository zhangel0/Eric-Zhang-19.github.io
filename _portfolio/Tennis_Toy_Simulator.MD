---
title: "Tennis Toy Simulator"
excerpt: "The first prototype of a toy that simulates a LEGO figurehead hitting a tennis ball."
header:
  image: /assets/img/Lego_TennisToy.png
  teaser: /assets/img/Lego_TennisToy.png
gallery:

- url: /assets/img/TennisToy_Draw1.png
  image_path: /assets/img/TennisToy_Draw1.png
  alt: "Placeholder Image 1"
- url: /assets/img/TennisToy_Draw2.png
  image_path: /assets/img/TennisToy_Draw2.png
  alt: "Place Holder Image 2"
- url: /assets/img/TennisToy_CAD1.jpg
  image_path: /assets/img/TennisToy_CAD1.jpg
  alt: "Place Holder Image 3"
- url: /assets/img/TennisToy_CAD2.jpg
  image_path: /assets/img/TennisToy_CAD2.jpg
  alt: "Place Holder Image 4"
- url: /assets/img/TennisToy_CAD3.jpg
  image_path: /assets/img/TennisToy_CAD3.jpg
  alt: "Place Holder Image 5"
- url: /assets/img/TennisToy_CAD4.jpg
  image_path: /assets/img/TennisToy_CAD4.jpg
  alt: "Place Holder Image 6"
- url: /assets/img/TennisToy_CAD5.jpg
  image_path: /assets/img/TennisToy_CAD5.jpg
  alt: "Place Holder Image 7"
- url: /assets/img/TennisToy_CAD6.jpg
  image_path: /assets/img/TennisToy_CAD6.jpg
  alt: "Place Holder Image 8"
- url: /assets/img/TennisToy_AutoCAD.jpg
  image_path: /assets/img/TennisToy_AutoCAD.jpg
  alt: "Place Holder Image 9"
---
# System Description 

This project simulates a toy Lego-man playing tennis. The physical representation of the tennis ball is moved manually. Once the ball comes close enough to the Lego-man, it will turn and hit the tennis ball. Upon making contact with the tennis ball, the Lego-man will then return to its initial position and wait until the ball is once again in the strike zone. If the ball stays within striking distance, the Lego-man will continuously rotate back and forth to hit the tennis ball until it moves out of the strike zone.

# System Components and Integration

The toy is composed of relatively complex electrical hardware and software and more complex mechanical design and accurate assembly. The electronics of the system is composed of an Arduino Uno, ultrasonic sensor, DC motor, LCD display, push button, and LED. The mechanical components include specific gear ratios with pressure angle 20o and diametral pitch of 0.5, rack and pinion assembly to move the ball with pressure angle 20o and module 1, and a stainless-steel ball bearing. The face width and pitch height were matched up with the corresponding spur gear. The mechanical design components including the power transmission components mentioned were all laser cut out of Medium Density Fibers (MDF) and assembled accordingly.

The Arduino was used to interface the hardware components with the Arduino coding software on a PC. The ultrasonic sensor was used to detect the distance the ball is from the Lego man. The DC motor was used to turn the Lego-man to hit the button that represents the tennis ball. The LCD display was constantly outputting the distance the button was from the ultrasonic sensor. This would allow the user to make sure that the button was in fact in the strike zone of the Lego-man. The push button acted as the physical representation of the tennis ball as well as an integral part of the circuitry. Once the Lego-man hit the button and pressed it, it would cause the Lego-man to turn back to its original position. Even if the ball stayed in the strike zone, the Lego-man would have to return to its original position first before starting the motion of hitting the ball again. The LED was used as a debugging tool as well as a visual to show whether the Lego-man had pushed the button. The LED would light up if the button was pressed, and otherwise it would remain off. A separate LED was constantly on, and it would turn off if the button was pressed. This was the debugging LED that helped make sure the button was working correctly.
 
Initially, the large gear was attached to the motor, and the Lego-man with the tennis racket was attached on top of the smaller gear with the bearing. With a gear ratio of 3:1, the small gear’s angular velocity was 3x that of the large gear. It was assumed from the beginning of the project assembly and creation that not much torque would be required to successfully have the Lego-man push the button. However, once the system was completely assembled, it became apparent that there was not enough torque with this gear assembly. Since more torque was required, the gears were switched so that the small gear was attached to the motor, and the large gear was carrying and turning the Lego-man. This resulted in 3x more output torque than before. The distances were recalculated to ensure that the large gear did not directly make contact and interfere with any of the working parts of the system. With this gear setup, the provided torque was enough to press the button.

I had to utilize PWM and H-bridge setup to drive the DC motor. Understanding how a DC motor was integral in my project. I also had to understand how to use both digital and analog inputs since the LCD display required analog inputs. Understanding functions of the Arduino pins including how pin 13 can’t take digital inputs and which pins are best for PWM were necessary in the integration of my electronics. Having this basic understanding allowed me to simply research how my new components work and integrate it with the Arduino and logic. I also used design techniques including SolidWorks, AutoCAD, and operating the Laser Cutter in the Wondr’y to fabricate all the non-electrical components of the system. 

# Operating Procedure

1. Make sure syringe pump is in the correct orientation for filled or empty syringes.
2. Preload filled syringes or load empty syringes.
3. Input desired flowrate into code.
4. Upload code into the Arduino Mega via USB.
5. Push toggle button next to LED to begin pumping process.
6. Wait until pumping process is complete.
7. Once completed press large push button to retract syringe pump off the limit switch.
8. From here either refill the syringe pumps with the large push button, or take off the syringes and fill separately
9. Repeat steps 1-7 for another trial.

# Drawings and CAD Images

{% include gallery caption="This is a gallery of the initial drawing ideas and SolidWorks and AutoCAD files used to create first prototype." %}
# Arduino Code

[Link to Arduino Code](/MechFinalProject_Button_Ultrasonic_Integration.ino)
# Bill of Materials (Component List)

| Off-the-shelf  | Quantity |
| ------------- | ------------- |
| Arduino Uno  | 1 |
| Jumper Wires and Alligator Clips  | Many |
| USB to type A/B  | 1  |
| Ultrasonic sensor HC-SR04  | 1  |
| LCD I2C for Arduino  | 1  |
| Easyget 5v 100mm Dome Shaped Jumbo LED Illuminated Self-resetting Push Button Switch for Arcade Game Projects (for final product)  | 1  |
| DC Motor  | 1  |
| LEDs  | 1  |
| Breadboard  | 1  |
| L293D H-Driver  | 1  |



| Digitally Fabricated  | Quantity |
| ------------- | ------------- |
| Motor Mount  | 1 |
| Syringe Mount  | 1 |
| Syringe Pusher  | 1 |
| Syringe Stabilizer | 1 |


