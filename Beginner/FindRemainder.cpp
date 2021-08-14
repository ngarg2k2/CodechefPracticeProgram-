#include<iostream>
using namespace std;
class remainder{
    public:
    void count(int count){
        for (int i = 0; i < count; i++)
        {
            int a,b;
            cin>>a>>b;
            cout<<rem(a,b)<<endl;
        }
    }
    int rem(int a,int b){
        return a%b;
    }
};
int main(){
    remainder obj;
    int count;
    cin>>count;
    obj.count(count);
}