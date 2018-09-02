//including the library
#include<iostream>
using namespace std;
//using the main function
int main() {
    //defining the variables
    float a,b,c;
    cout<<"first number"<<endl;
    cin>> a;
    cout<<"second number"<<endl;
    cin>> b;
    cout<<"third number"<<endl;
    cin>> c;
    //condition
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
    //terminating the program
    return 0;
}
