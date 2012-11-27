#include<iostream>
#include<string>


using namespace std;

int main()
{
	string name;
	string MyName = "Dwayne";
	
	
	cout << "Please enter your name: " << endl;
	cin >> name;
	
	if(name == MyName)
	cout <<"You entered: " << name << endl;
	
	else 
	cout <<"That is not your name!" << endl;
	
	return 0;
}
