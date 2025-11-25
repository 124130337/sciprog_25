#include <stdio.h>
#include <math.h>
#include <stdlib.h>



//using pass by value when you're NOT changing value inside function,
//or else use pass by reference




//function prototype
//input arguments: Fn-1 and Fn-2 and they will return the values Fn and Fn-1
//pointers *a and *b

void fibonacci(int *a, int *b);

int main()
{
        int n, i; //variable n, and loop counter i
        int f1=1, f0=0;

        //Get user to enter a number for n
        printf("Enter a positive integer\n");
        scanf("%d", &n);


        //CHeck uf the number is positive
        if (n<1){
                printf("The number is not positive\n");
                exit(1);
        }

        printf("Fibonacci sequence is: \n");
        printf("%d %d ", f0, f1);


        //Now we write a loop to calculate the fibonacci sequence
        for (i=2; i<=n; i++){
                fibonacci(&f1, &f0);    //passing f1 and f0, updates f1 and f0, call function "fibonacci"
                printf("%d ", f1);
                if ((i+1)%10 ==0)
                        printf("\n");


        }


        return 0;
}

void fibonacci(int *a, int *b){

        int next;
        next = *a + *b; //next variable in the sequence (a and b are pointers to integers)
                       //next = Fn = Fn-1 + Fn-2
                       //a=Fn-1
                       //and b=Fn-2

        *b = *a; //we update b(Fn-2) to be a = Fn-1
        *a = next; //we then update a(Fn-1) to be Fn

}


