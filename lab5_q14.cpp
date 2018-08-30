#include<iostream>
using namespace std;

int main(){
    float a,b,c;
    cout<<"first angle of the triangle"<<endl;
    cin>> a;
    cout<<"second angle of the triangle"<<endl;
    cin>> b;
    cout<<"third angle of the triangle"<<endl;
    cin>> c;
    if (a+b+c==180)
    {
        cout<<"the triangle is valid";
    }
    else
    {
        cout<<"the triangle is invalid";
    }
    return 0;
}
