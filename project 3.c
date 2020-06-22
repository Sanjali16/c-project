#include<stdio.h>
int main()
{ 
//a=3(000101),b=6(0001001)
unsigned char a=3,b=6;
//the result is000001
printf("a=%d,b=%d\n",a,b);
printf("a&b=%d\n",a&b);
//the result is 0001101
printf("a|b=%d\n",a|b);
//the result is 0001100
printf("a^b=%d\n",a=~a);
return 0;
}
