//13
#include <iostream>
using namespace std;
void second()
{
    int n=3;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<a[1]<<endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        second();
    }
}