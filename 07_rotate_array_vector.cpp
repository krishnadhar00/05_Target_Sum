// Rotate the given array 'a' by k steps, where k is non-negative.
// Note : K can be greater than n as well where n is the size of array 'a'.
// In this case we don't made a new array we have to perform the operation in the same vector or array.
// We don't need to make a new array to store the value and T.C is also lesser than the previoues value. like approach is good
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v(5);
    int size = v.size();
    for(int i=0;i<size;i++)
    {
        cin>>v[i];
    }
    int k;
    cin>>k;
    k=k%size;
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }
}