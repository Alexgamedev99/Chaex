/*
Write a C-program that converts metric measurements to imperial system values. Measurements are provided to your program in meters, grams or degrees Celsius and must be converted to feet, pounds and degrees Fahrenheit, respectively.

Here are the conversion rules to use:

1 meter = 3.2808 feet;

1 gram = 0.002205 pounds;

temperature in degrees Fahrenheit = 32 + 1.8 × temperature in degrees Celsius.

On the first input line you are given the number of conversions to be made. Each of the following lines contains a value to be converted as well as its unit: m, g or c (for meters, grams or degrees Celsius). There will be a space between the number and the unit. You should print your output value for each input line immediately after calculating it (ie, you do not have to wait until you have read all inputs).

Display the converted values with 6 decimal places, followed by a space and their unit: ft, lbs or f (for feet, pounds or degrees Fahrenheit). Each conversion result should be printed on its own line, and you should store and display all decimal values as doubles.
*/
#include <stdio.h>
void UnitChecker(double,char);
void Loop(int);
double MetersTofeet(double);
double GramsToPounds(double);
double CelsiusToFahrenheit(double);
int main()
{
   int NumberOfValues = 0;
   scanf("%d",&NumberOfValues);
   Loop(NumberOfValues);
   return 0;
}
void UnitChecker(double v, char u){
    switch(u){
        case 'm':
        case 'M':
        MetersTofeet(v);
        break;
        case 'g':
        GramsToPounds(v);
        break;
        case 'G':
        GramsToPounds(v);
        break;
        case 'c':
        CelsiusToFahrenheit(v);
        break;
        case 'C':
        CelsiusToFahrenheit(v);
        break;
        default:
        printf("medida incorrecta\n");
    }
}
void Loop(int l){
    for(int i = 0; i < l; i++){
     double value = 0;
     char unit = ' ';
     scanf("%lf %c",&value,&unit);
     UnitChecker(value,unit);
   }
}
double MetersTofeet(double v){
    double feet = v * 3.2808;
    printf("%lf ft\n",feet);
    return feet;
}
double GramsToPounds(double v){
    double pound = v * 0.002205;
    printf("%lf lbs\n",pound);
    return pound;
}
double CelsiusToFahrenheit(double v){
    double fahr = 32 + 1.8 * v;
    printf("%lf f\n",fahr);
    return fahr;
}