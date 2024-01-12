#include<iostream>
using namespace std;
 void insertion_sort(int arr[],int size)
 { 
    for(int i=1; i<size-1 ; i++)
    {  
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;

    }

 }

void print_arr(int arr[],int size)
{
    for(int i=0; i<size; i++)
    {
      cout<<arr[i]<<" ";
    }
}

 int main()
 { 

    int arr[10]={23,45,67,12,89,6,38,21,17,56};
    cout<<" Before Sorting "<<endl;
    
    for(int i=0; i<10; i++)
    {
      cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<" After Sorting  "<<endl;


    insertion_sort(arr,10);
    print_arr(arr,10);
    return 0;



    
 }