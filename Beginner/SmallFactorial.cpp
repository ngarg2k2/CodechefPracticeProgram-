//15
#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    else if (n==1)
        return 1;
    else
        return n*fact(n-1);    
        
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        cout << fact(n) << endl;
    }
}