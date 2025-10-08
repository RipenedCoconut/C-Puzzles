#include <stdio.h>
#include "puzzles.h"

int main() {

	int x;
	printf("Input a number to check if positive: ");
	scanf("%i", &x);
	printf("\nResult: %i\n", isPositive(x));
	
  
	return 0;
}


/*
 * Puzzles
 */

// Shift right logical, even though int is a signed variable. Use a maximum of 20 operations.
int logicalShift(int x, int n){
	int mask = ~((~0 << (0x1F + (~n + 0x01))) >> 0x01);
	x >>= n;
	x = x & mask;
	return x;
}

// returns 1 if x contains an odd number of 0's. Use a maximum of 20 operations.
int bitParity(int x){
	return 0;
}

// Compute ! x without using ! and do so in a maximum of 12 operations.
int bang(int x){
	int xNegative = ~x + 0x01;
	x = x | xNegative;
	x = x >> 0x1F;
	return ++x;
}

// Is x > 0? Remember that there are really three possibilities (that x is positive, negative, or 0). Use a maximum of 8 operations.
int isPositive(int x){
	return (!(x >> 0x1F)) & (!(!x));
}

// Is x <= y? Remember that there are at least four possibilities based on the signs of x and y. Use a maximum of 24 operations.
int isLessOrEqual(int x, int y){
	return 0;
}

// Does x fit in n bits? Returns 0 if no and 1 if yes. Use a maximum of 15 operations.
int fitsBits(int x, int n){
	return 0;
}

// Compute x divided by (2 raised to the nth power). Use a maximum of 15 operations.
int divpwr2(int x, int n){
	return x >> n;
	
	//TODO: Doesn't round correctly when negative
}

// Solve -x without using negation or subtraction. Use a maximum of 5 operations.
int negate(int x){
	x = x ^ ~0x0;
	return ++x;
}

// Compute the same answer as x ? y : z using a maximum of 16 operations.
int conditional(int x, int y, int z){
  return 0;
}

// Returns the most positive integer that can be stored in an int interpreted using two's complement. Use a maximum of 10 operations.
int tmax(){
	int maxPositive = ~0x0;
	int maxNegative = 0x1 << 0x1F;
	maxPositive = maxPositive ^ maxNegative;
	return maxPositive;
}

