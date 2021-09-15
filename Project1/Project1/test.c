#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main() 初学
//{
//	int people = 100;
//		people = people + 1
//		; printf("%d", people);
//		return 0;
//}
//{
//	int a = 0;
//	int b = 1;
//	int sum = 0;
//		scanf("%d %d", &a,& b);
//		sum = a + b;
//			printf("%d",sum);
//			return 0;
//}
//int main()   乘法运算
//{
//	int a = 10;
//	int b = 6;
//	int sum = 0;
//	
//		scanf("%d %d", & a, & b);
//		sum = a * b;
//		printf("%d", sum);
//		return 0;
//}
//int main()  加法运算
//{
//	int a = 0;
//	int d= 0;
//	int s = 10;
//	const int h = 4;
//	scanf("%d %d", & a, &d);
//	s = a + d;
//	printf("%d", s);
//
//
//
//	return 0;
//}
//enum sb   枚举函数 
//{
//	dsb,
//	xsb,
//	sssb
//};
//int main()
//{
//	printf("%d\n", dsb);
//	printf("%d\n", xsb);
//	printf("%d", sssb);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int n = 5;
//	scanf("%d %d", &a, &b);
//	n = a + b;
//	printf("%d", n);
//		return 0;
//}
//enum age  枚举函数
//{
//	san,
//	er,
//	yi,
//};
//int main()    打印字符串  \0代表终止
//{
//	char arr[] = { 'a','b' ,'\0'};  分开打印要加\0
//	char arr1[] = "abc";
//	printf("%s\n", arr1);
//		
//	printf("%s", arr);
//	return 0;
//}
//int main()  /*ASCII表*/
//{
//	printf("%d",'\143');\加八进制数字代表一个字符
//	return
//		0;
//}复习一下加法
int main()
{
	int a = 1;
	int b = 4;
	int n = 4;
	printf("请输入两个数字");
	scanf("%d %d", &a, &b);
	n = a + b;
	printf("%d", n);

	return 0;
}