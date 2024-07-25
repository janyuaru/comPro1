#include<stdio.h>
void main(){
    int target, consec=0, max_consec=0, count=0;
    scanf("%d", &target);
    while(1){
        int x;
        scanf("%d", &x);
        if (x==0){
            break;
        }
        if (x==target){
            count +=1;
            consec+=1;
            if (consec>max_consec){
                max_consec=consec;
            }
        } else {
            consec = 0;
        }
        printf("%d\n%d", max_consec, count);
    }
}
