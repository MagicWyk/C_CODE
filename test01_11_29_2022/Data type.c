#include <stdio.h>

int main()
{         
									   //数据类型的概括  
	printf("%d\n", sizeof(char));      //字符型          1字节 bate
	printf("%d\n", sizeof(float));     //单精度浮点型     4
	printf("%d\n", sizeof(int));       //整型            4
	printf("%d\n", sizeof(short));     //短整型          2
	printf("%d\n", sizeof(long));      //长整型          4
	printf("%d\n", sizeof(double));    //双精度浮点型     8
	return 0;
}