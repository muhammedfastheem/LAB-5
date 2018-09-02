//loading the library
#include<iostream>
using namespace std;
//using the main function
int main(){
    //defining the variable
    float a,b,c;
    cout<<"first angle of the triangle"<<endl;
    cin>> a;
    cout<<"second angle of the triangle"<<endl;
    cin>> b;
    cout<<"third angle of the triangle"<<endl;
    cin>> c;
    //condition
    if (a+b+c==180)
    {
        cout<<"the triangle is valid";
    }
    else
    {
        cout<<"the triangle is invalid";
    }
    //terminating the program
    return 0;
}
