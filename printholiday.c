#include<stdio.h>
int main()
{
	char s[32]="Sunday",s1[32]="Saturday",day[32];
	gets(day);
	if(day==s || day==s1)
	printf("Holiday");
	return 0;
}
