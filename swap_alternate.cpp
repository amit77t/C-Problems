#include<iostream>
using namespace std;
 void print(int arr[],int size)
 {
    for(int i=0; i<size; i++)
    {
        cout<< arr[i] <<" ";

    }
    cout<<endl;
 }
 void swapalternate(int arr[], int size )
 {
    for(int i=0; i<size; i=i+2)
    {
        if(i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
 }
 int main()
 {
    int even[8]={12,17,19,40,34,56,67,13};
    int odd[5]={18,11,16,27,29};
    swapalternate(even,8);
    print(even,8);
    swapalternate(odd,5);
    print(odd,5);
    return 0;
 }