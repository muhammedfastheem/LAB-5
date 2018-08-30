#include<iostream>
using namespace std;

int main(){
    char xy;
    cout<<"type the character"<<endl;
    cin>> xy;
    if(xy>='a'&&xy<='z')
    {
        cout<<"the character is an alphabet";
    }
    else
    {
        cout<<"the character is not an alphabet";
    }
    return 0;
}
