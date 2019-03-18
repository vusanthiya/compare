#include<stdio.h>
#include<copnio.h>
void main()
{
char str1[50],str2[50];
int i;
printf("Enter the string 1:");
scanf("%s",str1);
printf("Enter the string 2:");
scanf("%s",str2);
for(i=0;str1[i]==str2[i]&&str1[i]!=='\0';i++)
if(str1[i]<str2[i])
{
printf("less");
}
elseif(str1[i]>str2[i])
{
printf("greater");
}
else
{
printf(str2);
}
getch();
}
