#include<stdio.h>
void main(){
    int N;
    scanf("%d", &N);
    int A[N],B[N];
   //input
   for (int ind=0; ind<N; ind++){
        scanf("%d", &A[ind]);
   }
   for (int ind=0; ind<N; ind++){
        scanf("%d", &B[ind]);
   }
   //compute
   int sumA = 0, sumB=0;
   for (int ind=0; ind<N; ind++){
        int scoreA=A[ind], scoreB=B[ind];
        //printf("%d vs %d\n", scoreA,scoreB);
        if(scoreA>scoreB){
            sumA+=2;
        } else if (scoreB>scoreA){
            sumB+=2;
        } else {
            sumA++;
            sumB++;
        }
   }
   //output
    if(sumA>sumB){
        printf("Team 1 wins\n");
        printf("Score %d to %d", sumA,sumB);
    }
    if(sumB>sumA){
        printf("Team 2 wins\n");
        printf("Score %d to %d", sumB,sumA);
    }
    if(sumA==sumB){
        printf("Draw game\n");
        printf("Score %d to %d", sumA,sumB);
    }
}
