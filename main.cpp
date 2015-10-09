#include <iterator>
#include "arrays.h"

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
}