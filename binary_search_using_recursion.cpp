#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int key)
{
    if(s>e)
    return false;

    int mid=s+(e-s)/2;

    if(arr[mid]==key)
    return mid;

    if(arr[mid]<key)
    {
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,mid-1,s,key);
    }
}
int main()
{
    int arr[7]={11,23,45,67,89,99};
    int key=67;
    int s=0;
    int e=7-1;
    bool ans=binarySearch(arr,0,6,67);
    if(ans)
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"not present"<<endl;


    }
    return 0;

}