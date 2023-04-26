#include <iostream>
#include <string>
#include <cmath>

using namespace std;
			
class RadixConverter
{
    string number;
    int radix1, radix2;

public:
    RadixConverter() {}
    ~RadixConverter() {}

    void get_number(void)
    {
        cout << "Enter Radix of number : ";
        cin >> radix1;
        cout << "Enter Number : ";
        cin >> number;
    }
};