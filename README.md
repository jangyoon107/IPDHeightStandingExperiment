# Dwarf or Giant: The Influence of Interpupillary Distance and Eye Height on Size Perception in Virtual Environments
https://diglib.eg.org/handle/10.2312/egve20171353

# Abstract
This paper addresses the question: to what extent can deliberate manipulations of interpupillary distance (IPD) and eye height be used in a virtual reality (VR) experience to influence a user's sense of their own scale with respect to their surrounding environment - evoking, for example, the illusion of being miniaturized, or of being a giant? In particular, we report the results of an experiment in which we separately study the effect of each of these body scale manipulations on users' perception of object size in a highly detailed, photorealistically rendered immersive virtual environment, using both absolute numeric measures and body-relative actions. Following a real world training session, in which participants learn to accurately report the metric sizes of individual white cubes (3''-20'') presented one at a time on a table in front of them, we conduct two blocks of VR trials using nine different combinations of IPD and eye height. In the first block of trials, participants report the perceived metric size of a virtual white cube that sits on a virtual table, at the same distance used in the real-world training, within in a realistic virtual living room filled with many objects capable of providing familiar size cues. In the second block of trials, participants use their hands to indicate the perceived size of the cube. We found that size judgments were moderately correlated (r = 0.4) between the two response methods, and that neither altered eye height (± 50cm) nor reduced (10mm) IPD had a significant effect on size judgments, but that a wider (150mm) IPD caused a significant (μ = 38%, p &lt; 0.01) decrease in perceived cube size. These findings add new insights to our understanding of how eye height and IPD manipulations can affect peoples' perception of scale in highly realistic immersive VR scenarios.


# Readme

*Note
Small details must be adjusted before the experiment!
Decide on 
  - Size of the box
  - Distance/height changes to the user
  - Distance changes to the cube
  - IPD changes to the user

After cloning the project:
  1. Right click on uproject file and select genereate visual studio file.
  2. Double click on visual studio file and open visual studios.
  3. Click Build and build solution.

Experiment:
  This experiment is to test the subject's ability to measure size in Virtual Environments in different conditions. There are three variables that are changed in the experiment: IPD, eye height, cube location. The experiment has 27 conditions (combo of IPD, eye height, cube location) and the experiment always starts with index 0 (which is normal IPD, normal eye height, normal cube location).
  
Before the experiment:
  Measure user's IPD using Oculus Rift's own software and type in the blueprint.
  
Debug (or testing) Inputs:
Keyboard 1: Set to user's own IPD
Keyboard 2: Set to narrow IPD (0.001m)
Keyboard 3: Set to wide IPD (0.15m)

Keyboard 4: Set to user's own eye height
Keyboard 5: Set to low eye height (-50cm)
Keyboard 6: Set to high eye height (+50cm)

Keyboard 7: Set to normal cube location
Keyboard 8: Set to close cube location (-50cm)
Keyboard 9: Set to further cube location (+50cm)


Keyboard Inputs:
Keyboard P: capture two hand positions and save distance between hands

Oculus Inputs:
Enter (center button): Proceed with experiment (or move on to next condition)
Up (Debug): Get oculus position and display (shown in blue)
