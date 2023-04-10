---
title: "Friction Stir Welding of Plastic Tubing"
excerpt: "This is a research project that I am currently working on that examines the use of FSW for plastic tube welding. The end goal is to prototype a small portable FSW machine."
header:
  image: /assets/img/FSE_Pipe_Mounting_Overview.jpg
  teaser: /assets/img/FSE_Pipe_Mounting_Overview.jpg
gallery:

  - url: /assets/img/FSW_ToolHolder_Schematic.jpg
    image_path: /assets/img/FSW_ToolHolder_Schematic.jpg
    alt: "placeholder image 1"
  - url: /assets/img/FSW_PipeMount.jpg
    image_path: /assets/img/FSW_PipeMount.jpg
    alt: "placeholder image 2"
    
---

# Project Purpose

Friction stir welding (FSW) is a welding process that joins two samples through mechanical stirring. In FSW the tool consists of a pin and shoulder that rotates and traverses along the joint area. The pin plunges into the two samples and the shoulder creates friction along the surface of the material, heating up the samples to create plastic deformation. The samples are then stirred together when deformed and a stir welded joint is created.

The FSW process is primarily applied to ductile metals such as aluminum where the shoulder can create sufficient material heating and deformation through surface friction. In this project however, the welding of two plastic PVC pipes are being evaluated where the lower conductivity of plastics inhibits the effectiveness of the shoulder.

The ideal end goal of this project is to begin prototyping a small-scale friction stir welder for plastics that is portable and easy to use. The lower force and spindle RPM requirements point towards the possibility of scaling down modern FSW machines.

## [Link to video of test weld](https://user-images.githubusercontent.com/122575035/227753066-b0d049e9-f113-4469-873d-3b464521a599.mp4){:target="_blank"}

# Project Description 

The initial objective of this project is to first develop a custom tool and toolholder that will allow for successful FSW of the PVC tubes based on the FSW hardware in the Vanderbilt Welding Automation Lab. This includes prototyping and iterating a custom shoe around hardware dimensions and parameters that will serve as the primary connection between the tool and the welded joint. The tool will be fabricated via subtractive machining using a lathe to turn down the tool to fit through a thrust bearing and the pin to 0.25 inches. The next step is to assess the integrity of the welds and determine ideal welding parameters (downward Z force, plunge depth, spindle RPM, rotation/traverse speed, etc.), and once this is determined, a comparison between the integrity of the FSW joints and commercial PVC cement joints will be conducted to evaluate the viability and feasibility of the FSW application. 


# Drawings and CAD

## Schematics and Dimensions

{% include gallery caption=" Measured dimensions and mapped out schematics of toolholder and pipe mounts." %}

## Shoe Design

<iframe src="https://vanderbilt800.autodesk360.com/shares/public/SHd38bfQT1fb47330c99492b409001bf20e9?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

The CAD model above depicts the final shoe design that was 3D printed out of ABS and implemented in a test weld. The ABS shoe was degraded after the second test weld, which resulted in welding the ABS shoe to the PVC pipe. The CAD file was converted to a DXF file and the shoe was CNC machined out of aluminum 6061.

## Pipe Mounts

<iframe src="https://vanderbilt800.autodesk360.com/shares/public/SHd38bfQT1fb47330c995d7db534187013dc?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

The above CAD model mounts the PVC collar to the pipe rotating mechanism. The mount was 3D printed out of ABS and will continue to be maintained out of ABS.

<iframe src="https://vanderbilt800.autodesk360.com/shares/public/SHd38bfQT1fb47330c994620da9497098b81?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

The above CAD model mounts the PVC tube to the pipe rotating mechanism. This mount was 3D printed out of ABS and will be maintained as ABS.

## Spring, Thrust Bearing, and Tool Connector

<iframe src="https://vanderbilt800.autodesk360.com/shares/public/SHd38bfQT1fb47330c99a870abce85c12504?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

The CAD model above depicts the housing for the thrust bearing and spring. The tool will be inserted through all three components where this connector will serve as the main stabilizer for the entire toolholder.

# Tensile Testing

## Hydraulic Load Frame Testing Video

The welded PVC tubing was cut into small approximately rectangular sections and placed into a load frame for tensile testing.

Link to [tensile test video](https://user-images.githubusercontent.com/122575035/227753385-c3cf6930-558b-4af1-afb6-ffeedb51cf16.mp4){:target="_blank"}

## Datasets

![PVCTest1 1000RPM 1IPM](/assets/img/PVCTest_1000RPM_1IPM_1.png)
### Figure 1: PVC weld test 1 with weld parameters of 1000 RPM and 1 IPM.


![PVCTest2_1000RPM_1IPM](/assets/img/PVCTest_1000RPM_1IPM_2.png)
### Figure 2: PVC weld test 2 with weld parameters of 1000 RPM and 1 IPM.


![PVCTest1_1500RPM_1IPM](/assets/img/PVCTest_1500RPM_1IPM_1.png)
### Figure 3: PVC weld test 1 with weld parameters of 1500 RPM and 1 IPM.


![PVCTest2_1500RPM_1IPM](/assets/img/PVCTest_1500RPM_1IPM_2.png)
### Figure 4: PVC weld test 2 with weld parameters of 1500 RPM and 1 IPM.
