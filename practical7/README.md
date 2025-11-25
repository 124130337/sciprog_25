#Practical 7

This branch contains files for practical 6. There are two codes to be run.

#Compiling the code

To compile the codes, do the following:

gcc -o dynamic_allocation dynamic_allocation.c -lm

gcc -o polynomial polynomial.c

#Executing the code

To execute the code, do the following:

./dynamic_allocation

./polynomial

#Output

The dynamic_allocation code will prompt the user to enter the size of an array then output something like the following:

Size of the array: 
6
a[0]; 1
a[1]; 1
a[2]; 1
a[3]; 1
a[4]; 1
a[5]; 1

The polynomial code will prompt the user to enter the required polynomial order then output something like the following:
5
e term for order 1 is 1.00000000000000 
e term for order 2 is 0.50000000000000 
e term for order 3 is 0.16666666666667 
e term for order 4 is 0.04166666666667 
e term for order 5 is 0.00833333333333 
