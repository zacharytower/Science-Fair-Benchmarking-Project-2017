def fact(n):
	if n == 1:
		return 1

	return n * fact(n-1)

def main():

	for x in range(10 ** 5):
		_ = fact(10 ** 2)

if __name__ == '__main__':
	main()