#include <stdlib.h>

int *snail(size_t *outsz, const int **mx, size_t rows, size_t cols) {
  *outsz = rows*cols;
  int *res = calloc(1,sizeof(int)* (*outsz));
  
  
	int r=0,c=0,i = 0;
	while(r < rows && c < cols) {
		for(int j = c; j < cols;j++,i++)
			res[i] = *(*(mx + r) + j);
		r++;
		for(int j = r; j < rows; i++,j++) 
			res[i] = *(*(mx + j) + cols-1);
	
		cols--;
		if(r < rows) {
		for(int j = cols-1; j >= c;j--,i++)
			res[i] = *(*(mx + rows-1) + j);

		rows--;
		}
		if(c < cols) {
		for(int j = rows-1; j>= r;j--,i++) 
			res[i] = *(*(mx + j) + c);
		c++;
		}
	}
		
	
  return res;
}
