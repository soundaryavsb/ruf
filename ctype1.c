#include <stdio.h>
#include <ctype.h>
int main ()
{
  char str[20];
  scanf("%s",str);
  int count=0,a=strlen(str);
  printf("%d\n",a);
  for(int i;i<8;i++)
  {
  if (isdigit(str[i]))
  {
    count++;
  }
}
printf("%d\n",count);
if(a==count)
{
	printf("yes");
}
else
{
	printf("no");
}
  return 0;
}
