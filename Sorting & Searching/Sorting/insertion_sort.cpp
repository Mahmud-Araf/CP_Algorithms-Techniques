//implementation of insertion sort algorithm

/* Insertion sort algorithm is used to sort a data structure.

Time Complexity: O(n^2)
n=total number of elements of array
*/

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int n,int arr[])
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        for(;j>=0 && arr[j]>key;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
}