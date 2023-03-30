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
-   url: /assets/img/Printed_udevice_mold.jpg
    image_path: /assets/img/Printed_udevice_mold.jpg
    alt: "placeholder image 2"
  
---
# Microfluidic Device Introduction

Microfluidic devices have become very popular in recent years for a plethora of reasons. A microfluidic device is a device designed to work with small scale components such as blood cells. These devices have become popular because they allow researchers and companies the ability to conduct experiments on a much smaller, cheaper scale before executing on a large scale. The devices are typically small enough to be placed under a microscope, making research and development much easier to conduct. They have also become cheaper and more sophisticated as technology has continued to evolve. 

# Project Purpose 

The microfluidic device designed in this project is made for homogeneous laminar flow mixing. This means two different solutions can be injected into the device through the inlets and one homogeneous solution will emerge from the device. This specific type of microfluidic device is widely used in the biomedical and food industries. If a research institution needed to create a guaranteed homogeneous solution of various types of cells before moving onto the next steps in their research process, a homogenous mixing device would be a cost-efficient solution. These devices have become more advanced in recent times to even include small external mixing devices; however, many of the advanced versions require energy input in order to work and can be less reliable and more expensive. The device developed in this project is a passive homogenous mixing device meaning it does not need any external energy source in order to create a homogeneous solution. This has been the most commonly used and cost effective way to design a homogenous mixing microfluidic device.

# Project Description

## Device Design Parameters

This microfluidic device contains two proven design features intended to facilitate better homogeneous mixing. To start, the entire device will be contained within a 75 mm X 25 mm X 2.5 mm rectangular base to fit within standard microscope dimensions. The device has two inlets in the form of a Y inlet junction. The angle at which the two different solutions meet was designed to be narrow so that the fluids would mix together better. The shallow angle of the “Y” inlet junction increases flow speed of the two solutions as they approach the single channel. The two solutions then enter into a zigzag section of the microfluidic device. The zigzag channels create vortices and turbulence within the laminar flow as they are continuously forced into the walls of the channel to induce mixing. The length of the channels decreases from 10 mm to 4 mm as the solution passes through the zigzag section of the device. The shorter channels increase the frequency of induced vortices and turbulence. Towards the end of the zigzag pattern, intersecting channels are added to create additional mixing of the fluids. The intersecting channels pass through some of the zigzag sections to allow for increased disturbance in the two solutions inside the device. This additional disruption creates an additional means of mixing in case certain fluids are resistant to the zigzag mixing method. This ensures that once the solutions reach the outlet of the device, they will be completely homogenous and ready for use.

## Device Fabrication

Vat Photopolymerization was the chosen additive manufacturing method for developing these devices. The fabrication of this device is a three step process. The first step is designing the mold for the device in CAD where the mold will be the negative of the device's features. The second step is setting up the design to be 3D printed in a Formlabs Form 3 to be VPP (SLA) printed and performing necessary post processing of the print. The third and final step is casting the SLA printed mold with polydimethylsiloxane (PDMS) and bonding a glass slide to the cured PDMS device. Having to create the negative for the device made the CAD section of this project more challenging but still obtainable. These devices are very small and must be as accurate as possible. This means the mold must be very precisely 3D printed in order to manufacture a successful microfluidic device. Filament printing is not capable of printing features small enough, or accurate enough as what was required for the mold to this device. This is because the flow of fluids in the device can be adversely affected by layer lines. Vat Photopolymerization is able to print with a high enough accuracy and resolution where the layer lines are not visible. VPP prints can also be post-processed to have strong, uniform mechanical properties, allowing for long lasting use. This makes the expensive resin in VPP printing worth the cost since they will withstand the test of time.
 

# Mold CAD Model

The CAD model below is the model that will be imported into the FreeForm software to be SLA printed.

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH35dfcQT936092f0e4339643e9080aa75af?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


# Photo Gallery of Fabrication

{% include gallery caption ="Mold STL file set up in Freeform software before SLA print (Left). Cups did not cause print failure as shown by completed mold print (Right)." %}
