#include<stdio.h>
#include<string.h>
int main()
{
char name[100];
int i,y;
int flag = 0;

printf("enter the name or string:");
scanf("%s",name);

y = strlen(name);

for(i=0;i<y;i++)
{
if(name[i] != name[y-i-1])
{
flag = 1;
break;
}
}
 if(flag)
 {
 printf("%s is not a palindrome",name);
 }
 else
 {
 printf("%s is a palindrome",name);
 }
return 0;
}
