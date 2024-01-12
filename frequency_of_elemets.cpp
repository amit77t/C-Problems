#include<iostream>
using namespace std;
void frequency(int arr[],int n)
{

    int visited[n];
    for(int i=0; i<n; i++)
    {
        if(visited[i]!=1)
        {
            int count=1;
            for(int j=i+1; j<n ;j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    visited[j]=1;
                }
            }

            cout<<arr[i]<< " occurs at  "<<count<< " times "<<endl;
        }
    }

}

int main()
{
    int arr[10]={10,30,10,20,10,20,20,20,10,30};

    frequency(arr,10);
    return 0;


}

