

#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 3456;
    unsigned int c = 324234;
    string s = "This is new string";

    cout << a << '\t' << sizeof(a) << endl;
    cout << b << '\t' << sizeof(b) << endl;
    cout << c << '\t' << sizeof(c) << endl;
    cout << s << '\t' << sizeof(s) << endl;

    return 0;
}


