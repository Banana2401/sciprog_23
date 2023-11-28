ssh sp68@sciprog.ichec.ie
cd Practice
cd P02

gcc -o P02_con P02_con.c -lm
./P02_con
[output]
The number of digits is 25
Temp is 2147483621
inum=33554431,  fnum=33554432.000000, inum in binary=1111111111111111111111111

gcc -o P02_size P02_size.c
./P02_size
[output]
Size of x: 4 bytes
Size of y: 8 bytes


gcc -o P02_log P02_log.c
./P02_log
[output]
log(2) = 0.693147

gcc -o P02_sum P02_sum.c
./P02_sum
[output]
 Sum1=0.000000
 Sum2=0.000000
 Difference between the two is 281325897232730344956719402057728.000000

Mathematically, these two sums are equivalent, and the difference between them should be equal to zero.
Because the limitations of floating-point arithmetic in computers, the calculated difference is not exactly equal to zero.









