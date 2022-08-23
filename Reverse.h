#include<iostream>
using namespace std;
#ifndef REVERSE_H
#define REVERSE_H

class Reverse
{
public:
    void reverse_string_helper(string &str, int j);
    int reverse_digit_helper(int num, int &sum, int &rem);
    int reverseDigit(int value);
    string reverseString(string letters);
};

#endif