#include<stdio.h>

struct rectangle{
    int lenth;
    int breath;
};
int main(){

    struct rectangle r1;

    printf("lenth:");
    scanf("%d",&r1.lenth);

    printf("breath:");
    scanf("%d",&r1.breath);

    int  area=r1.lenth*r1.breath;
    int perimeter=2*(r1.lenth+r1.breath);

    printf("area=%d\n",area);
   printf("perimater=%d",perimeter);

    return 0;
}