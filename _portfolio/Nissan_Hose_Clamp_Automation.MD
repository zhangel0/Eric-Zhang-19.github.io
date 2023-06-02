---
title: "Nissan Hose Clamp Automation Project"
excerpt: "Current mechanical engineering senior design project that partners with Nissan to fully automate a hose clamping subassembly process. Working in conjunction with four other team members."
header:
  image: /assets/img/DesignDayPoster.png
  teaser: /assets/img/Cobot_Arm.jpg
gallery:

---

# Project Purpose

Nissan's manufacturing plant in Smyrna, TN has been pushing to fully automate assembly and subassembly processes. One of these subassembly processes includes attaching industrial hose clamps onto engine hoses prior to attaching the hose to the engine itself. The current process sorts clamps automatically, but the hoses must be handled manually. Furthermore the current equipment used for clamp sorting is expensive to maintain and replace. The purpose of this project is to fully automate the hose clamping process by designing a clamp sorting and opening mechanism that is easily maintainable and cheap to replace. The second part of this project utilizes a robot arm that can be programmed to pick up and move the hoses into proper orientations and positions. 

# Project Description

As a Vanderbilt mechanical engineering senior design project, prototyping for this project was split into five large Design, Built, & Test (DBT) cycles over the course of two full semesters. The team meets weekly with Nissan sponsors of the project and biweekly with project overseers and Vanderbilt professors. As of April 24, 2023, these DBT cycles have been successfully completed and significant progress has been made in all aspects of the design project. Currently for the clamp portion of the project we have a new system to sort the clamps efficiently, dispenses the clamps in a controlled manner, and opens the clamps. For the hose and robot side of the project, we have working robot palletization code, an efficient method of mounting the hoses, and a designed tray add-on to the robot stand to keep everything in the same frame of reference at all times. 

[Up to date video of current progress](https://www.youtube.com/watch?v=x-PSIIxUcXQ){:target="_blank"}

All project components were handed off to Nissan after the Design Day demonstrations. From there Nissan has put the project in their innovation lab in the plant and will continue to work on it until the project is ready to be integrated on the floor.

# DBT Cycle 1

The first DBT cycle was primarily fully understanding the problem at hand and basic design thinking implementation. This included understanding the current solution, understanding the robot functions, and mass ideation of designs. After writing down numerous ideas, we narrowed down to four ideas to test and prototype for the first DBT cycle. 

# DBT Cycle 2

The second DBT cycle focused on idenitfying the necessary individual mechanisms for the clamp and the hoses. This involved narrowing ideas down to one ideal solution per mechanism after the first DBT cycle. This is when the basic idea for the current mechanisms were formed: a constant rotary mechanism to pick up and sort clamps onto a ramp, a dispensing mechanism that controls clamp orientation and feeding speeds of the clamps into the opening mechanisms, a rotary clamp opening mechanism with 270 degrees of freedom for the clamp to drop in, and a linear actuator mechanism to translate the mechanism away from the dispenser to make space for the hose to insert into the mechanism.

## Linear Actuator and Clamp Opening Mechanism CAD

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e43837daac11f693bd2?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# DBT Cycle 3

## Robot and Tray CAD

The CAD models below depict two tray prototypes that I have been working on for our third DBT cycle. The purpose of the trays is to keep the hoses and the robot arm in the same frame of reference at all times. This is crucial to the functionality of the robot because the robot is coded primarily using the waypoint function, which means the robot is moving using distances and coordinates relative to the robot base. If the robot base moves, then this waypoint is no longer valid for the original hose position unless the hose is moved the same vector distance and direction the robot base moves. The tray attachment eliminates this issue all together.

For the Tray prototype CAD models below, the first CAD model depicts the tray design itself. This CAD model also contains static load analysis that can be viewed by clicking the icon under the cube in the top left corner of the CAD display. The load analysis was done to ensure that the tray would not fail while the hoses are mounted. The second CAD model depicts how the tray will be mounted to the robot base. 

### Tray Prototype 1
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e43288349ad051a0725?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e43603632aaf29c7fa1?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

### Tray Prototype 2
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e435870792a0a8f6522?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e43827eb7ba4d5d7852?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# DBT Cycle 4

## Integration

Improved design for mounting the tray to the cobot stand with custom 3D printed L brackets with T slots. L brackets reduces stress on the tray itself, and it allows the tray to be mounted farther out. This heavily reduces the possibility of the tray interfering with the cobots movement path, and it reduces likelihood of singularities where two axis line up causing the robot to trigger the emergency stop or fail altogether.


### L bracket CAD and Assembly to Cobot Stand

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e439ebcb34ab7cf3df3?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e43a7a802e892baca22?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


## Continued Tray Prototyping and Improvement

### Palletizing Vertical Mounted Hoses

### Testing Gravity Based Hose Mount

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e434b00f32c47f08553?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

The CAD model above depicts the new custom gripper that will be implemented to test the gravity based mounts.

# DBT Cycle 5

DBT 5 is the last DBT cycle, so this cycle was used to finalize design and make necessary preparations for Senior Design Day. This includes integration tweaks, final report, summary poster, and preparing a 2 minute pitch. 


