#include <stdio.h>

void insertionsort(int arr[], int n)
{
	int key, i, j;
	for (i=1; i<n-1; i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		// Print array after each pass
        	printf("Pass %d: ", i);
        	for (int k = 0; k < n; k++) 
        	{
        	    printf("%d ", arr[k]);
       	}	
        	printf("\n");
	}
}

int main()
{
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int arr[n];
	//creating array
	printf("Enter the elements: \n");
	for (int i=0; i<n; i++)
	{
		scanf("%d", &(arr[i]));
	}
	//sorting
	insertionsort(arr, n);
	//printing
	printf("The Sorted Array: \n");
	for (int i=0; i<n; i++)
	{
		printf("%d\n", arr[i]);
	}
}
