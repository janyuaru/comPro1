#include<stdio.h>
void main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int ind=0; ind<N; ind++){
        scanf("%d", &arr[ind]);
    }
    //Output
     for (int ind=N-1; ind>=0; ind--){
        printf("%d ", arr[ind]);
    }

}
