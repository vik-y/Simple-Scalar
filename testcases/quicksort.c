#include <stdio.h>
#include <stdlib.h>

void swap( int* a, int* b )
{
	int t = *a;
	*a = *b;
	*b = t;
}

int partition (int arr[], int l, int h)
{
	int x = arr[h], i = (l - 1), j;

	for (j = l; j <= h- 1; j++)
	{
		if (arr[j] <= x)
		{
			i++;
			swap (&arr[i], &arr[j]);
		}
	}
	swap (&arr[i + 1], &arr[h]);
	return (i + 1);
}

void quickSort(int A[], int l, int h)
{
	if (l < h)
	{
		int p = partition(A, l, h);
		quickSort(A, l, p - 1);
		quickSort(A, p + 1, h);
	}
}

int main(int argc, char**argv){
	int RANGE = atoi(argv[1]);
	int arr[RANGE], i, j;


	for(i=0;i<RANGE;i++){
		arr[i] = rand()%1000000;
	}
	
	quickSort(arr, 0, RANGE-1);
	

}
