//implementation of sparse table

/* Sparse table is a pre-calculation data structure to complete queries in between ranges of
an array if the query function (gcd,min,max,sum) is not even inversible and there is no update in the array

Time Complexity: O(nlog(n))
n=total number of elements of array
*/

void sparse_table(int n,int k, int v[],int a[][30]) // n=total number of elements of array
{                                                  //  k=floor(log2(n))
  for(int i=0;i<n;i++)                            //   30 will cover upto 1e9 number of elements,for counting more 
   {                                             //    one have to increase the number of columns of array a
      a[i][0]=v[i];
   }

for(int j=1;j<=k;j++)
{
   for(int i=0;i+(1<<j)-1<n;i++)
   {
      a[i][j]=a[i][j-1]+a[i+(1<<(j-1))][j-1]; //function will be here, either max,min,gcd,sum etc
   }
}
}