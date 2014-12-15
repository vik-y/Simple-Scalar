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

int main(){

	int arr[1000000], i, j;




	for(i=0;i<1000000;i++){
		arr[i] = rand()%1000000;
	}
	for(i=0;i<100;i++){
		printf("%d\n", arr[i]);
	}
	quickSort(arr, 0, 1000000-1);
	printf("\n--------------- Sorted Starts here -----------\n");
	for(i=0;i<100;i++){
		printf("%d\n", arr[i]);
	}

}
