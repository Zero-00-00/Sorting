#include <stdio.h>

void selectionsort(int arr[], int n)
{
	int key;
	for (int i=0; i<n-1; i++)
	{
		key=i;
		for(int j=i+1; j<n; j++)
		{
			if (arr[key]>arr[j])
			{
				key=j;
			}
		}
		if (i!=key)
		{
			int temp=arr[i];
			arr[i]=arr[key];
			arr[key]=temp;
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
	selectionsort(arr, n);
	//printing
	printf("The Sorted Array: \n");
	for (int i=0; i<n; i++)
	{
		printf("%d\n", arr[i]);
	}
}
