#include <iostream>
#include <stdexcept>
#include <stack.hpp>
using namespace std;

void Init();
void Push();
void Pop();
void Empty();

int main() {
	try 
	{
		Init();
		Push();
		Pop();
		Empty();
	} 
	catch(std::exception &e) 
	{
		cout << e.what() << endl;
	}
	return 0;
}
