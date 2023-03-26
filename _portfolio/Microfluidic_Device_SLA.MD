---
title: "Microfluidic Device w/ SLA Printed Mold"
excerpt: "A custom created plier that was specially designed in Fusion 360 to be printed on a dual extruder Makergear 3D printer."
header:
  image: /assets/img/Microdevice.jpg
  teaser: /assets/img/Microdevice.jpg
gallery:
-   url: /assets/img/FreeFormSetup.jpg
    image_path: /assets/img/FreeFormSetup.jpg
    alt: "placeholder image 1"

  
---
# Project Purpose 

This project has two main goals. The first is to create a microfluidic device capable of laminar flow mixing at the microscopic level, and the other goal is to utilize additive manufacturing in the form of Vat Photopolymerization (SLA) to fabricate the device and its small features. Since microfluidic devices can be affected by layer lines and uneven layers, SLA 3D printing is used since this method can generate the smallest feature sizes. 

For this project, the fabricated microfluidic device will be tested first with mixing different colored dyes as a basis for the effectiveness of the device. The goal is for the device to successfully mix the dyes before the liquid reaches the outlet. If the device can uphold this standard, then it meets the basic requirements for a microfluidic device that is capable of laminar flow mixing.

# Project Description

## Device Fabrication

The fabrication of this device is a three step process. The first step is designing the mold for the device in CAD where the mold will be the negative of the device's features. The second step is setting up the design to be 3D printed in a Formlabs Form 3 to be SLA printed and performing necessary post processing of the print. The third and final step is casting the SLA printed mold with polydimethylsiloxane (PDMS) and bonding a glass slide to the cured PDMS device.

## Device Design Parameters

To start, the size of the entire device will be 75 mm x 25 mm x 2.5 mm to meet typical microfluidic device standards for microscopes. The inlets and outlets of the device will be created through 2 mm diameter columns that are the same height as the outer walls of the SLA printed part. The flow path of the fluids will be extruded shorter than the columns. The mixer path consists of two inlet points where the two different dyes will be injected. The two inlets connect to two separate channels that will converge into one 2 mm wide channel creating a "Y" inlet junction. To facilitate passive mixing conditions, a zigzag pattern will be implemented along with intersecting channels. The zigzag pattern will gradually decrease from 10 mm in length to 4 mm in length, and once the zigzag pattern evens out, the intersecting channels will be embedded directly into the zigzag pattern. This will lead directly into a single channel that connects to the outlet of the device. The intersecting channels fuel mixing by splitting, rearranging, and combining component streams. 


# CAD Model

The CAD model below is the model that will be imported into the FreeForm software to be SLA printed.

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e4339643e9080aa75af?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


# Photo Gallery of Print and Fabricated Parts

{% include gallery caption ="Mold STL file set up in Freeform software before SLA print. Cups did not cause print failure." %}
