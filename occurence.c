#include <stdio.h>

int main() {
	int size;
	printf("Num of elements : ");
	scanf("%d", &size);
	int arr[size], occurrence[size];
	
	for (int i = 0; i < size; i++) {
		printf("Element %d : ", i+1);
		scanf("%d", &arr[i]);
		occurrence[i] = 1;
	}
	for(int j = 0; j < size; j++) {
        if (occurrence[j]) {
            for (int i = j+1; i < size; i++)
                if(arr[i] == arr[j])
                    occurrence[j]++, occurrence[i] = 0;
			printf("Nbr of occurences of %d in Table is : %d\n", arr[j] ,occurrence[j]);
        }
	}
	return 0;
}
