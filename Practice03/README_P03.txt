ssh sp68@sciprog.ichec.ie
cd Practice
cd P03

gcc -o P03 P03.c
./P03
[output]
Two ints 10 1000 and two floats 1.732 3.141592

gcc -o P03_e3 P03_e3.c -lm
./P03_e3
[output]
Your approximation of the integral from x=0 to x=pi/3 of the function tan(x) with respect to x is:
0.69504
 The exact solution is:
0.69315

