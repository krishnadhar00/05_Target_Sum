// Count the number of triplets whoose sum is equal to the given value x.
#include<iostream>
using namespace std;
int main()
{
    int arr[6],target,count=0;
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    cin>>target; 
    for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            for(int k=j+1;k<6;k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                {
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}