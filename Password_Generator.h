#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

class Password_Generator{
    string Password;
    int length;
    string characters;
    public:
    Password_Generator(int length)
    {
    	this->length=length;Password="";
    	characters="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	}
	string get_Password();
};
