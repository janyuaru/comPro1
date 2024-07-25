#include<stdio.h>
void main(){
    int nRow, nCol;
    scanf("%d%d", &nRow,&nCol);
    for (int row=0;row<nRow; row++){
        for (int col=0; col<nCol; col++){
            printf("*");
        }
        printf("\n");
    }
}
