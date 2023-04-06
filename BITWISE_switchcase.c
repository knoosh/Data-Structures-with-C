#include <stdio.h>

int main()
{
int num1,num2,ch,res;

printf("Number 1:");
scanf("%d",&num1);
printf("\nNumber 2:");
scanf("%d",&num2);
printf(" 1)AND \n 2)OR \n 3)XOR\n");
scanf("%d",&ch);

switch(ch) //switch case initialized
{
case 1:    //case 1
{
res=num1&num2;   //AND operation
printf("%d",res);
break;
}
case 2:
{
res=num1||num2;  //OR operation
printf("%d",res);
break;
}
case 3:
{
res=num1^num2;   //XOR operation
printf("%d",res);
break;
}
}
}