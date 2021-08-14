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
   
}