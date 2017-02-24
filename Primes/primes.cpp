#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

bool isPrime(int n) {

	/*
	Return True if n is prime.
	*/

	if (n == 2) {
		return true;
	}

	int sqrtN = (int) sqrt(n) + 1;

	for(int divisor = 2; divisor < sqrtN; divisor++) {

		if (n % divisor == 0) {
			return false;
		}
	}

	return true;

}

int main() {

	std::ifstream primeFile;

	primeFile.open("testprimes.txt", std::ifstream::in); // file is now reay to be read from.

	std::string currentLine;
	///char currentLine[7];
	int total = 0;

	while(std::getline(primeFile, currentLine)) {

		int n = stoi(currentLine);

		if (isPrime(n)) {
			total += 1;
		}
	}

	std::cout << total << std::endl;

	primeFile.close();

	return 0;
}

