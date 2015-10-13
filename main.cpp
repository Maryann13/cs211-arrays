#include <iterator>
#include <cassert>
#include "arrays.h"
#include "quick_sort.h"

using namespace std;

int main()
{
	task_1();
	task_2();
	task_3_zero();
	task_4();

	int a[5]{ 1, 2 };
	int b[5];

	task_5_copy(a, b, 5);
	task_7_print(b, 5);

	int c[5];
	task_6_poor_copy(begin(b), end(b), c);
	task_7_print(c, 5);

	int arr[5]{ 15, 13, 777 , 42, 666 };
	my_qsort(arr, 5);

	int arr1[5]{ 13, 15, 42, 666, 777 };

	for (int *p = arr, *p1 = arr1; p < arr + 5; ++p)
		assert(*p == *p1++);
}