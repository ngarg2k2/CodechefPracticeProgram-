//9
#include <iostream>
using namespace std;
void sort(int n){
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}
int main()
{
    int t;
    cin >> t;
    sort(t);
    // int arr[t];
    // for (int i = 0; i < t; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < t; i++)
    // {
    //     for (int j = 0; j < t - 1; j++)
    //     {

    //         if (arr[j] > arr[j + 1])
    //         {
    //             int temp = arr[j];
    //             arr[j] = arr[j + 1];
    //             arr[j + 1] = temp;
    //         }
    //     }
    // }
    // cout << "sorted array" << endl;
    // for (int i = 0; i < t; i++)
    // {
    //     cout << arr[i] << endl;
    // }
}