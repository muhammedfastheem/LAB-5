//loading the library
#include<iostream>
using namespace std;
//using the main function
int main(){
    //defining the variable
    char xy;
    cout<<"type the letter"<<endl;
    cin>> xy;
    //condition
    if (xy>='A'&&xy<='Z')
    {
        cout<<"the letter is uppercase";
    }
    else
    {
        cout<<"the letter is lowercase";
    }
    //closing the program
    return 0;
}
