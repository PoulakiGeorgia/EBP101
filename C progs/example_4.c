#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	char seq [1000];
	int i=0;

	while( scanf("%s", seq) ==1 )
	{
		i++;
	}
	printf("The number of sequences is %d\n", i);
}

