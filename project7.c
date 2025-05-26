#include<stdio.h>

int calculator(int choice,int num1,int num2)
{
    int sum,subtract,multiply,divide,module;

        switch(choice)
        {
            case 1:
                sum=num1+num2;
                printf("Addition of %d and %d is: %d ",num1,num2,sum);
                break;
            case 2:
                 subtract=num1-num2;
                 printf("Subtraction of %d and %d is: %d",num1,num2,subtract);
                 break;
            case 3:
                  multiply=num1*num2;
                  printf("Mutiplication of %d and %d is: %d",num1,num2,multiply);
                  break;
            case 4:
                  divide=num1/num2;
                  printf("Division of %d and %d is: %d",num1,num2,divide);
                  break;
            case 5:
                  module=num1%num2;
                  printf("Module of %d and %d is: %d",num1,num2,module);
                  break;
            

        }
    }             

 
int main()
{
    int choice,num1,num2;
    do
    {
    printf("\n Press 1 for +");
    printf("\n Press 2 for -");
    printf("\n Press 3 for *");
    printf("\n Press 4 for /");
    printf("\n Press 5 for %%");
    printf("\n Press 0 for the exit");
    printf("\n Enter your choice:");
    scanf("%d",&choice);
    if(choice==0)
    {
        printf("You are sucessfully exited");
        break;
    }
    printf("\n Enter your first number:");
    scanf("%d",&num1);
    printf("\n Enter your second number:");
    scanf("%d",&num2);
     calculator(choice,num1,num2);
     printf("\n");

    }while(choice!=0);
    

   
    return 0;
}    

