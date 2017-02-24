import sys, os, time

def main():

	path = sys.argv[1]

	c_before = time.clock()

	python = path[-2:] == 'py'


	os.system('{}{}'.format('python' if python else './', ' ' if python else '' + path))

	c_after = time.clock()

	print c_after - c_before



if __name__ == '__main__':
	main()