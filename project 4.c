#include<stdio.h>
#include "header.h"
int main()
{
	int a,b;
	printf("enter the value a and b");
	scanf(" %d%d",&a,&b);
	add(a,b);
	sub(a,b);
	multiply(a,b);
	modulus(a,b);
	devide(a,b);
	printf("THANKS");
	return 0;	
}
