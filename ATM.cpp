#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int amount;
    float balance,result;
    cin>>amount>>balance;
    cout<<setprecision(2);
    cout<<fixed;
    if(amount%5==0 && amount<balance + 0.05)
    {
        result=balance-amount - 0.50;
        cout<<result;
    }
    else
    {
        cout<<balance;
    }
}
