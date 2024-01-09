#include<iostream>
using namespace std;
void bubble(int arr[] ,int size)
{ for(int i=0; i<size-1;i++)
{
    for(int j=0; j<size-i-1; j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
}

}
void print(int arr[],int n)
{
    for(int i=0; i<n ;i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< endl;

}
int main()
{
    int n,arr[20];
    cout<<"enter the elements you wants" << endl;
    cin>> n ;
    for(int i=0; i<n; i++)
    { 
        cout<<"enter the array [" << i<< " ] elements:" << endl;
        cin>>arr[i];

    }
    cout<<"After bubble sort elements are:"<<endl;
    bubble(arr,n);
    print(arr,n);
    return 0;
}