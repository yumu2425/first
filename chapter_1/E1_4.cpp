/*
FileName:E1_4.cpp;
Date:March 8th,2021;
Author:Yang Zhenyu;
Version 1.0;
*/

#include <iostream>

using namespace std;

int main()
{
    int first,second,third;
    first=1000*(1+0.05);
    second=first*(1+0.05);
    third=second*(1+0.05);
    cout << "The first year: " <<first<< endl;
    cout << "The second year: " <<second<< endl;
    cout << "The third year: " <<third<< endl;
    return 0;
}
