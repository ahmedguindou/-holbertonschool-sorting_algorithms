#include "sort.h"
/**
 * bubble_sort - sort array elements
 * @array: array
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
size_t i, len;
int temp;
int test = 1;
if (!array || size < 2)
{
return;
}
len = size;
while (test)
{
test = 0;
for (i = 1; i < len; i++)
{
if (array[i - 1] > array[i])
{
temp = array[i - 1];
array[i - 1] = array[i];
array[i] = temp;
test = 1;
print_array(array, size);
}
}
len--;
}
}
