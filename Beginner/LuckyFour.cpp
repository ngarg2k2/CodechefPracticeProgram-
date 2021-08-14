//10
#include<iostream>
using namespace std;
void four(){
    int n,count=0;
    cin>>n;
    while (n>0)
    {
        if(n%10==4){
            count++;
        }
        n=n/10;
    }
    cout<<count<<endl;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        four();
    }
}