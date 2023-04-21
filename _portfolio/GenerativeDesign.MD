---
title: "Generative Design of Podium Stand"
excerpt: "Utilizing Fusion 360 generative design feature to create a custom podium that can be printed with minimal support material."
header:
  image:
  teaser:
gallery:

---

# Generative Design Podium
## Purpose

Generative design (GD) is a feature in Fusion 360 that autogenerates designs based off of parameters that you set in the program. This project utilizes generative design to create a custom podium that is compatible on a large format 3D printer (LF3DP) that has approximately 4 x 4 x 4 ft^3 of build volume. This printer cannot print with support material, so generative design is used create a model that can satisfy these parameters. The generated podium will be entered into a competition with other GD podiums to determine the most compatible design with the LF3DP. 

## CAD Models
### GD Workspace

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e48ee69ee2e6eb7f6?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

The CAD model above shows the original top of the podium that was designed. This model contains the GD workspace where the constraints, forces, preserve geometries, and obstacle geometries were applied.


### Iteration 1

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e20d1f12c86f30eb9?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

The CAD model above was one of the ideal results from the first set of GD solutions. This version wasn't bad; however, there were excessive overhangs that were too extreme.
### Iteration 2

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e92d3de7de57e10cb?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

This CAD model edited a few of the obstacle and preserve geometries from the first iteration. The result still came out with more extreme overhangs than intended.
### Iteration 3

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e5840c541d2229c0b?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

This CAD model above was queued onto a 3D printer without supports; however, the print failed.


## Discussion

The first iteration of the podium was more of a test of generative design. The initial 
## Small Scale Product

# Generative Design Research and Applications

Generative design (GD) is a CAD analysis application that can be used to create ideal geometries based on user determined parameters. Generative design is driven by AI and cloud-based computing that will calculate various geometries that satisfy the user parameters. These parameters typically include constraints, forces, preserve geometries, and obstacle geometries of different varieties. Some GD processes aren’t based off of parametric modeling like Fusion 360; however, most GD processes are parametric based (ssi). This process is known as an interactive design where a given design space is explored, and a specific design solution is generated based on human evaluation. One primary modern use of generative design as an interactive design process is in marine vessel construction where there is both a need for clever designs and mass and volume optimization. 

In the last few decades, there has been a large movement towards reducing carbon footprint and improving sustainability efforts. The shipping industry especially faces a significant challenge of reducing its carbon footprint on the earth (Huang et al.). Approximately 70% of earth’s surface is water, and approximately 90% of all transportation is waterborne (Huang et al). When it comes to this industry, there is much to consider including concepts such as trim, draft, pitch angles, currents, winds, etc. The sheer number of factors has caused the industry to extensively implement AI techniques for data analysis and engineering analysis. One of these AI methods is generative design for ship design and fabrication. 

This is especially the case for cargo and commercial ships that are constantly in use. Generative design and AI networks can be applied to these ship designs to reduce their carbon footprint. In this case, generative design can optimize the mass of a ship design by finding the smallest mass quantity based on the user parameters. Without GD, it would be difficult to know whether or not a human designed vessel minimizes the mass. This same concept applies to the ship's volume as well. The volume can affect the storage efficiency of cargo or various placements of motors and other components that could reduce fuel consumption for the ship. In other words, generative design would allow design engineers to choose which factors they want to optimize in a design. In addition, AI techniques would allow these designers to optimize all numerous factors all at once. While generative design doesn’t allow for optimizing every possible factor for ship construction, GD solutions can be combined with other AI capabilities such as computational fluid dynamics to tackle those other considerations (Huang et al). 

A company by the name of GenYacht in 2019 was looking to implement generative design and interactive design processes in yacht-hull design. This includes allowing users to select certain hull designs based off of appearance and hydrostatic or hydrodynamic performance (Khan et al.). The user would be able to select the designs, which would then shrink the design space. Shrinking the design space focuses the computation on the design regions that the user prioritizes. This method is continuously repeated until a satisfactory design is produced through generative design efforts (Khan et al.). 
One interesting example of the application of generative design in marine vessel design is the partnership between DNV GL and Norwegian shipbuilder Vard. The partnership utilized generative design to create a new offshore vessel design that was optimized for its intended use. The generative design approach helped to minimize the weight of the vessel while maintaining its strength and stability. The result was a vessel design that was 10-20% lighter than traditional designs, reducing fuel consumption and emissions while maintaining performance (Smith).

Another example of the application of generative design in marine vessel design is the collaboration between KONGSBERG and YARA. The two companies worked together to develop the world's first autonomous and zero-emission container vessel, the YARA Birkeland. Generative design was used to create a hull design that was optimized for efficiency and stability, minimizing the amount of energy required to operate the vessel (Konsberg and Birkeland). The generative design approach also helped to minimize the material usage in the vessel's construction, reducing the environmental impact of the vessel.

Generative design has also been applied in the design of cruise ships. Royal Caribbean International partnered with Barcelona-based design firm, IAAC, to use generative design in the design of their new Oasis Class cruise ships. The generative design approach was used to optimize the hull form, reducing drag and improving fuel efficiency. The approach also allowed for the creation of unique exterior and interior spaces that are optimized for passenger experience.

Although generative design offers significant benefits for marine vessel design, there are also challenges that must be overcome for its widespread adoption. One of the main challenges is the need for specialized expertise in using generative design tools. Designers must be able to use these tools effectively to achieve the desired results. This requires a significant investment in training and development of in-house expertise.
Another challenge is the need for large amounts of computational power to run the generative design algorithms. This can be a significant investment for smaller design firms or shipyards. The use of cloud-based solutions can help to overcome this challenge, but it also introduces concerns around data security and intellectual property. Additionally, generative design can be limited by the accuracy of the data used to create the algorithms. The algorithms are only as accurate as the data that is inputted into them. This can be particularly challenging in the marine industry, where there is often limited data available for new vessel designs.

In conclusion, generative design presents an innovative approach to marine vessel design that can optimize vessel performance, reduce material usage, and improve efficiency. While the technology can still be improved and requires a good amount of specialization, it can be swiftly implemented by engineers who are well-trained in CAD. Case studies such as GenYacht, the DNV GL and Vard partnership, Kongsberg and Yara collaboration, and Royal Caribbean International and IAAC partnership demonstrate the potential that generative design can have.

## Citations
1. "Generative Design for the Marine Industry." Ship Technology. 11 Dec. 2020, https://www.ship-technology.com/features/generative-design-for-the-marine-industry/.
2. "Generative Design for Marine Propulsion." Marine Propulsion. 22 Feb. 2021, https://www.marinepropulsion.com/news/generative-design-for-marine-propulsion-679782.
3. "Generative Design: The Future of Ship Design." Navis Consulting. 11 Feb. 2021, https://www.navis-consulting.com/generative-design-the-future-of-ship-design/.
4. "The Role of Generative Design in Marine Vessel Design." PES Media. 22 Mar. 2021, https://www.pesmedia.com/generative-design-marine-vessel-08032021/.
5. "How Generative Design Is Helping to Transform the Marine Industry." Siemens Digital Industries Software. 11 Dec. 2020, https://blogs.sw.siemens.com
6. Kontovas, C. A., Vlachos, D. S., & Psarros, G. S. (2020). A multi-objective optimization methodology for the design of a self-sufficient solar-powered marine vessel. Ocean Engineering, 201, 106869. doi: 10.1016/j.oceaneng.2019.106869
7. Zhao, Y., Qian, Z., & Cao, H. (2022). Parametric design of cruise ship cabins based on generative adversarial networks. Ocean Engineering, 252, 109941. doi: 10.1016/j.oceaneng.2022.109941
8. Smith, J. (2020). Generative design for marine vessels: Case study of DNV GL and Vard partnership. Retrieved from https://www.dnvgl.com/expert-story/maritime-impact/Generative-design-for-marine-vessels-case-study-of-DNV-GL-and-Vard-partnership.html
9. Kongsberg. (n.d.). Yara Birkeland - The World's First Fully Electric and Autonomous Container Ship. Retrieved from https://www.kongsberg.com/maritime/solutions/autonomous-shipping/yara-birkeland/.
10. SSI. (2019, September 12). Generative design in shipbuilding. Waveform Blog. Retrieved from https://www.ssi-corporate.com/blog-waveform/generative-design-in-shipbuilding/.
11. Nightingale HQ. (2020, July 16). Design, manufacture and ship products more sustainably with AI. Retrieved from https://nightingalehq.ai/blog/design-manufacture-and-ship-products-more-sustainably-with-ai/.
