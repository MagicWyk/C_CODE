//#include <stdio.h>
//#define max 1000   //define 定义标识符常量 
////作用域和生命周期
////全局变量和局部变量
////局部变量的作用域：就是变量所在的局部范围。
////全局变量的作用域：指的是整个工程。  全局变量在另一个文件中使用要声明 extern 
//int main()
//{
//	//int a = 10;       //此时a为一个变量  可以修改  
//	//const int a = 10;   //当a被const修饰时将成为长变量  虽不能改变 但不是常量 只是具有常属性
//	//int a = max;
//	//printf("%d\n",a);
//	//枚举变量
//	enum sex
//	{
//		male = 3, //这里改变的为 赋初值
//		famale,
//		secret
//	};
//	printf("%d\n", male);   //枚举的初始值默认为0，且为常量不可改变。
//	printf("%d\n", famale);
//	printf("%d\n", secret);
//	return 0;
//}