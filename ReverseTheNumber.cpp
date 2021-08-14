//11
#include<iostream>
using namespace std;
void reverse(){
    int n,rem,rev=0;
        cin>>n;
        while (n>0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        
    cout<<rev<<endl;
}
    
int main(){
    int t;
    cin>>t;
    while(t--){
        reverse();
    }
}