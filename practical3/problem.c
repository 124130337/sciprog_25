//finding the area under the curve f(x) = tan(x) from x=0 to x=pi/3

#include <stdio.h>
#include <math.h>

int main(){
	int N=12, i;
	float a = 0.0, b_deg=60.0;
	float b_rad, area, multi_rad;

	b_rad = (M_PI * b_deg)/180.0;
	printf("pi/3 in radians = %f \n", b_rad);

	area = tan(a) + tan(b_rad);
	printf("Initial area: f(x0) + f(x12) = %f\n", area);

	for (i=5; i<60; i=i+5){
		area = area + 2*tan((M_PI*i)/180.0);
		printf("New area at x (%d) = %f \n", i/5, area);
	}
	multi_rad = (M_PI *((b_deg - a)/(2*N)))/180.0;
	area = multi_rad * area;

	printf("\n Trapeziod result: %f \n", area);

	printf("Real result: %f \n", log(2.0));

	return 0;
}
