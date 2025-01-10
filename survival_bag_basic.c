#include<stdio.h>
void main(){
    int x, y, z;
    scanf("%d %d %d", &x,&y,&z);
    int water = x/3;
    int bread = y/4;
    int egg = z/2;
    //printf("%d %d %d \n", water, bread, egg);
    int count;
    if(water<bread && water<egg){
        count = water;
    } else if (bread<water && bread<egg) {
        count = bread;
    } else if (egg<water && egg<bread) {
        count = egg;
    } else if (water==bread && water<egg) {
        count = water;
    } else if (water==egg && water<bread) {
        count = water;
    } else if (egg==bread && egg<water) {
        count = egg;
    }
    printf("%d ", count);
    printf("%d ", x-(count*3));
    printf("%d ", y-(count*4));
    printf("%d", z-(count*2));
}
