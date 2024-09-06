#include <stdio.h>
void main(){
    int age,marks;

    printf("Enter the NUmber ");
    scanf("%d",&age);
    printf("Enter Your Marks ");
    scanf("%d",&marks);
    switch (age){
        case 18:
        printf("The Value is 20");
        switch (marks)
        {
        case 33:
        printf("Your Marks is 33");
            break;
        default:
            break;
        }
        break;


        case 20:
        printf("The Value is 20");
        switch(marks){
            case 44:
            printf("Your Marks is 44");
            break;
            default:
            break;

        }
        break;
       
    }
}