#include "search_algos.h"
/**
 * binary_search - function implements basic binary search algo
 * @array: pointer to array
 * @size: size of array
 * @value: value to search for
 * Return: function returns index of match, or -1 if error
 */

int binary_search(int *array, size_t size, int value)
{
	int start; int end; int mid;
/*
*  int i;
*/

	if (array == NULL)
		return (-1);
	start = 0;
	end = size;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (array[mid] > value)
		{
/*
* printf("Searching in array:\n");
* for (i = 0; i < mid; i++) {
* printf("%d ", array[i]);
* }
* printf("\n");
*/
			end = mid - 1;
		}
		else if (array[mid] < value)
		{
/*
 *			printf("Searching in array:\n");
 *			for (i = 0; i < end; i++) {
 *				printf("%d ", array[i]);
 *			}
 *			printf("\n");
*/
			start = mid + 1;
		}
		else
			return (mid);

	}
	return (-1);
}
