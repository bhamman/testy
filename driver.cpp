#include <iostream>
#include <string>
#include <cassert>
using namespace std;

string helloName(string name);

int main()
{
	cout << "Hello World!" << endl;
    cout << "This is a great day to code!" << endl;

    
    assert(helloName("Bob") == "Hello Bob!");
    assert(helloName("Alice") == "Hello Alice!");
    assert(helloName("Ali") == "Hello Ali!");
    assert(helloName("David") == "Hello David!");


	return 0;
}

string helloName(string name)
{
    
    return "Hello " + name + "!";
}

