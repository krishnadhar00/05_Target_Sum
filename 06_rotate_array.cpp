// Rotate the given array 'a' by k steps, where k is non-negative.
// Note : K can be greater than n as well where n is the size of array 'a'.
// In this case we made an extra array to store the rotated value.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    k=k%n;
    int j=0;
    for(int i=n-k;i<n;i++)
    {
        arr1[j++]=arr[i];
    }
    for(int i=0;i<=k;i++)
    {
        arr1[j++]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
}