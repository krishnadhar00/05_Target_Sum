// Find the unique number in a given array where all the element are being repeated twice with one value being unique.
#include<iostream>
using namespace std;
int main()
{
    int arr[7];
    for(int i=0;i<7;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=-1;
                arr[j]=-1;
            }
        }
    }
    for(int i=0;i<7;i++)
    {
        if(arr[i]>0)
        {
            cout<<arr[i]<<endl;
            break;
        }
    }
}