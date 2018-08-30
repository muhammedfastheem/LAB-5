#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"type the year"<<endl;
    cin>> a;
    if((2012+a)%4==0)
    {
        cout<<"the year is a leap year";
    }
    else
    {
        cout<<"the year is not a leap year";
    }
return 0;
}
