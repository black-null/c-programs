#include <stdio.h>

int main() {
	int size;
	printf("Saisir la taille du tableau : ");
	scanf("%d", &size);
	int arr[size], occurrence[size];
	
	for (int i = 0; i < size; i++) {
		printf("Entrer l'element %d : ", i+1);
		scanf("%d", &arr[i]);
		occurrence[i] = 1;
	}
	for(int j = 0; j < size; j++) {
        if (occurrence[j]) {
            for (int i = j+1; i < size; i++)
                if(arr[i] == arr[j])
                    occurrence[j]++, occurrence[i] = 0;
			printf("Nombre d'occurence de %d dans Tableau est : %d\n", arr[j] ,occurrence[j]);
        }
	}
	return 0;
}
