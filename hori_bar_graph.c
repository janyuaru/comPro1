#include<stdio.h>
void main(){
    while(1){
        int n;
        scanf("%d", &n);

        if(n<=0){
            break;
        } else {
            for (int i=0; i<n; i++){
                printf("*");
            }
            printf("\n");
        }
    }
}
