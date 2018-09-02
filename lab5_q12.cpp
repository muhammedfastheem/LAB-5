//including the library
#include<iostream>
using namespace std;
//using the main function
int main(){
    //defining the variable
    int a;
    cout<<"type month number"<<endl;
    cin>> a;
    //condition
    if (a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    {
        cout<<"the month has 31 days";
    }
    else if (a==2)
    {
        cout<<"the month has 28 days";
    }
    else
    {
        cout<<"the month has 30 days";
    }
    //closing the program
    return 0;
}
