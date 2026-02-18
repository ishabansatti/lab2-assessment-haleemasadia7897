#include <iostream>
using namespace std;

int getIntValue() {
    // Declare a variable var_int of type int and set its value to 10.
    int var_int = 10;
    return var_int;
}

float getFloatValue() {
    // Declare a variable var_float of type float and set its value to 10.75.
    float var_float = 10.75;
    return var_float;
}

char getCharValue() {
    // Declare a variable var_char of type character and set its value to 'A'.
    char var_char = 'A';
    return var_char;
}

int convertFloatToInt(float value) {
    // convert value to int.
    int result = (int)value;
    return result;
}

/*
Convert Fahrenheit to Celsius and store your answer in a variable celsius.

Formula:
    Celsius = (Fahrenheit - 32) * 5 / 9
*/
float fahrenheitToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    cout << "Int Value: " << getIntValue() << endl;
    cout << "Float Value: " << getFloatValue() << endl;
    cout << "Char Value: " << getCharValue() << endl;

    float f = 98.6;
    cout << "Float to Int: " << convertFloatToInt(f) << endl;

    cout << "Fahrenheit to Celsius: " << fahrenheitToCelsius(98.6) << endl;

    return 0;
}
