//#include <stdio.h>
//
///*����ѧ���Ľṹ��*/
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct stu a = {"������", 20, 90.5}; //�ṹ��ĳ�ʼ���ʹ���
//	/*��ͨ�Խṹ���ڳ�Ա���������*/
//	printf("1 :%s %d %f\n", a.name, a.age, a.score);
//	struct stu* p = &a;
//	/*ͨ��ָ��Խṹ���ڳ�Ա���������*/
//	printf("2 :%s %d %f\n", (*p).name, (*p).age, (*p).score);
//	/*ͨ��ָ��ָ��Խṹ���ڳ�Ա���������*/
//	printf("3: %s %d %f\n", p->name, p->age, p->score);
//
//
//	return 0;
//}