#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
	int mid = l + (r - l)/2;
	 if (arr[mid] == x)  return mid;

	 if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);

	return binarySearch(arr, mid+1, r, x);
   }
      return -1;
}

void main()
{
   int arr[20];
   int n;
   int x,i;
   int result;
   printf("Enter the array size: ");
   scanf("%d",&n);
   printf("Enter the elements of the array: ");
   for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
   printf("Enter element to be searched: ");
    scanf("%d",&x);
   result = binarySearch(arr, 0, n-1, x);
   (result == -1)? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
}
