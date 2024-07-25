#include<stdio.h>
void main(){
    //int %d
    //float %f
    //double %lf (l:long)
    double x, y, z;
    scanf("%lf%lf%lf", &x, &y, &z);
    //printf("x:%f y:%f z:%f", x, y, z);
    if ( z == 0){
        printf("cannot divide by zero");
    } else { //else if (z != 0)
    double result = (x+y)/z;
    printf("%.6lf", result);
    }
}
