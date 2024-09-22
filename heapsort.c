#include <stdio.h>

void heapify(int arr[], int n, int i)
{
	int largest = i;
	int left = 2*i+1;
	int right = 2*i+2;
	
	if (left<n && arr[left]>arr[largest])
	largest=left;
	else if (right<n && arr[right]>arr[largest])
	largest=right;
	
	if (i!=largest)
	{
		int temp=arr[largest];
		arr[largest]=arr[i];
		arr[i]=temp;
		
		heapify(arr, n, largest);
	}
}
void heapsort(int arr[], int n)
{
	for(int i=n/2-1; i>=0; i--)
	heapify(arr, n, i);
	
	for(int i=n-1; i>0; i--)
	{
		int temp = arr[0];
        	arr[0] = arr[i];
        	arr[i] = temp;
        	
        	heapify(arr, i, 0);
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
	heapsort(arr, n);
	//printing
	printf("The Sorted Array: \n");
	for (int i=0; i<n; i++)
	{
		printf("%d\n", arr[i]);
	}
}
