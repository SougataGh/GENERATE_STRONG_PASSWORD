#include "Password_Generator.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
using namespace std;

int main(){

    int length;
    cout<<"Enter the length of the Password :: ";
    cin>>length;
    Password_Generator password(length);
    string s_password=password.get_Password();
    cout<<s_password<<endl;
    return 0;
}
