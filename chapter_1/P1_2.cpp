/*
FileName:P1_2.cpp;
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
    cout << "What is your name?" << endl;
    string user_name;
    getline(cin, user_name);
    cout << "Hello,"<< user_name << ".I am glad to meet you!"<<endl;

    return 0;
}
