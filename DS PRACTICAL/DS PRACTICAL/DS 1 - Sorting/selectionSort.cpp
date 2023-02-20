#include<iostream>
using namespace std;

int main()
{
   int n;
    cout<<"Enter Number of elements want to insert in array:\n";
    cin>>n;  
    int arr[n];
    cout<<"Elements in array:\n";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        cout<<"Sorting array is:\n";
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    cout<<"\nSORTED Array:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}