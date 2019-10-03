#include<stdio.h>
#include<string.h>
int main()
{
int i;
int flag=0;
char str[100];
while(gets(str))
{
int len=strlen(str);
for(i=0;i<len;i++)
{
if(str[i]=='"' && flag==0)
{
flag=1;
printf("``");
}
else if(str[i]=='"'&& flag==1)
{
flag=0;
printf("''");
}
else
printf("%c",str[i]);
}
printf("\n");
}
return 0;
}
