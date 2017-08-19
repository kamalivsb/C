#include<stdio.h>
int main()
{
int n,reversed integer=0,remainder,originalinteger;
printf("enter an integer");
scanf("%d",&n);
originalinteger=n;
while(n!=0)
{
remainder=n%10;
reversedinteger=reversed integer*10*remainder;
n/=10;
}
if(original integer==reversed integer)
printf("%d is a palindrome",original integer);
else
printf("%d is not a palindrome",original integer);
return 0;
}
