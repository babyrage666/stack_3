#include <iostream>
#include <stdexcept>
#include <stack.hpp>
using namespace std;

void Init() 
{
	try
	{
		cout << "\ninit.cpp\n";
		Stack<int> s1;
		Stack<int> s2;
		Stack<int> s3 = Stack<int>(10);
		cout << "Int_Stacks has been created\n";
		
		cout<<"\n filling up 1st stack:\n";
		for (int i = 0; i < 10; ++i)
			s1.push(2*i);
		
		cout<<"copy 1st into 2nd:\n";
		s2 = s1;
		
		cout << "cleaning 1st stack:\n";
		while(!s1.empty()) 
			cout << s1.pop() << " ";
		
		cout << "cleaing 2nd stack:\n";
		while(!s2.empty())
			cout << s2.pop() << " ";
	}
	catch(const exception& e) 
	{
		cout << e.what() << endl;
	}
}
int main() 
{
	Init();
	return 0;
}