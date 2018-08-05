
#include<stdio.h>

void swap(int *a, int *b){
//	++swaps;
	if(*a== *b)return;
	*a = *a^*b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
 

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
       
        int pin = partition(arr, low, high);
 
        quickSort(arr, low, pin - 1);
        quickSort(arr, pin + 1, high);
    }
}
 
/* Function to print an array */
void printArray(int s[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", s[i]);
    printf("\n");
}
 

int main()
{
    int s[] = {1,3,4,2,7,6};
    int n = sizeof(s)/sizeof(s[0]);
    quickSort(s, 0, n-1);
    printf("Sorted array: \n");
    printArray(s, n);
    return 0;
}
