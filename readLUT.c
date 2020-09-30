#include <stdio.h>


int main() {

	FILE *file_to_read = NULL;

	FILE *file_to_write = NULL;

	char readBuffer[80] = "";
	
	int file_length = -2; //To account for the 2 first strings in the file being
			      //the name of the column

	file_to_read = fopen("lookup.txt", "r");

	//file_to_write = fopen("newfile.txt", "w");

	if (file_to_read == NULL) /*|| file_to_write == NULL)*/ {

		printf("One file wouldn't open!\n");
		return -1;
	}

	while ((fscanf(file_to_read, "%s", readBuffer)) != EOF) {
		
		file_length += 1;
	}

	fclose(file_to_read);
	//fclose(file_to_write);
	
	char adcString[2][file_length / 2];
	
	int i = 0;
	int j = 1;
	int k = 3;

	while ((fscanf(file_to_read, "%s", readBuffer)) != EOF) {
 

		if (i % 2 != 0) {

			if (i == 0 || i == 1) {
				
				adcString[0][i] = readBufferx;
			}
			else {
				adcString[0][i - j] = readBufferx;
			}
		}
		else if (i % 2 == 0) {

			if (i == 2) {

				adcString[1][0] = readBufferx;
			}
			else {
				adcString[1][i - k] = readBufferx;
			}
		}
	}

	for (int l = 0; l < 2; l++) {
		for (int m = 0; m < file_length / 2; m++) {
			printf("adcString[l][m]\n");
		}
	}


	return 0;
}


			
