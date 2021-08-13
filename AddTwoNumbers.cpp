#include<iostream>
using namespace std;
class sum{
    public:
    void count(int num){
        for (int i = 0; i < num; i++)
        {
        int a,b;
        cin>>a>>b;
        cout<<add(a,b)<<endl;    
        }
        
    }
    int add(int a,int b){
        int total;
        total = a+b;
        return total;
    }

};
int main(){
    sum ob;
    int num;
    cin>>num;
    ob.count(num);
}