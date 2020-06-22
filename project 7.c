# include <stdio.h>
# include<conio.h>
int  list();
int totalamount=1000, amount;
 main()
{ 
list();
getch();
}
int list()
{
int ch;
printf("\n1  deposite");
printf("\n2  withdraw");
printf("\n3 transfer");
printf("\n4 checkdetail");
scanf("%d",& ch);
return (ch);
}
void diposite()
{ 
printf (" enter the amount you want to deposite");
scanf("%d",& amount);
totalamount +=amount;
}
