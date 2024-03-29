#include <stdio.h>
#include <conio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}



// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
	   if (arr[j] > arr[j+1])
	      swap(&arr[j], &arr[j+1]);
	     // swap(&arr[j], &arr[j+1]);
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
	printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
void main()
{
    int arr[50],n,i;
    clrscr();
    printf("\n Enter the array size:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
	printf("\n Enter elements:%d:",i);
	scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    printf("\n Sorted array: \n");
    printArray(arr, n);
	getch();
}
