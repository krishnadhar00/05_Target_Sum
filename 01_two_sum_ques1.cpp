// Find the total number of pairs in the array whoose sum is equal to the given value x.
#include<iostream>
using namespace std;
int main()
{
    int arr[5],target, count=0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}