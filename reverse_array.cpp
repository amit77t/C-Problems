#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<<endl;
}
void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int  main()
{ 
    int arr[]={2,4,56,78,90};
    int brr[]={-2,4,90,-5,6,7};
    reverse(arr,5);
    reverse(brr,6);
    print(arr,5);

    print(brr,6);

}