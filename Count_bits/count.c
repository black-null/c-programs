#include <stdint.h>

uint64_t countOnes ( uint64_t left, uint64_t right )
{
	uint64_t res = 0;
	for(int i = 0; right / (1<<i); i++)
		res += ( (right / (1<<i+1)) * (1<<i) ) + ((right%(1<<i+1) >= (1<<i) - 1 ) ? (right%(1<<i+1)) - (1<<i) + 1 : 0) \
			- ((left-1) / (1<<i) ? ( ((left-1) / (1<<i+1)) * (1<<i) ) + (((left-1)%(1<<i+1) >= (1<<i) - 1) ? ((left-1)%(1<<i+1)) - (1<<i) + 1 : 0) : 0);
	return res;
}
