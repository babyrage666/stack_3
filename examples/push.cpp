#include <iostream>
#include <stack.hpp>
using namespace std;

void Push() 
{
	cout << "\npush.cpp\n";
	Stack<int> s1(10);
	for(int i = 0; i < 10; ++i) 
		s1.push(i*2);
	for(size_t j = 0; j < s1.count(); ++j) 
		cout << s1[j] << " ";
}

int main() 
{
	Push();
	return 0;
}
