def main():

	f = open('fpc_testcase.txt','r')

	for line in f.readlines():

		n,m = [float(x) for x in line.split()]
		_ = m + n

	f.close()

if __name__ == '__main__':
	main()