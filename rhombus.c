#include<stdio.h>
void main(){
    int x;
    scanf("%d", &x);
    int space=x/2;
    for(int i=1; i<=x; i+=2){
        for(int j=space; j>0; j--){
            printf(" ");
        }
        for(int q=1; q<=i; q++){
            printf("*");
        }
        space--;
        printf("\n");
    }
    space=1;
    for(int i=x-2; i>=1; i-=2){
        for(int j=1; j<=space; j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("*");
        }
        space++;
        printf("\n");
    }
}
