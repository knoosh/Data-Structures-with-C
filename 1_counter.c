#include <stdio.h>
int main()
{
int num,rem;
int cnt=0;
printf("Enter a number");
scanf("%d",&num);
while (num!=0)
{
rem=num%10;
num=num/10;
if (rem==1)
{
cnt+=1;
}
}
printf("Number of 1's in %d is: %d",num,cnt);
}
