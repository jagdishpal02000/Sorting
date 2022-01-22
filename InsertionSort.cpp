#include<iostream>
using namespace std;


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
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
            swap(arr[i+1],arr[i]);
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
    

}
