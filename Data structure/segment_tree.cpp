//implementation of segment tree 

/* Segment tree is a pre-calculation data structure to complete queries in between ranges of
an array even if there occurs update in the array and query function is not inversible

n=total number of elements of array
*/

#include<bits/stdc++.h>
using namespace std;

// tree[] should have size 4 times of arr[]

struct // used a structure to compress the init, update and query function under segment tree
{
   //initializing segment tree in O(n) times
   void init(int node,int b,int e,int arr[],int tree[]) 
   {
      if(b==e)
      {
         tree[node]=arr[b];
         return;
      }
      int left=node<<1;
      int right=(node<<1)+1;
      int mid=(b+e)>>1;
      init(left,b,mid,arr,tree);
      init(right,mid+1,e,arr,tree);
      tree[node]=tree[left]+tree[right]; //function will be here
   }

   //update function to update a single node in O(log(n)) times
   void update(int node,int b,int e,int i,int newvalue,int tree[])
   {
      if(i>e||i<b)
      {
         return;
      }
      if(b>=i && e<=i)
      {
         tree[node]=newvalue;
      }
      int left=node<<1;
      int right=(node<<1)+1;
      int mid=(b+e)>>1;
      update(left,b,mid,i,newvalue,tree);
      update(right,mid+1,e,i,newvalue,tree);
      tree[node]=tree[left]+tree[right]; //function will be here 
   }

   //query function
   int query(int node,int b,int e,int l,int r,int tree[])
   {
      if(l>e||r<b)
      {
        return -1000000000;//changeable according to function
      }
      if(b>=l && e<=r)
      {
         return tree[node];
      }
      int left=node<<1;
      int right=(node<<1)+1;
      int mid=(b+e)>>1;
      int p1=query(left,b,mid,l,r,tree);
      int p2=query(right,mid+1,e,l,r,tree);
      return p1+p2;   //function will be here
   }
}segment_tree;