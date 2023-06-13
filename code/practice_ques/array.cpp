#include<bits/stdc++.h>
using namespace std;

// Size of array with Fumction
void printarray(int a[], int size)
{
    
    for(int i=0; i<size ; i++)
    {
        cout<< a[i]<<" ";
    }

}

// array with function using pointer
int getSize(int a[],int size)  //a[] is passed as pointer
{
    return (sizeof(*a)*size)/sizeof(int);
}

int main()
{
    
    int arr[5], thi[4];

    printarray(arr,7);
    int arrsize=getSize(arr,7);
    cout<<endl<<"size of array: "<<arrsize<<endl;
    
    printarray(thi,14);
    int thisize=getSize(thi,14);
    cout<<endl<<"size of array: "<<thisize<<endl;
    
    cout<<"printing done";
    
    return 0;
}