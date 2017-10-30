#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int counter;
	double *ptr_d;
	FILE *ptr_fp;

	/* Part A */
	ptr_d = (double *)malloc(10 * sizeof(double));
	if(!ptr_d) {
		printf("Memory allocation error!\n");
		exit(1);
	}
	else {
		printf("Memory allocation successful.\n");
	}

	/* Part B */
	for(counter = 0; counter < 10; counter++) {
		ptr_d[counter] = (double) rand();
	}

	/* Part C */
	if((ptr_fp = fopen("temp.txt", "wb")) == NULL) {
		printf("Unable to open temp.txt!\n");
		exit(1);
	}
	else {
		printf("Opened temp.txt successfully for writing.\n");
	}

	/* Part D */
	if( fwrite(ptr_d, 10*sizeof(double), 1, ptr_fp) != 1) {
		printf("Write error!\n");
		exit(1);
	}
	else {
		printf("Write was successful.\n");
	}
	fclose(ptr_fp);
	free(ptr_d);

	/* Part E */
	ptr_d = (double *)malloc(10 * sizeof(double));
	if(!ptr_d) {
		printf("Memory allocation error!\n");
		exit(1);
	}
	else {
		printf("Memory allocation successful.\n");
	}

	/* Part F */
	if((ptr_fp = fopen("temp.txt", "rb"))==NULL) {
		printf("Unable to open temp.txt!\n");
		exit(1);
	}
	else {
		printf("Opened temp.txt successfully for reading.\n");
	}

	/* Part G */
	if(fread(ptr_d, 10 * sizeof( double ), 1, ptr_fp) != 1) {
		printf( "Read error!\n" );
		exit( 1 );
	}
	else {
		printf( "Read was successful.\n" );
	}
	fclose(ptr_fp);

	/* Part H */
	printf("The numbers read from temp.txt are:\n");
	for(counter = 0; counter < 10; counter++) {
		printf("%f ", ptr_d[counter]);
	}
	printf("\n");

	/* Part I */
	free(ptr_d);
	printf("Removing the tmp file temp.txt\n");
	remove("temp.txt");
	return 0;
}
