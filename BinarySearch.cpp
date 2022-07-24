#include<bits/stdc++.h>
using namespace std;
int binarySearch(int *arr,int value,int low,int high)
{

    if(low<=high)
    {
        int mid =(low+high)/2;
        if(value==arr[mid])
        {
            return mid;
        }
        else if(value>arr[mid])
        {
            binarySearch(arr,value,mid+1,high);
        }
        else
        {
            binarySearch(arr,value,low,mid-1);
        }

    }
    else
    {

        return -1;
    }




}

int main()
{
    int n;
    cout<<"Enter the size of the Array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    char c;
    cout<<"Enter (Y) for search : ";
    cin>>c;
    while(toupper(c)=='Y')
    {
        int value;
        cout<<"Enter the value you want to search : ";
        cin>>value;

        int index = binarySearch(arr,value,0,n-1);

        if(index != -1)
        {
            cout<<"Found in index number : "<<index<<endl<<"Position number : "<<index+1<<endl;
        }
        else
        {
            cout<<"Value is not found"<<endl;

        }
        cout<<"Enter (Y) for search again : ";
        cin>>c;

    }


    return 0;
}
