#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);

    for (int r=0; r<n; r++){
        for (int c=0; c<n; c++){
            if ( (r==1&&c!=0&&c!=n-1) ||
                 (r==n-2&&c!=0&&c!=n-1)){
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}

