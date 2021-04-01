#include <iostream>

using namespace std;
float operator"" _Kelvin(unsigned long long int x)
{
    return x -273.15;
}
float operator"" _Fahrenheit(unsigned long long int x)
{
   
    return (x-32)/1.8;
}
int main() {

    float a = 300_Kelvin;
    cout << a << " ";
    cout << endl;
   float b = 120_Fahrenheit;
   cout << b << " ";
    return 0;

}