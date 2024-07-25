#include<stdio.h>
void main(){
    int r, c, count=1;
    scanf("%d%d", &r,&c);
    for (int row=0;row<r; row++){
        for (int col=0; col<c; col++){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}
