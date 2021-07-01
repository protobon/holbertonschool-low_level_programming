/**
 * reverse_array - reverses an array of int
 * @a: array
 * @n: number of int elements in a
 */
void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1, temp;

	while (start <= end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
