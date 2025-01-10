#include<stdio.h>
void main(){
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);
    if (z==0) {
        printf("cannot divide by zero");
    } else {
        double result = ((x+y)/z);
        printf("%.6lf", result);
    }
}
