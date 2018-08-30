#include<iostream>
using namespace std;

int main() {
    float a,b,c;
    cout<<"first number"<<endl;
    cin>> a;
    cout<<"second number"<<endl;
    cin>> b;
    cout<<"third number"<<endl;
    cin>> c;
    if(a>b&&a>c)
    {
        cout<<a<<"is greater";
    }
    else if(b>a&&b>c)
    {
        cout<<b<<"is greater";
    }
    else
    {
        cout<<c<<"is greater";
    }
    return 0;
}
