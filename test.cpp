#include<stdio.h>

void printf();
void scanf();

int main()
{
	//printf();
	scanf();
	return 0;
}

//��X 
void printf()
{
	int num1=10;
	int num2=10;
	printf("%d\n",num1+num2);
	printf("hello");
	
}
//��J 
void scanf()
{
	int num1=0;
	int num2=0;
	
	char str[20];
	
	//scanf("%d %d",&num1,&num2);
	scanf("%s",&str);
	
	printf("%*s",10,str);//*�r�O�����w���e�� 10�����w�ȡA�]�i�����b*�r�O�������g 
	
	
}


