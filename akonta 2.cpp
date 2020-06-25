#include <iostream>
#include <string>
using namespace std;
int number;
string Devil_ones[] = { "", "One ", "two ", "three ", "four ","five ", "six ", "seven ",
"eight ", "nine ", "ten ", "eleven ", "twelve ",
"thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen
","nineteen " };
string Devil_tens[] = { "", "", "twenty ", "thirty ", "forty ","fifty ", "sixty ", "seventy ",
"eighty ","ninety " };
string changing_number_to_words(int number, string s);
// Function to print a given numberber in words
string change_to_words(unsigned long long int number)
{
//container word representation of given numberber number
string container;
//Digits at hundred billion
container += changing_number_to_words((number/100000000000), "hundred and
" );
//Digits at ten and one billion
container += changing_number_to_words((number/10000000000) % 100, "billion
" );
//Digits at hundred million
container += changing_number_to_words((number/100000000) % 10, "hundred
and " )//Digits at ten and one million
container += changing_number_to_words((number/1000000) % 100, "million " );
//Digits at hundred thousands and one million
container += changing_number_to_words(((number / 100000) % 10), "hundred
and ");
//Digits at thousandth and Devil_tens of thousand
container += changing_number_to_words(((number / 1000) % 100), "thousand ");
//Digit at hundreds places
container += changing_number_to_words(((number / 100) % 10), "hundred ");
if (number > 100 && number % 100)
container += "and ";
//Digits at Devil_ones and Devil_tens places
container += changing_number_to_words((number % 100), "");
return container;
}
//main function
int main()
{
cin >> number;
cout << "The number can be read as " << change_to_words(number) <<"say it
aloud let me hear you" <<endl;
cout<<"we will graduate together";
return 0;
}
string changing_number_to_words(int number, string s){
string str = "";
// if number is more than 19, divide it
if (number > 19)
str += Devil_tens[number / 10] + Devil_ones[number % 10];
else
str += Devil_ones[number];
// if number is non-zero
if (number)
str += s;
return str;
}