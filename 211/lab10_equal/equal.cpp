#include <iostream>
using namespace std;

bool equal_string(const char str1[], const char str2[])
{
    if (str1[0] == 0 && str2[0] == 0) // base case if first element is empty must be equal
    {
       return true;
    }
    if (str1[0] != str2[0]) // if first elements are not equal then return false
    {
        return false;
    }
    else // else return equal_string (boolean) ---->>> go to the next elements and check to see if equal
    {
        return equal_string(str1+1, str2+1);
    }
    /*same as above***********
    if (equal_string(str1+1, str2+1) == true)
    {
        return true;
    }
    else 
    {
        return false;
    }*/
}

int main()
{
    char str1[1000], str2[1000];

    // initialize str1 and str2 to empty
    str1[0] = 0;
    str2[0] = 0;

    cout << "enter first string: ";
    cin >> str1;
    cout << "enter second string: ";
    cin >> str2;

    if (equal_string(str1, str2))
      cout << "<" << str1 << "> is equal to <" << str2 << ">\n";
    else cout << "<" << str1 << "> is NOT equal to <" << str2 << ">\n";
}
