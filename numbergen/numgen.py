import random

def main():

	w_file = open('testprimes.txt','w')

	for x in range(10 ** 6): # iterate one million times
		r_num = random.randint(2,10 ** 6) # two to one million, inclusive

		w_file.write('{}\n'.format(r_num))

	w_file.close()

if __name__ == '__main__':
	main()