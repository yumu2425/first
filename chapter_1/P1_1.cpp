/*
FileName:P1_1.cpp;
Date:March 8th,2021;
Author:Yang Zhenyu;
Version 1.0;
*/

#include <iostream>

#include <string>

using namespace std;

int main()
{
    cout << "Hello,my name is Hal!" << endl;
    cout << "What would you like me to do?" << endl;
    string user_input;
    getline(cin, user_input);
    cout << "I am sorry, I cannot do that." << endl;
    return 0;
}
