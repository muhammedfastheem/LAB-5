#include<iostream>
using namespace std;

int main(){
    char xy;
    cout<<"type the alphabet"<<endl;
    cin>> xy;
    if(xy=='a'||xy=='e'||xy=='i'||xy=='o'||xy=='u')
    {
        cout<<"the alphabet is a vowel";
    }
    else
    {
        cout<<"the alphabet is a consonant";
    }
    return 0;
}
