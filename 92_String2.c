/*String While*/
#include<stdio.h>
void main()
{
	char s[5] = {'D','i','s'};
	int i = 0;
	while(s[i]!='\0')
	{
		printf("%c\t",s[i]);
		i++;			
	}
}
