//14
#include<iostream>
using namespace std;
void game(){
    int a[1],win=0;
    for (int i = 0; i < 2; i++)
    {
        cin>>a[i];
    }
    // cout<<a[0] ;
    // cout<<a[1]<<endl;

    // if(a[0]>a[1]){
    //     win=a[0]-a[1];
    //     cout<<"1 "<<win<<endl;
    // }
    // else{
    //     win=a[1]-a[0];
    //     cout<<"2 "<<win<<endl;
    // }
    int i=1;
    while(i == 1){
        win=a[0]-a[1];
        if (win>0)
        {
            cout<<"1 "<<win<<endl;
        }
        else{
            cout<<"2 "<<(-win)<<endl;
        }
        i=0;
    }


    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        game();
    }
    
}