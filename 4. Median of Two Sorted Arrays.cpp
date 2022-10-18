#include<conio.h>
#include<iostream>

using namespace std;

int main()
{                //i       k
    int arr1[]={1,2},arr2[]={3,4},m=2,n=2 ,i,k;
    int arr3[m+n],f=0;
    float result;
    for(i=0,k=0;i<m&&k<n;f++)  //arr3[3,4,5]
    {
        if(arr1[i]<arr2[k])
        {
            arr3[f]=arr1[i];
            i++;
        }
        else
        {
            arr3[f]=arr2[k];
            k++;
        }
    }
    while(i<m)
    {
        arr3[f]=arr1[i];
        i++;
        f++;
    }
    while(k<n)
    {
        arr3[f]=arr2 [k];
        k++;
        f++;
    }
    i=f/2;
    if(f%2==0)
    {
        result=(arr3[i]+arr3[i-1])/2.0;

    }
    else
    {
        result=arr3[i];
    }
    cout<<result;
}
