#include<iostream>
using namespace std;
int main(){
	//checking whether the number is positive,negative or zero
	float a;
	//ask the user for a number
	cout<<" type a number \n";
	cin>> a;
	//condition
        if (a>0) 
	{
	   cout<<"the number is positive";
	}
	else if (a<0)
	{
	        cout<<"the number is negative";
	}
	else 
	{
	   cout<<"the number is zero";
	}
	return 0;
}
