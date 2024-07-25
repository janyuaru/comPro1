#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    int nAsterisk = n;
    for (int r=0; r<n; r++){
        for (int c=0; c<nAsterisk; c++){
            printf("*");
        }
        nAsterisk--;
        printf("\n");
    }
}
