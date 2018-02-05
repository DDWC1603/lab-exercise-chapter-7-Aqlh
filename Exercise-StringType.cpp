//aqilah syahirah a17dw230
//compare two strings
//complete the program below. 

#include <iostream>
#include<string>
using namespace std;

int main()
{

	string myName="Aqlh";//write your name there.
	//make a while loop until user input 'quit' to exit/end the program

	while(true)
	{
		
		cout<<"Enter your name(or 'quit' to 'exit'): ";
		string userName;
		cin>>userName;
		
		if(userName=="Abu")
	       	{
			cout<<"Hey Abu!"<<endl;
		}
		else if(userName=="quit")
		{
			cout<<endl;
			break;
		}
		
		else if (userName!=myName)
		{
			cout<<"Hello, "<<userName<<endl;
		}
		else
		{
			cout<<"Aha! its "<<myName<<endl;
		}
	}
	return 0;
}

