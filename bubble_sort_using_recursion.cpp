#include<iostream>
using namespace std;
void bubbleSort(int *arr,int n)
{

    if(n==0 || n==1)
    return ;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);

}
int main()
{
    int arr[6]={2,5,7,8,1,10};
    bubbleSort(arr,6);
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}