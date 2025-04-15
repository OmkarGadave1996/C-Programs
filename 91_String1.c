/*String example*/
#include<stdio.h>
void main()
{
	char s[5] = {'D','i','s'};
	int i;
	for (i = 0; i < 5; ++i) {
  		if(s[i]=='\0')
		{
			printf("Hello");
		}
		else
		{
			printf("%c\t",s[i]);			
		}	
	}
}
