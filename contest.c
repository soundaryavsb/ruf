#include <stdio.h>

int main(void) {
	int i,count=0,e,count1=0,f,count2=0,g,count3=0,h;
	char a[20],b[20],c[20],d[20];
            scanf("%s%s%s%s",a,b,c,d);
            for(i=0;a[i]!='\0';i++)
            {
                         e=a[i]-97;
            	count=count+e;
            }
   
             for(i=0;b[i]!='\0';i++)
            {
                       	f=b[i]-97;
                      	count1=count1+f;
            }
             for(i=0;c[i]!='\0';i++)
            {
                        	g=c[i]-97;
                        	count2=count2+g;
                        	}
	 for(i=0;d[i]!='\0';i++)
            {
            	h=d[i]-97;
            	count3=count3+h;
            }
	if(count<count1&&count<count2&&count<count3)
	{
		printf("%d",count);
	}
	else if(count1<count2&&count1<count3)
	{
		printf("%d",count1);
	}
	else if(count2<count3)
	{
		printf("%d",count2);
	}
	else if(count3<count2)
	{
		printf("%d",count3);
	}
	else
	{
		printf("all are equal value");
	}
	return 0;
}
