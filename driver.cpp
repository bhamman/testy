#include <iostream>
#include <string>
#include <cassert>
using namespace std;

//string helloName(string name);
string makeAbba(string a, string b);

int main()
{   
    assert(makeAbba("Hi", "Bye") == "HiByeByeHi");
    assert(makeAbba("Yo", "Alice") == "YoAliceAliceYo");
    assert(makeAbba("What", "Up") == "WhatUpUpWhat");
    assert(makeAbba("Go", "Now") == "GoNowNowGo");



	return 0;
}

/*string helloName(string name)
{
    
    return "Hello " + name + "!";
}*/

string makeAbba(string a, string b)
{
    return a + b + b + a;
}
