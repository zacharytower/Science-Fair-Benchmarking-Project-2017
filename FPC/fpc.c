#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	FILE *ptr_file;

	ptr_file = fopen("fpc_testcase.txt","r");
	
	char *line = NULL;
	size_t len = 0;
	ssize_t read; 
	

	while((read = getline(&line, &len, ptr_file)) != -1) {
		
		float floatarray[2];
		char *token;
		int i = 0;

		token = strtok(line, " ");
		while(token != NULL) {

			floatarray[i] = atof(token);

			token = strtok(NULL, " ");
			i++;
		}

		float _ = floatarray[0] + floatarray[1];


	}
	
	fclose(ptr_file);
	return 0;
}
