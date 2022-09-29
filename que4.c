//4.WAP to find the area of the circle. Take radius of circle from user as input and print the 
//result in below given format.


#include<stdio.h>

int main() {

    int R;
    printf("enter the radius R:");

    scanf("%d", &R);

    float Area= 3.14*R*R;
    printf("Area of circle is A: %f", Area);


    return 0;
}