#include <iostream>
using namespace std;
int main()
{
	int num1,num2,mod;
	cout<<"Enter your first number:";
	cin>>num1;
	cout<<"Enter your second number:";
	cin>>num2;
	mod=num1&num2;
	cout<<"The modulus of these two numbers is:"<<mod<<endl;
	return 0;
}
