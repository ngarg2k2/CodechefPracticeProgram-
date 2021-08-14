//17
#include<iostream>
using namespace std;
void opt(int a,int b){
    if(a>b)
        cout<<">"<<endl;
    else if(a<b)
        cout<<"<"<<endl;
    else
        cout<<"="<<endl;        
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        opt(a,b);
    }
}