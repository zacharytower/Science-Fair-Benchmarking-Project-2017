import math

def main():

	prime_file = open('testprimes.txt','r')
	total = 0

	for line in prime_file.readlines():

		n = int(line)
		if is_prime(n):
			total += 1

	print total
	prime_file.close()

def is_prime(n):

	'''
	Return true if n is prime, false otherwise.
	n must be two or greater.
	'''
	assert 2 <= n, 'is_prime argument n invalid.'
	if n == 2:
		return True

	sqrt_n = int(math.sqrt(n)) + 1 # round down, add one.


	for divisor in range(2, sqrt_n):
		if n % divisor == 0: # n is not prime:
			return False

	return True

if __name__ == '__main__':
	main()