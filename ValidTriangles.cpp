//19
#include<iostream>
using namespace std;
void valid(int a,int b,int c){
        if ((a+b+c)==180)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        valid(a,b,c);
    }
}