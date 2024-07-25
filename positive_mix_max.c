#include<stdio.h>
#include<limits.h>
void main(){
    int i=1, n=8, maxV = INT_MIN, minV = INT_MAX;
    //maxV = -2000000000, minV = 2000000000
    //INT_MIN = lowest integer value
    //INT_MAX = highest integer value
    while(i<=n){
        int x;
        scanf("%d", &x);
        if (x>0) {

        //5 2 7 10 4
        if (x>maxV){
            maxV = x;
        }
        if (x<minV){
            minV = x;
        }
        //printf("max : %d\n", maxV);
    }
    i+=1;
    }
    printf("%d\n%d", maxV, minV);
}
