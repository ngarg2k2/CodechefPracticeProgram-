#include<iostream>
using namespace std;
class sum{
    public:
    void count(int a){
        for (int i = 0; i < a; i++)
        {
            int num;
            cin>>num;
            cout<<add(num)<<endl;
        }    
    }
    int add(int num){
        int temp=0,rem=0;
        while (num>0){
            rem=num%10;
            temp=temp+rem;
            num=num/10;
        }
        return temp;
    }

};
int main(){
    int count;
    cin>>count;
    sum obj;
    obj.count(count);

}