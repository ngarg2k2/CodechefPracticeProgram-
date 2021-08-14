//16
#include<iostream>
using namespace std;
void help(int n){
    if(n<10)
        cout<<"Thanks for helping Chef!"<<endl;
    else
        cout<<"-1"<<endl;    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        help(n);
    }
    
}