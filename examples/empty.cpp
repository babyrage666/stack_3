#include <iostream>
#include <cstring>
#include <stack.hpp>

using namespace std;

void Empty() 
{
	try
	{
		cout << "\nempty.cpp\n";
		Stack<char> s1(10);
		char wordchar[] = "kcats_rahc";
		for(int i = 0; i < strlen(wordchar); ++i) 
			s1.push(wordchar[i]); 
		while(!s1.empty()) 
			cout << s1.pop();
	}
	catch(const exception& e)
	{
		cout << e.what() << endl;
	}
}

int main() 
{
	Empty();
	return 0;
}