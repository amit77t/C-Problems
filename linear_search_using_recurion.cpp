#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key)
{  
    if(size==0)
    return false;
    if(arr[0]==key)
    {
        return true;
    }
    else{
        bool remainpart=linearSearch(arr+1,size-1,key);
        return remainpart;

    }
    

}

int main(){
     int arr[8]={1,29,45,67,23,11,56,89};
    int key=23;
    bool ans=linearSearch(arr,8,key);
    if(ans)
    {
        cout<<"present:"<<endl;
    }
    else{
        cout<<"not present:"<<endl;
    }
    return 0;
}
