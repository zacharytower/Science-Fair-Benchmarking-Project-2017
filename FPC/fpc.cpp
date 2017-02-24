#include <iostream>
#include <fstream>
#include <string>

int main() {

	std::ifstream fpcFile;

	fpcFile.open("fpc_testcase.txt", std::ifstream::in); // file is now reay to be read from.

	std::string currentLine;

	while(std::getline(fpcFile, currentLine)) {

		float m = stoi(currentLine.substr(0,16));
		float n = stoi(currentLine.substr(18,34));

		float _ = m + n;
	}

	

	fpcFile.close();

}