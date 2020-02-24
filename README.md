# TE-1-33-EXPERIMENTER-DECK-PROJECT-ONE-Hee-Haw-Siren
## HEE HAW SIREN - PROJECT ONE 
https://github.com/SteveJustin1963/TE-1-31-EXPERIMENTER-DECK

Only the first project is presented in this issue. We advise, however, to purchase the full kit of parts in readiness for the next issue. Keep them in a safe place. The complete circuit may look complex but each individual project is simple.  A Hee Haw siren reminds us of police, fire and ambulance. The idea of emitting two different notes is not new. Its effectiveness in alerting our attention is well known. Take, for instance, a simple two tone door bell or the telephone bell. They are considerably more alerting than a constantly ringing bell because a continuous note tends to blend in with the background noise. However a constantly ringing bell on board ship is the most frightening of all as it signifies FIRE! This project uses a single IC to give two tones. A transistor amplifies this to drive a speaker. The resulting HEE HAW can be adjusted via two mini trim pots to sound just like a fire truck or re-adjusted to sound like a computer gone wild.  

## Parts for this project:
* 1 - EXPERIMENTER DECK PC board
* R1 47k
* R2 100k
* R3 3k3
* R4 10k
* R6 15R
* Cl Capacitor 6n8 100v
* C2 6n8 "
* C3 Electrolytic 4u7 10v
* C4 22mfd 10v
* RV1 Mini trim pot 500k Cermet
* RV2 Mini trim pot 100k Cermet
* Ql Transistor BC 557 or similar
* 1 C1 CD 4001
* 1 2 1/4" speaker
* Hook-up flex
* Tinned copper wire
* 6v lantern battery 

![](https://github.com/SteveJustin1963/TE-1-31-EXPERIMENTER-DECK/blob/master/heehaw-cct.png)

## HOW THE CIRCUIT WORKS:
The circuit consists essentially of two multivibrators. A multivibrator can also be called a FLIP-FLOP. The word flip-flop sounds much better so we'll use it. These two flip-flops are arranged to oscillate at widely differing frequencies. The first oscillator has a frequency of 25Hz when the potentiometer RV2 is at minimum resistance so that the 3k3 resistor R3 is providing the oscillator frequency. By adjusting RV2 slightly we obtain the characteristic HEE HAW sound. This frequency is now about 2Hz. Altering the switch Sw2 will give us a single note which will be sustained for up to 4 secs then change in pitch. The note we hear is actually the frequency of the second flipflop being modified by the first flipflop. This is achieved by the effect of the 6n8 capacitor on the input gates 8&9.  

![](https://github.com/SteveJustin1963/TE-1-33-Hee-Haw-Siren/blob/master/h-h-f.png)


## PREPARING THE PRINTED CIRCUIT BOARD:

Before mounting any parts, the PC board requires 10 jumper wires. Refer to the layout diagram for the exact positions of these jumpers. They are made from tinned copper wire or from the leads of resistors. Be sure to locate the correct holes as you will be using them as a guide to positioning the parts in the future. You will notice some of these jumpers are required for the HEE HAW SIREN while others are used in later projects. But it is best to fit them all now. Make two switches as shown here: 

![](https://github.com/SteveJustin1963/TE-1-33-Hee-Haw-Siren/blob/master/molexwash.png)

They will be needed for the first project. Any type of terminal pin will be suitable and even a fullsize switch may be used, connected to 30cm of hook-up wire.  

## MOUNTING THE PARTS
Fit the two mini trim pots. Cermet trim pots are preferred as you can turn their body with your fingers or use a screwdriver in their slot. Start at the left-hand side of the PC board and fit each component in turn. The CD 4001 IC should be left until last as it is a CMOS IC and requires fast insertion to protect it from static build-up. Once it is soldered in position it is quite robust. Use your fingers to heat-sink the IC so that it does not get too hot. Connect
hook-up wire to the places
marked for the speaker and
battery. No on-off switch
is shown in the diagram as
the wire can be fitted under the spring terminals of the
battery or 2 alligator clips
can be connected to the
battery terminals.
After soldering all the
parts onto the PC board,
check once more with the
layout diagram, then
connect the battery. By
varying the two trim pots
you will be able to get a
wide variety of notes
which will very from a HEE
HAW SIREN for a toy fire
engine to a type of
electronic music emitted
when a computer goes wrong.
Projects 2 - 10 will be
presented in the next issue.
Don't miss your copy! 

![](https://github.com/SteveJustin1963/TE-1-33-Hee-Haw-Siren/blob/master/layout.png)
![](https://github.com/SteveJustin1963/TE-1-33-Hee-Haw-Siren/blob/master/batt.png)
