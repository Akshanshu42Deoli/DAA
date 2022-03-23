// binary search program
#include<iostream>
#define MAX 100 
using namespace std;
int main()
{
    int t ;
    cin >> t;
    while (t--)
    {
    int n;
    cin >> n;
    int arr [MAX];
    for (int i =0; i< n;i++)
    {
        cin >> arr[i];
    }
    int key ;
    cin >> key ;
    int start = 0 , end = n-1 , mid , c= 0 ;
    while (start <= end)
    {
        mid = start + (end - start ) /2;
        c++;
        if (arr[mid]==key)
        {
            break ;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else 
        {
            start = mid+1; 
        }

    }
    if (start <= end)
    {
        cout << "Present "<<c<<endl;
    }
    else 
    {
        cout << "Not Present "<<c<<endl;
    }
    }
    return 0;
}