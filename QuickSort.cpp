/*
Implementation of Quick Sort Algo with cpp.
Worst Case Time Complexity : O(N*N)[O(N) for partition and in worst case the recurstion tree can grow in single
direction and can give O(N)].

Best Case Time Complexity : O(N*LOG N)
Space Complexity : O(1) (No other space is needed).



Best and worst Case for this algo : "When the Input are already 
sorted then this algo will takes only O(N*N) "

*/

#include<iostream>
using namespace std;


int Partition(int arr[],int p,int r)
{
    int pivot=arr[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++) 
    {
        if(arr[j]<=pivot)
        {
            ++i;
            swap(arr[i],arr[j]);
        }
    }   
    swap(arr[i+1],arr[r]);
    return i+1;
}

void QuickSort(int arr[],int p,int r)
{
if(p<r)
{
    int q=Partition(arr,p,r);
    QuickSort(arr,p,q-1);
    QuickSort(arr,q+1,r);
}
}

int main()
{
    int arr[100],N;
    cout<<"Number of Elements : ";
    cin>>N;
    cout<<"Enter Elements : ";
    for(int i=0;i<N;i++)
    cin>>arr[i];

    QuickSort(arr,0,N-1);

    for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";
}
