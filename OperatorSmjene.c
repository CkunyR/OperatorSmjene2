#include <stdio.h>

int main()
{
	int a = -1;
	int b = 0;
	//整数的表示形式有三种：原码、反码、补码（正整数三种情况相同）
	//存到内存中的为补码
	//10000000000000000000000000000001--原码
	//11111111111111111111111111111110--反码（符号位不变，其他位按位取反）
	//11111111111111111111111111111111--补码（反码+1）
	b = a >> 1;

	printf("%d\n", b);
	return 0;
}