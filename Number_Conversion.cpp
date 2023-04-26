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
        			
			        // Iterate through the string in reverse order
        for (int i = number.size() - 1; i >= 0; i--)
        {
            // Convert the current digit to an integer value
            int digit;
            if (isdigit(number[i]))
            {
                digit = number[i] - '0';
            }
            else
            {
                digit = number[i] - 'A' + 10;
            }

            // Add the digit times the appropriate power of the radix to the decimal number
            decimalNumber += digit * power;
            power *= radix1;
        }
        return decimalNumber;
    }

     // Convert a decimal number to any radix
    string toRadix(int decimalNumber)
    {
        string result = "";

        // Keep dividing the decimal number by the radix and appending the remainders to the result
        while (decimalNumber > 0)
        {
            int remainder = decimalNumber % radix2;
           // Convert the remainder to the appropriate digit (either a number or a letter)
            char digit;

             if (remainder < 10)
            {
                digit = remainder + '0';
            }
            else
            {
                digit = remainder - 10 + 'A';
            }
        result = digit + result;
            decimalNumber /= radix2;
        }

        return result;
    }
	
};