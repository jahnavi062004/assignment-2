#include<stdio.h>
int min_jumps("vector"<int> array, int index)
{
	// storing size of array in variable n
	int n = array.size();
	// if nothing is possible from source, return -1
	if (array[0] == 0)
		return -1;
	// if the maximum possible jumps are greater than size of array, return 0 jumps.
	if (index >= n)
		return 0;
	// initializing jumps to 1 more than maximum possible jumps 
	int jumps = 10001;
	// looping from 1 to maximum jumps possible from that index 
	for (int i = 1; i < array[index]; i++){
		// finding minimum of current jumps and recursive call to index + i-th position in array
		// adding 1 since we are taking a jump from current index to index + i
		jumps = min(jumps, 1 + min_jumps(array, index + i));
	}
	return jumps;
}


