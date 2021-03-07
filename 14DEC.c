#include<stdio.h>

int main()
{
	int a;  // variable declaration
	
	int b;
	printf("Enter the value of A:");
	scanf("%d",&a);  //&a adress of a-------Variable initialisation
	printf("Value of B:");
	scanf("%d",&b);

	//scanf("%d %d",&a,&b);
	
	printf("A/B->%d",(a/b));
	return 0;
}
