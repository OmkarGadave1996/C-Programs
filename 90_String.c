/*String*/
#include<stdio.h>
void main()
{
	char s1[] = "Sachin";
	char s2[] = {'D','i','s','h','a'};
	printf("%s\n",s1);
	printf("%c\n",s1[0]);
	printf("%s\n",s2);
	printf("%c\n",s2[0]);
	s1[0] = 'J';
	printf("%s\n",s1);
	char carName[] = "Volvo";
	int i;

	for (i = 0; i < 5; ++i) {
  		printf("%c\n", carName[i]);
	}
}
