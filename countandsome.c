#include<stdio.h>
void main(){
    int k,count=0,countk=0,total=0;
    scanf("%d", &k);
    while(1){
        int x;
        scanf("%d", &x);
        if(x==0){
            break;
        }
        count++;

        if(x>0 && x%k==0){
            countk++;
            total=total+x;
        }
    }
    printf("%d\n%d\n%d", count,countk,total);
}
