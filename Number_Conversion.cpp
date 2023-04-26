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
    
         for (int i = 0; i < number.size(); i++)
        {
            if (number[i] == radix1 || number[i] == radix1 + 'A' - 10)
            {
                cout << "You Entered an Invalid number corresponding to base " << radix1 << endl;
            }
        }
        cout << "Enter Radix of number you want to convert it to : ";
        cin >> radix2;
    }
     // Convert a number from any radix to decimal (base 10)
    int toDecimal(void)
    {
        int decimalNumber = 0;
        int power = 1;
    }			

	
};