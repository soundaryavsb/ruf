#include <stdio.h>

int main(void) {
	char ch[10];
	scanf("%s",ch);
	printf("%s",ch);
	if(ch=='saturday'||ch=='sunday')
	{
		printf("holiday");
	}
	else if(ch=='monday'||ch=='tuesday'||ch=='wednesday'||ch=='thursday'||ch=='friday')
	{
		printf("working day");
	}
	else
	{
		printf("your input is default");
	}
	return 0;
}
