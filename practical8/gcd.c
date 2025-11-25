#include <stdio.h>

int iterative_gcd(int a, int b){
	int temp;
	while(b!=0){
		temp =b;
		b = a%b;
		a = temp;
	}
	return a;
}
		

int recursive_gcd(int a, int b){
	if(b==0){//needs two equal signs for if operator
		return a;
	}
	else{
		return (recursive_gcd(b, a%b));
	}
}

int main(){
	int a, b, error;

	printf("Please input two positive integers:\n"); //message to user
	error=scanf("%d %d", &a, &b); //two integers (for value of a and b)
	if(error !=2){ //checking to see if two integers are entered
		printf("Please enter two integers");
		return 1; //error checking if input is valid
	}
	if (a<=0 || b<=0){
		printf("These numbers are not positive \n");
		return 1;
	}

	//Calling the functions
	printf("Iterative gcd(%d, %d)=%d\n", a, b, iterative_gcd(a,b));
        printf("Recursive gcd(%d, %d)=%d\n", a, b, recursive_gcd(a,b));

	return 0;

}

