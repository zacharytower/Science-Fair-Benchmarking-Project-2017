#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n) {
	/*
	Returns true if n is prime.
	*/

	if(n == 2){
		return 1;
	}

	int sqrtN = floor(sqrt(n)) + 1;

	for(int divisor = 2; divisor < sqrtN; divisor += 1) {
		if(n % divisor == 0) { // n is composite
			return 0;
		}
	}

	return 1;

}

int main() {

	FILE *ptr_file;

	ptr_file = fopen("testprimes.txt","r");
	int total = 0;
	char *line = NULL;
	size_t len = 0;
	ssize_t read; 
	

	while((read = getline(&line, &len, ptr_file)) != -1) {
		
		int n = atoi(line);
		if(isPrime(n)) {
			total += 1;
		}
	}

	printf("%d\n", total);
	
	fclose(ptr_file);
	return 0;
}
