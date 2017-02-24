#include <stdio.h>
#include <math.h>

long int fact(int n) {
	if (n == 1) {
		return 1;
	}

	return n * fact(n - 1) ;

}

int main() {
	for(int x = 0; x != pow(10,5); x++) {

		long int _ = fact(100);

	}

	return 0;
}