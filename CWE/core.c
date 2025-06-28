#include <stdio.h>
#include <string.h>

int getValueAtIndex(int *nums, int index) {
	// TODO: Access the array `nums` and return the value at `index`. If `index` is a negative number, return -1.
    if(index < 0){
        return -1;
    }
     return nums[index];
}

int customPower(int base, int exponent) {
	// TODO: Return the value of `base` raised to the `exponent` power.
    int expo_ans = 1;
    for(int i = 0; i < exponent; i++){
        expo_ans *= base;
    }
    return expo_ans;
}

int customRemainder(int divisor, int dividend) {
	// TODO: Without using the modulo operator (%), return the remainder of `dividend` / `divisor`.
    int ans;
    ans = dividend - (dividend / divisor) * divisor;
    return ans;
}

int sumOfAllElements(int *nums, int size) {
	// TODO: Given the integer array `nums` and its length `size`, return the sum of all its elements.
    int sum = 0;
    for(int i = 0; i <= size; i++){
        sum += nums[i];
    }
    return sum;
}

int checkMaliciousSignature(char *signature) {
	// TODO: Given the string `signature`, return 1 if it contains the prefix "mothershipc2", or return 0 if it does not.
    if(strncmp(signature, "mothershipc2", strlen("mothershipc2")) == 0){
            return 1;
        }
    return 0;
}

void multiplyPointers(int *x, int *y) {
	// TODO: Multiply the integers pointed to by `x` and `y` by 5.
    *x = (*x) * 5;
    *y = (*y) * 5;
}

void copyString(char *src, char *dst) {
	// TODO: Copy the string `src` to the string `dst`.
    strcpy(dst, src);
}

int main() {
    int myNums[10] = {7, 4, 5, 1, 2, 9, 3, 8, 6, 10};

	// Test getValueAtIndex
	if (getValueAtIndex(myNums, 4) != 2) {
		printf("getValueAtIndex() returns the wrong value!\n");
	}

	// Test getValueAtIndex
	if (getValueAtIndex(myNums, -5000) != -1) {
		printf("getValueAtIndex returns the wrong value!\n");
	}

	// Test customPower
	if (customPower(2, 5) != 32) {
		printf("customPower() returns the wrong value!\n");
	}

	// Test customRemainder
	if (customRemainder(5, 27) != 2) {
		printf("customRemainder() returns the wrong value!\n");
	}

	// Test sumOfAllElements
	if (sumOfAllElements(myNums, 10) != 55) {
		printf("sumOfAllElements() returns the wrong value!\n");
	}

	// Test checkMaliciousSignature
	if (checkMaliciousSignature("mothershipc2blahblah") != 1) {
		printf("checkMaliciousSignature() returns the wrong value!\n");
	}

	// Test checkMaliciousSignature
	if (checkMaliciousSignature("badguybadguy") != 0) {
		printf("checkMaliciousSignature() returns the wrong value!\n");
	}

	// Test multiplyPointers

	int a = 10;
	int b = 5;
	
	multiplyPointers(&a, &b);

	if (a != 50 && b != 25) {
		printf("multiplyPointers() does not do its arithmetic correctly!\n");
	}

	// Test copyString

	char destination[50];
	copyString("i'm just a lil guy", destination);

	if (strcmp("i'm just a lil guy", destination) != 0) {
		printf("copyString() does not copy the string over correctly!\n");
	}

	printf("If nothing else printed out besides this line, then congratulations!\n");

    return 0;
}