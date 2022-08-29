//implementation of bubble sort algorithm

/* Bubble sort algorithm is used to sort a data structure. It takes the most time to sort but takes less memory. 
It is effective for sorting an data structure less than 1e4 members

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