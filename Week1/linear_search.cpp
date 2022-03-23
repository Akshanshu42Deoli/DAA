// linear search program 
#include<iostream>
#define MAX 100
using namespace std;
int main()
{
    int t ;
    cin >> t;
    while (t--){
    int n;
    cin >> n;
    int arr[MAX];
    for (int i = 0 ;i < n; i++)
    {
        cin >> arr [i];
    }
    int key ;
    cin >> key ;
    int c = 0; int flag =0;
    for (int i = 0; i < n; i++)
    {
         c++;
        if (arr[i]==key)
        {
            flag =1;
            break;
        }

    }
    if (flag == 1)
       cout << "Present " << c << endl;
    else 
       cout << "Not Present "<<c << endl;
    }
    return 0;
}