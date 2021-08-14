//18
#include<iostream>
using namespace std;
void num(int a,int b){
    if (a>b)    
    {
        cout<<a<<" "<<(a+b)<<endl;
    }
    else
        cout<<b<<" "<<(a+b)<<endl;

    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        num(a,b);

    }
    
}