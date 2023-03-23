---
title: "Autonomous Low Cost Syringe Pump"
excerpt: "This is a custom made automated syringe pump that can deliver various flow rates of between 1 mL / min and 60 mL / min."
header:
  image: /assets/img/SyringePump_Real_Image.jpg
  teaser: /assets/img/SyringePump_Teaser_Image.jpg
gallery:

---
# Project Purpose 

Syringe pumps are commonly used in many biological, chemical, and engineering laboratories. Regardless of the substance that is within these syringe pumps, having to constantly pump these substances into numerous test tubes by hand can be extremely time consuming. Furthermore, when flowrate is important, pumping by hand will not yield the most consistent flowrate over time. This automated syringe pump takes a few steps towards making pumping syringes more convenient and consistent.

# Project Description

The syringe pump comes with two different sized syringe mounts - one 5 mL and one 20 mL. One toggle push button is used to activate the pumping of the syringe and one manual push button is used to retract the syringe after the substance has been fully pumped out. The manual push button can also be used to refill the syringes if necessary. As a safety precaution, a limit switch is incorporated to stop the syringe pump automatically once all of the substance is pumped out. For the user, an LED indicator will light up green when the syringe pump is pumping, yellow when it is paused, red when it is empty, and blue when it is being retracted. To control the pumping speed, simply go into the Arduino code and input the desired flowrate. The code will automatically calculate the motor speed required to fulfill the flowrate. The electronics and controls are housed in a 3D printed casing to shield them from possible leaks when pumping the syringes. 

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

# CAD Model

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e430f512e2512051b03?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


# Arduino Code
% to have arduino code displayed on webpge '''cpp --> code --> '''

[Link to Arduino Code](/SyringePumpCompletedCode.ino)
# Bill of Materials (Component List)

| Off-the-shelf  | Quanity |
| ------------- | ------------- |
| 2mm Lead Screw  | 1 |
| 1/4" x 8mm Flexible Coupling  | 1  |
| 200mm linear rod with 8 mm diameter  | 1  |
| Linear bearing with 8 mm diameter  | 1  |
| 2040 Aluminum Extrusion 1' Length  | 1  |
| Nema 17 Stepper Motor  | 1  |
| Arduino Mega 2560  | 1  |
| A4988 Stepper Driver  | 1  |
| Breadboard  | 1  |
| Toggle Push Button  | 1  |
| Large Push Button  | 1  |
| Limit Switch  | 1  |
| RGB Common Cathode LED  | 1  |


| 3D Printed  | Quanity |
| ------------- | ------------- |
| Electronics Housing  | 1 |
| Motor Mount  | 1 |
| Syringe Mount  | 1 |
| Syringe Pusher  | 1 |
| Syringe Stabilizer | 1 |

