#include "Reverse.h"
using namespace std;

void Reverse::reverse_string_helper(string &str, int j)
{
    static int i = 0;
    if (j == str.size())
    {
        return;
    }
    reverse_string_helper(str, j + 1);
    if (i <= j)
    {
        swap(str[i++], str[j]);
    }
}

int Reverse::reverse_digit_helper(int num, int &sum, int &rem)
{
    if (num != 0)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        reverse_digit_helper(num / 10, sum, rem);
    }
    else
    {
        return sum;
    }
    return sum;
}

int Reverse::reverseDigit(int value)
{
    try
    {
        if (value < 0)
        {
            return -1;
        }
        int sum = 0, rem = 0;
        return reverse_digit_helper(value, sum, rem);
    }
    catch (char *excp)
    {
        return -1;
    }
    catch (...)
    {
        return -1;
    }
    
}

string Reverse::reverseString(string letters)
{
    try
    {
        string temp = letters;
        reverse_string_helper(temp, 0);
        return temp;
    }
    catch (char *excp)
    {
        return "ERROR";
    }
    catch (...)
    {
        return "ERROR";
    }
    
}
