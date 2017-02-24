import random

def main():
	
	f = open('fpc_testcase.txt','w')

	sigfig = 17

	for x in range(10 ** 6):
		s = ''
		for _ in range(2):
			ra = random.random()

			ra_str = str(ra)

			ra_str += '0' * (17 - len(ra_str))
			s += ra_str + ' '

		s += '\n'
		f.write(s)

	f.close()

if __name__ == '__main__':
	main()

		

