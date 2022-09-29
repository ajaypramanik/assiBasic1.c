#include<stdio.h>

int main() {

    int DD,MM,YYYY;
    
    printf("\"DD/MM/YYYY\"");

    printf("enter the Day-DD:");
    scanf("%d",&DD);
    printf("enter the Month-MM:");
    scanf("%d" , &MM);
    printf("enter the Year-YYYY:");
     scanf("%d",&YYYY);

     printf("%d%d%d" ,DD,MM,YYYY);
      printf("\n");
    return 0;
}