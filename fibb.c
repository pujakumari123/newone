#include<stdio.h>
#include<conio.h>
int main()
{
int n1=0,n2=1,n3,i,len;

printf("enter the length of fibbonacci:");
scanf("%d",&len);
printf("%d %d",n1,n2);
printf("\n");
for(i=2;i<=len;i++)
{

		n3=n1+n2;
     printf("%d", n3);
	n1=n2;
	n2=n3;
	

	printf("\n");
}

	getch();
}
