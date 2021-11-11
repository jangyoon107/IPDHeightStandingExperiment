# Dwarf or Giant: The Influence of Interpupillary Distance and Eye Height on Size Perception in Virtual Environments
https://diglib.eg.org/handle/10.2312/egve20171353
# Readme

IMPORTANT!!!
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
