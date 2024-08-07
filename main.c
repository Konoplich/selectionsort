#include <stdio.h>
#include "libselectionsort.h"

int main ()
{
	int list[5] = {12, 5, 48, 0, 4};
	
	printf("Input array\n");
	for(int i = 0; i < 5; i++)
		printf("%d ", list[i]);
	printf("\n");
	
	selection_sort(list, 5);
	
	printf("Sorted array\n");
	for(int i = 0; i < 5; i++)
		 printf("%d ",list[i]);
	printf("\n");
}
