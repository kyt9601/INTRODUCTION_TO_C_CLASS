#include <stdio.h>

struct value
{
	int x;
	int y;
};

void change(struct value *p1, struct value *p2);

int main(void)
{
	struct value value1 = {1, 2};
	struct value value2 = {3, 4};

	printf("value1={%d,%d},value2={%d,%d}\n", value1.x, value1.y, value2.x, value2.y);

	change(&value1, &value2);

	printf("value1={%d,%d},value2={%d,%d}", value1.x, value1.y, value2.x, value2.y);

	return 0;
}

void change(struct value *p1, struct value *p2)
{
	int tx, ty;

	tx = p1->x;
	ty = p1->y;

	p1->x = p2->x;
	p1->y = p2->y;

	p2->x = tx;
	p2->y = ty;
}