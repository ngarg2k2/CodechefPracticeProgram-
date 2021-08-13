#include<iostream>
using namespace std;
class sum{
    public:
    void count(int count){
        for (int i = 0; i < count; i++)
        {
            int num;
            cin>>num;
            cout<<add(num)<<endl;
        }
    }
    int add(int num){
        int total=0,temp=num,temp2=num;
        while (temp>0)       
        {
            temp=temp/10;
            total++; 
        }
        
        for (int i = 1; i < total; i++)
        {
            num=num/10;
        }
        int ans=num+(temp2%10);
        return ans;
    }
};
int main(){
    sum obj;
    int count;
    cin>>count;
    obj.count(count);
}