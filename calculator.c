#include<stdio.h>
int main()
{
    int choice;
    printf("Calculation list:\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    printf("Enter your choice(1 to 5):");
    scanf("%d",&choice);

    if(choice == 5){
         printf("Worng choice");
         return 0;
    }


    printf("Enter to value(a & b):");
    float a,b;
    scanf("%f %f",&a,&b);


    if(choice == 1){
        printf("Result is : %.3f",a+b);
    }else if(choice == 2){
        printf("Result is: %.3f",a-b);
    }else if(choice == 3){
        printf("Result is: %.3f",a*b);
    }else if(choice == 4){
        if(b>0){
            printf("Result is: %.3f",a/b);
        }else{
            printf("Invalid input!");
        }
    }else if(choice == 5){
        printf("Thank You..........");
    }


    return 0;

}
