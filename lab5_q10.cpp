#include<iostream>
using namespace std;

int main(){
    char xy;
    cout<<"type the letter"<<endl;
    cin>> xy;
    if (xy>='A'&&xy<='Z')
    {
        cout<<"the letter is uppercase";
    }
    else
    {
        cout<<"the letter is lowercase";
    }
    return 0;
}
