#include <stdio.h>
#include <stdlib.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n; i++)      
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
 
void printArray(int arr[])
{
    int i;
    for (i=0; i < 100; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
int main(int argc, char **argv)
{
    int n = atoi(argv[1]), i, arr[n];

    for(i=0;i<n;i++){
    	arr[i] = rand()%1000000;
    }

    bubbleSort(arr, n);
    return 0;
}
