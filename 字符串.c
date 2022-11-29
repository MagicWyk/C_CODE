//#include<stdio.h>
//#include<string.h>
//int main()
//{         //字符数组就是由一串字符构成的元素
//	      //字符串的结尾隐藏了一位 \0 的字符
//	//char arr[] = "wykkk\0";    //有六个字符 /0 结束的标志	
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b', 'c' };
//
//	printf("%s\n", arr1);   //arr1打印出来有四个字符  /0 
//	printf("%s\n", arr2);   //arr2打印出来有三个字符  因为没有/0 结束标志 所以打印出乱码
//	printf("%d\n", strlen(arr1));  //打印出字符长度为3
//	printf("%d\n", strlen(arr2));  //打印出字符长度为 随机数  因为没有/0 结束标志
//
//	return 0;
//}