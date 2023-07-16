#include <stdio.h>

void pattern1(int line);
void pattern2(int line);

// Function to print pattern 1 (upward triangle)
void pattern1(int line) {
	for (int i = 1; i <= line; i++) {
		for (int j = 1; j <= i; j++) {
			printf(" * "); //print stars
		}
		printf("\n");//move to next line
	}
}
// Function to print pattern 2 (downward triangle)
void pattern2(int line) {
	for (int i = line; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf(" * "); //print stars
		}
		printf("\n"); //move to next line
	}
}

int main() {

	int line;

	printf("enter the line value: ");
	scanf(" %d", &line);

	printf("pattern 1:\n");
	pattern1(line); // Call function to print pattern 1

	printf("pattern 2:\n");
	pattern2(line); // Call function to print pattern 2

	return 0;
}