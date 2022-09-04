//implementation of selection sort algorithm

/* Selection sort algorithm is used to sort a data structure.

Time Complexity: O(n^2)
n=total number of elements of array
*/

void bubble_sort(int n,int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}