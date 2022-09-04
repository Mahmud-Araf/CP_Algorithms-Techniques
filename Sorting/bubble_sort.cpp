//implementation of bubble sort algorithm

/* Bubble sort algorithm is used to sort a data structure.

Time Complexity: O(n^2)
n=total number of elements of array
*/

void bubble_sort(int n,int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}