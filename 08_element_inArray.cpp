// Given Q queries, check if the given number is present int the array or not.
// Note : value of all the elements in the array is less than 10 to the power 5.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    const int N = 1e5 + 10;
    vector<int>freq(N,0);
    for(int i=0;i<n;i++)
    {
        freq[v[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int query;
        cin>>query;
        cout<<freq[query]<<endl;
    }
}