#include<stdio.h>
void main(){
    int x;
    scanf("%d", &x);

    if (x%2 == 0){ //เลขนี้หาร 2 ลงตัว?
        printf("even");
    } else {
        printf("odd");
    }
}
