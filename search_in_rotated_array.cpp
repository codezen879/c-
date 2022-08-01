#include<iostream>
using namespace std;
int search_rotated(int arr[],int n)
{
    int start=0,end=n-1;
    int mid=(start+end)/2;
    if(arr[start]<arr[end])
    return end;
    while(start<=end)
    {
        if(arr[mid+1]<arr[mid])   //IN A SORTED ROTATED ARRAY THE GREATEST ELEMENT HAVE FOLOWING PROPERTY
        {
            return mid;
        }
       else if(arr[mid-1]>arr[mid])
        {
            return mid-1;
        }
         else if(arr[mid]>arr[start])
            {
                start =mid+1;
                 mid=(start+end)/2; 
                 
            }
            else if(arr[mid]<arr[end])  {
            end=mid-1;
            mid=(start+end)/2;
            }
      
    }
return end;
}
int main()
{
    int i,n;                     
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   i= search_rotated(arr,n);
   cout<<"\n THE INDEX IS:"<<i;
   return 0;
}
