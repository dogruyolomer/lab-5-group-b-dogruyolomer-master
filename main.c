#include <stdio.h>

// it might be good to define your array size as a constant
#define SIZE 5

int main() {
	//define your array here and other variables
	
	int arr[SIZE];
	int number =0;
	int searchNumber = 0;
	int counter =0;

	printf("--- Array Input ---\n");
	
	// get user input to fill the array
	for(int i =0; i<SIZE; i++){
		printf("Enter number %d: ",i+1);
		scanf("%d",&number);
		arr[i]=number;
	}

	// ask for a target number to search for
	printf("--- Search ---\n");
	printf("Enter the number to search for: ");
	scanf("%d",&searchNumber);
	
	// perform linear search
	//count how many times the target number appears in the array
	for(int i =0; i<SIZE; i++){
		if (arr[i]==searchNumber){
			counter++;
		}
	}

	// print the result
	printf("--- Result ---\n");
	printf("The number %d appears %d times in the array.", searchNumber, counter);

	return 0;
}



