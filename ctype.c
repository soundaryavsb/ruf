#include <stdio.h>
#include<ctype.h>
int main(void) {
	char c[20];
	scanf("%s",c);
	if(isdigit(c))
	{
		printf("Yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
