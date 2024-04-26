#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int value=6;

    int arr[]= {5,2,10,6,7,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    bool found =false;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==value)
        {
            cout<<"value found:"<<arr[i];
            found=true;
            break;
        }
        if (!found)
        {
            cout << "Value not found\n";
        }
    }
}
