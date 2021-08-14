#include<iostream>
using namespace std;
int main(){
    int num1;
    int  num2;
    cin>>num1>>num2;
    int arr[num1];
    for (int i = 0; i < num1; i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    for (int i = 0; i < num1; i++)
    {
        if (arr[i] % num2 == 0)
        {
            count++;
        }
        
    }
    cout<<count;

}