#include<stdio.h>

int main()
{
	/*
	++a----increment first then assignment
	a++---assignment first then increment
	
	
	int a=0;
	int b= a++;
	printf("a=%d\nb=%d\n",a,b);
	*/
	
	int A=0;
	int B=++A;
	printf("A=%d\nB=%d\n",A,B);
	
	/*int a=0;
	int b= a++ + a++;
	printf("a=%d\nb=%d\n",a,b);
	*/
	
	/*
	int a=0;
	int b= (++a)+a++;//in case of pre opertaion we will not be in hurry,we will first complete the execution of all the expn in right then assign values
	                  
	printf("a=%d\nb=%d\n",a,b);
   	*/
   	
   	int a=0;
	int b=(++a)+(++a);
	printf("a=%d\nb=%d\n",a,b);
}
