// Codewars - Does my number look big in this? - Figure out whether a number is a narcissistic number.
// Solved
#include <iostream>
#include <cmath>
using namespace std;
bool narcissistic(int value){
  int valueLength = to_string(value).length();
  int originalValue = value;
  // Unfortunately this code only works for integers up to 10 digits in length. A vector array would be needed for more, but it's good enough for code wars :)
  int valueArray[10];
  // Break down integer into digits and store it in an array
  for (int i = valueLength - 1; i >= 0; i--) {
    valueArray[i] = value % 10;
    value /= 10;
  }
  // For each digit, calculate the digit raised to the power of the length and add it to the total.
  for (int j = 0; j < valueLength; j++) {
      value += pow(valueArray[j], valueLength);
      
  }
  if (value == originalValue) {
    cout << "True";
    return true;
    
  }
  else {
    cout << "False";
    return false;
    
  }
}
// Driver code
int main()
{
    narcissistic(7);
}
/* Most elegant solution -- didn't use array -- works for all numbers -- didn't use iostream -- fewer lines of code
 * #include <cmath>
 * bool narcissistic(int value) {
 *	int number = value;
 *	int numberLength = log10(value) + 1;
 *	int sum = 0;
 *
 *	while(number) {
 *		sum += pow(number % 10, numberLength);
 *		number /= 10;
 *	}
 *
 *	return sum == value;
 * }
