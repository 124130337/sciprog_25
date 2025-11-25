#include <stdio.h>
#include <math.h>

float deg_to_rad(float deg_ang);
float trap_rule(int N, float tan_arr[N+1]);

int main(void){
        int N=12, i;
        float tan_arr[N+1], deg, rad, area;

        for (i=0; i<=N; i++){
                deg = i*5.0;
                rad = deg_to_rad(deg);
                tan_arr[i] = tan(rad);
                printf("tan_arr[%d]=%f\n", i, tan_arr[i]);
        }

        area = trap_rule(N, tan_arr);


        //approximated results
        printf("\n Trapeziod result: %f\n", area);
        //actual results
        printf("Real result: %f\n", log(2.0));

        return 0;
}

float deg_to_rad(float deg_ang){
        return((M_PI * deg_ang)/180.0);

}

float trap_rule(int N, float tan_arr[N+1]){
        float area;
        int i; //declaring loop index

        area = tan_arr[0] + tan_arr[N]; //f(x_0) + f(x_N) as in trap rule
        for (i=1; i < N; i ++){
                area = area + 2* tan_arr[i]; //adding 2*f(x_i) from i = 1 to N-1 as in trap rule
        }

        float mult_rad=deg_to_rad((60.0-0.0)/(2*N)); //declaring and assinging a value at the same time,
                                                  //this is (b-a)/2N that appears in trap rule

        area = mult_rad*area; //multiplying (b-a)/2N by ( f(x_0) + 2f(x_1) + ... + 2f(x_N-1) + f(x_N) )

        return area;
}


