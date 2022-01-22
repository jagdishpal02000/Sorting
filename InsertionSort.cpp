/*
Implementation of Insertion Sort Algo with cpp.
Worst Case Time Complexity : O(N*N)
Average Case Time Complexity : O(N*N)
Best Case Time Complexity : O(N)
Space Complexity : O(1) (No other space is needed).



Best and worst Case for this algo : "When the Input are already 
sorted then this algo will takes only O(N) and for other cases it'll take O(N*N)"


*/


#include<iostream>
using namespace std;

int no_of_swaps=0;

void Swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    no_of_swaps++;
   
}



void InsertionSort(int arr[],int N)
{
    int key,i;
    for(int j=1;j<N;j++)
    {
        key=arr[j];
        i=j-1;
        while(i>=0 && arr[i]>key)
        {
            Swap(arr+i+1,arr+i);
            --i;
        }

    
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

    InsertionSort(arr,N);
    for(int i=0;i<N;i++)
    cout<<arr[i]<<" ";
    cout<<"\n No. of swaps : "<<no_of_swaps;
}
