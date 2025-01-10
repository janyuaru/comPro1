#include<stdio.h>
void main(){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x<y && y<z && x<z){
        printf("%d %d %d", x,y,z);
    } else if (x<z && z<y && x<y) {
        printf("%d %d %d", x,z,y);
    } else if (y<x && x<z && y<z) {
        printf("%d %d %d", y,x,z);
    } else if (y<z && z<x && y<x) {
        printf("%d %d %d", y,z,x);
    } else if (z<x && x<y && z<y) {
        printf("%d %d %d", z,x,y);
    } else if (z<y && y<x && z<x) {
        printf("%d %d %d", z,y,x);
    } else if (x==y) {
        if (y<z){
            printf("%d %d %d", x,y,z);
        } else if (y>z) {
            printf("%d %d %d", z,x,y);
        }
    } else if (x==z) {
        if (z<y) {
           printf("%d %d %d", z,x,y);
        }
        else if (z>y) {
           printf("%d %d %d", x,y,z);
        }

    } else if (y==z) {
        if (x<z) {
            printf("%d %d %d", x,y,z);
        } else if (x>z) {
            printf("%d %d %d", z,x,y);
        }
    }
}
