#include <iostream>
#include <stdexcept>
#include <stack.hpp>
using namespace std;

void Pop() 
{
	try
	{
		cout << "\npop.cpp\n";
		Stack<int> s1(10);
		for(int i = 0; i < 10; ++i) 
			s1.push(i); 
		for(int j = 0; j < 5; ++j) 
			cout << s1.top() << " "; 
	}
	catch(const exception& e)
	{
		cout << e.what() << endl;
	}
}
int main() 
{
	Pop();
	return 0;
}
