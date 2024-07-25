#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    int nAsterisk = n, nSpace=0;
    for (int r=0; r<n; r++){
        for (int c=0; c<nSpace; c++){
            printf(" ");
        }
        nSpace++;
        for (int c=0; c<nAsterisk; c++){
            printf("%d", nAsterisk);
        }
        nAsterisk--;
        printf("\n");
    }
}
