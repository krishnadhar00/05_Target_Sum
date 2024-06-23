// Find the second largest element present inside the array.
// It is the another way to do this question using max and second_max. 
// Only difference is that in previous case there is three traversal and T.C is O(3n) and in this case T.C is O(2n)
// It works on both duplicate as well as unique.
#include<iostream>
using namespace std;
int secondLargestElement(int arr[], int size)
{
    int max = INT16_MIN;
    int second_max = INT16_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]>second_max && arr[i]!=max)
        {
            second_max = arr[i];
        }
    }
    return second_max;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int element = secondLargestElement(arr,size);
    cout<<element<<endl;
}