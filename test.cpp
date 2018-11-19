#include<stdio.h>

void printf();
void scanf();

int main()
{
	//printf();
	scanf();
	return 0;
}

//輸出 
void printf()
{
	int num1=10;
	int num2=10;
	printf("%d\n",num1+num2);
	printf("hello");
	
}
//輸入 
void scanf()
{
	int num1=0;
	int num2=0;
	
	char str[20];
	
	//scanf("%d %d",&num1,&num2);
	scanf("%s",&str);
	
	printf("%*s",10,str);//*字記號指定欄位寬度 10為指定值，也可直接在*字記號直接寫 
	
	
}


