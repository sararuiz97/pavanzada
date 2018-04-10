Shadows of the Knight - Episode 1
- The Goal
Batman will look for the hostages on a given building by jumping from one window to another using his grapnel gun. Batman's goal is to jump to the window where the hostages are located in order to disarm the bombs. Unfortunately he has a limited number of jumps before the bombs go off...

- Rules
Before each jump, the heat-signature device will provide Batman with the direction of the bombs based on Batman current position:
U (Up)
UR (Up-Right)
R (Right)
DR (Down-Right)
D (Down)
DL (Down-Left)
L (Left)
UL (Up-Left)

Your mission is to program the device so that it indicates the location of the next window Batman should jump to in order to reach the bombs' room as soon as possible.

Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index (0,0).

- Note
For some tests, the bombs' location may change from one execution to the other: the goal is to help you find the best algorithm in all cases.

The tests provided are similar to the validation tests used to compute the final score but remain different.

- Game Input
The program must first read the initialization data from standard input. Then, within an infinite loop, read the device data from the standard input and provide to the standard output the next movement instruction.
Initialization input
Line 1 : 2 integers W H. The (W, H) couple represents the width and height of the building as a number of windows.

Line 2 : 1 integer N, which represents the number of jumps Batman can make before the bombs go off.

Line 3 : 2 integers X0 Y0, representing the starting position of Batman.

Input for one game turn
The direction indicating where the bomb is.

Output for one game turn
A single line with 2 integers X Y separated by a space character. (X, Y) represents the location of the next window Batman should jump to. X represents the index along the horizontal axis, Y represents the index along the vertical axis. (0,0) is located in the top-left corner of the building.

- Constraints
1 ≤ W ≤ 10000
1 ≤ H ≤ 10000
2 ≤ N ≤ 100
0 ≤ X, X0 < W
0 ≤ Y, Y0 < H
Response time per turn ≤ 150ms
Response time per turn ≤ 150ms


SOLUCION

Para solucionar este problema lo mas optimo es utilizar binary search. Para cada iteración tendremos que Batman se va a mover de cierta forma que dependra de la dirección de la bomba.

Debemos tener los siguientes if/else if

- Para UP
if (!strcmp(bombDir, "U"))
  Y2 = Y0;
  Y0 = Y1 + (Y2 - Y1) / 2;

- Para UP-RIGHT
else if (!strcmp(bombDir, "UR"))
  Y2 = Y0;
  Y0 = Y1 + (Y2 - Y1) / 2;
  X1 = X0;
  X0 = X1 + (X2 - X1) / 2;

- Para RIGHT
else if (!strcmp(bombDir, "R"))
  X2 = X0;
  X0 = X1 + (X2 - X1) / 2;

- Para DOWN-RIGHT
else if (!strcmp(bombDir, "DR"))
  Y1 = Y0;
  Y0 = Y1 + (Y2 - Y1) / 2;          
  X1 = X0;
  X0 = X1 + (X2 - X1) / 2;

- Para DOWN
else if (!strcmp(bombDir, "D"))
  Y1 = Y0;
  Y0 = Y1 + (Y2 - Y1) / 2;

- Para DOWN-LEFT
if (!strcmp(bombDir, "DL"))
  Y1 = Y0;
  Y0 = Y1 + (Y2 - Y1) / 2;          
  X2 = X0;
  X0 = X1 + (X2 - X1) / 2;

- Para LEFT
if (!strcmp(bombDir, "L"))
  X2 = X0;
  X0 = X1 + (X2 - X1) / 2;

- Para UP-LEFT
if (!strcmp(bombDir, "UL"))
  Y2 = Y0;
  Y0 = Y1 + (Y2 - Y1) / 2;        
  X2 = X0;
  X0 = X1 + (X2 - X1) / 2;

Al final solo tendremos que devolver X0 y Y0 que es la ubicación de la siguiente ventana a la cual
batman tiene que saltar.

ANALIZAR

¿Cuanto nos toma el proceso?
O(logn)
Esto se debe a que estamos utilizando binary search.
