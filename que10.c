/*10. WAP to take date as an input in below given format and convert the date format and 
display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022 */


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