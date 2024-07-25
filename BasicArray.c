#include<stdio.h>
void main(){
    int N = 5;
    int arr[N]; //arr[size]
    /*
    input 3 2 5 9 4

    ind 0 1 2 3 4
    val 3 2 5 9 4
    */
    //arr[0] = 3;
    //printf("%d", arr[0]);
    //Input
    for (int ind=0; ind<N; ind++){
        scanf("%d", &arr[ind]);
    }
    //Output
     for (int ind=0; ind<N; ind++){
        printf("%d ", arr[ind]);
    }

}
