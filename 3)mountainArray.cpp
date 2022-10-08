#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    int arr[]={34,56,78,98,100,120,140,200,122,112},start=0,end=10,mid=(start+end)/2,ans;
    while(start<end)
    {
        if(arr[mid]>arr[mid+1])
        {
            if(arr[mid]>=arr[mid-1])
            {
                ans=mid;
                break;
            }
            end=mid;
        }
        else
        {
            start=mid;
        }
        mid=(start+end)/2;
    }
    cout<<ans;
    getch();
    return 0;
}
