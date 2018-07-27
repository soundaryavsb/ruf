#include <stdio.h>

int main(void) {
	int decimal,binary,reverse,i,count=0,j,a[10],array[20];
	scanf("%d",&decimal);
	for(i=0;decimal>=1;i++)
	{
		reverse=decimal%2;
	/*	for(j=count;count>0;j--)
		{
			a[j]=reverse;
			printf("%d",a[j]);
		}
                        for(j=count;count>0;j--)
		{
			//a[i]=reverse;
			printf("%d",a[j]);
		}   */
		count++;
		decimal=decimal/2;
	//	  printf("%d",reverse);
	array[i]=reverse;
	
	}
	for(j=0;j>count;j++)
	{
		printf("%d",array[j]);
	}

	return 0;
}
