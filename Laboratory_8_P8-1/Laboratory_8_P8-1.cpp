/* Date: 10/24/2024
* Name: Jace Van Oss
* File: Laboratory_8_P8-1.CPP
*
* Description:  program that counts the number of vowels in a string from the command line
*/

#include <iostream>
#include <string>

using namespace std;

int countVowel(string str);

int main() {
	string test = "hEllo";
	cout << countVowel(test);

	return 0;
}

int countVowel(string str) {
	int count = 0;
	for (int i = 0; i < str.length(); i++) {
		int num1 = i;
		int num2 = 1;
		str.substr(num1, num2);
		if (str.substr(num1, num2) == "a" || str.substr(num1, num2) == "e" || str.substr(num1, num2) == "i" || str.substr(num1, num2) == "o" || str.substr(num1, num2) == "u") {
			count++;
		}
		else if (str.substr(num1, num2) == "A" || str.substr(num1, num2) == "E" || str.substr(num1, num2) == "I" || str.substr(num1, num2) == "O" || str.substr(num1, num2) == "U") {
			count++;
		}
		num1++;
		num2++;
	}
	return count;
}