#include <stdlib.h>
#include <stdio.h>
#define EXPORT

void swap(int *val1, int *val2)
{
    int tmp = *val1;
    *val1 = *val2;
    *val2 = tmp;
}

int find_smallest_position(int list[], int start_pos, int list_length)
{
	int result = start_pos;
	
	for(int i = start_pos; i < list_length; i++)
	{
		if(list[i] < list[result])
			result = i;
	}
	return result;
}

EXPORT
void selection_sort(int list[], int list_length)
{
	for(int i = 0; i < list_length; i++)
	{	
		int smallest_position = find_smallest_position(list, i, list_length);
		swap(&list[i], &list[smallest_position]);
	}
	return;
}

