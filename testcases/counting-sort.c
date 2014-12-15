
#include <stdio.h>
#include <string.h>
#define RANGE 10000

void countSort(char *str)
{


	int count[RANGE + 1], i;
	memset(count, 0, sizeof(count));

	for(i = 0; str[i]; ++i)
		++count[str[i]];

	for (i = 1; i <= RANGE; ++i)
		count[i] += count[i-1];

	for (i = 0; str[i]; ++i)
	{
		output[count[str[i]]-1] = str[i];
		--count[str[i]];
	}

	for (i = 0; str[i]; ++i)
		str[i] = output[i];
}

int main()
{
	int i, arr[10000]
	for(i=0;i<10000;i++){
		arr[i] = rand()%1000000;
	}

	countSort(str);

	printf("Sorted string is %s\n", str);
	return 0;
}
