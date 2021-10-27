#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * @array: Array pointer
 * @size: Length of array
 * Return; void
 */

void bubble_sort(int *array, size_t size)
{
size_t n, num;
for (n = 0; n < size - 1; ++n)
{
for (num = 0; num < size; ++num)
{
if (array[num] > array[num + 1])
{
int bigVal = array[num];
array[num] = array[num + 1];
array[num + 1] = bigVal;
print_array(array, size);
}
}
}
}
