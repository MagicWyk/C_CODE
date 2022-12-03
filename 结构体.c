//#include <stdio.h>
//
///*创建学生的结构体*/
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct stu a = {"俞乐天", 20, 90.5}; //结构体的初始化和创建
//	/*普通对结构体内成员变量的输出*/
//	printf("1 :%s %d %f\n", a.name, a.age, a.score);
//	struct stu* p = &a;
//	/*通过指针对结构体内成员变量的输出*/
//	printf("2 :%s %d %f\n", (*p).name, (*p).age, (*p).score);
//	/*通过指针指向对结构体内成员变量的输出*/
//	printf("3: %s %d %f\n", p->name, p->age, p->score);
//
//
//	return 0;
//}