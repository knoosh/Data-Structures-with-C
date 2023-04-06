#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("enter first number: ");
	scanf("%d", &a);
	printf("enter second number: ");
	scanf("%d", &b);
	
	int and_op;
	and_op = a & b;
	printf("Result  is %d", and_op);
	return 0;
}
