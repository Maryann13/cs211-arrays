#ifndef ARRAYS_H
#define ARRAYS_H

#include <cassert>

void task_1();

// Task 2
void task_2();

// returns zero
int task_3_zero();

void task_4();

// Task 5
// copy arr1 to arr2
void task_5_copy(int *, int *, int);

// Task 6
// copy array `arr1` to array `arr2` of the same size
template <class InputIterator>
void task_6_poor_copy(InputIterator arr1_beg, InputIterator arr1_end, int * arr2)
{
	assert(arr1_beg < arr1_end);

	while (arr1_beg != arr1_end)
	{
		*arr2++ = *arr1_beg++;
	}
}

// Task 7
// print array `arr`
void task_7_print(int *, int, char = ' ');

/* #ifndef ARRAYS_H: */
#endif
