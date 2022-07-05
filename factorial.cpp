//factorial using recurssion//
#include<stdio.h>
#include<stdlib.h>
int factorial(int);  //declearation//
int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d",num ,factorial(num)); //calling//

}
int factorial(int number)  //creating function//
{
    if(number==1||number==0)
    {
        return 1;
    }
    else
    {
        return(number*(factorial(number-1)));
    }
}
//can also be done using iterative method....cse prac folder//
