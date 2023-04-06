#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
	int num, n=0,x;
	printf("enter an integer between 0 and 4,294,967,295: ");
	scanf("%d", &num);


	while(num!=0);
	{
		x = num & 1;
		if(x == 1)
			n+=1;
		num = num>>1;
}
	printf("number of 1s in this integer is %d", n);
return 0;

}



