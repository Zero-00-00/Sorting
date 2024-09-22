#include <stdio.h>

void bubblesort(int arr[], int n)
{
	for (int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		// Print array after each pass
        	printf("Pass %d: ", i+1);
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
	bubblesort(arr, n);
	//printing
	printf("The Sorted Array: \n");
	for (int i=0; i<n; i++)
	{
		printf("%d\n", arr[i]);
	}
}
