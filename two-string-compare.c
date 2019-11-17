#include <stdio.h>
#include <string.h>
int main() {
	char firstString [1000];
	char secondString[1000];
	int diff = 0;
	printf("enter first string\n");
	scanf("%s", firstString);
	printf("enter second string\n");
	scanf("%s", secondString);


	int firstStringLength = strlen(firstString);

	int secondStringLength = strlen(secondString);

	if (firstStringLength < secondStringLength) {
		int i = 0;
		while (i<firstStringLength) {
			if (firstString[i]!= secondString[i]) {
				diff = firstString[i] - secondString[i];
				break;
			}
			i=i+1;
		}

		if (diff == 0) {
			diff = '\0' - secondString[firstStringLength];
		}

		printf("both strings are not equal and diff is %d", diff);

	}

	else if (firstStringLength > secondStringLength) {
		int i = 0;
		while (i<secondStringLength) {
			if (firstString[i]!= secondString[i]) {
				diff = firstString[i] - secondString[i];
				break;
			}
			i=i+1;
		}

		if (diff == 0) {
			diff = firstString[secondStringLength] - '\0';
		}

		printf("both strings are not equal and diff is %d", diff);
	}

	else {
		int i = 0;
		while (i<secondStringLength) {
			if (firstString[i]!= secondString[i]) {
				diff = firstString[i] - secondString[i];
				break;
			}
			i=i+1;
		}
		if (diff == 0) {
			printf("both strings are equal and diff is %d", diff);
		}
		else {
			printf("both strings are not equal and diff is %d", diff);
		}
	}
}

/*
example -
firstString = fai
secondString = faiz


*/