// Find the second largest element present inside the array.
#include<iostream>
using namespace std;
int secondLargestElement(int arr[], int size)
{
    int maxIndex = -1;
    int  max = INT16_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
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
    // assuming there is unique element present inside the array.
    // arr[element]=-1; 
    // if(there is duplicate element is also present inside that array then use below operation:)
    int duplicateElement = arr[element];
    for(int i=0;i<size;i++)
    {
        if(arr[i]==duplicateElement)
        {
            arr[i]=-1;
        }
    }
    int secondElement = secondLargestElement(arr,size);
    cout<<arr[secondElement]<<endl;
}