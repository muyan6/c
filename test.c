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
//int main()
//{
//	int a = 1;
//	int b = 4;
//	int n = 4;
//	printf("请输入两个数字");
//	scanf("%d %d", &a, &b);
//	n = a + b;
//	printf("%d", n);
//
//	return 0;
//选择语句
//int main()
//{
//	int input = 0;
//	printf("还能保持对生活的向往吗？(1/0)");
//	scanf("%d", &input);
//	if (input == 1)    //if语句后面不要加；
//	printf("永远热爱\n");
//	
//	else
//		printf("希望改变");
//	return 0;
//
////}
//复习选择语句
//int main()
//{
//	int n = 0;
//	printf("是否想要有钱（0\1)");
//	scanf("%d", &n);
//	if (n == 0)
//		printf("那就努力敲代码");
//	else
//		printf("自甘堕落");
//	return 0;
////}
//循环语句
//int main()
//
//{
//	int n = 0;
//	while (n < 100)
//	{
//		printf("加油\n");
//		n++;
//	}
//	if (n == 100)
//	{
//		printf("成功");
//	}
//	return 0; }
//初识函数
//int add(int x,int y,int f)
//{
//	int z = 0;
//	z = x * y+f;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b,&c);
//	int ji = add(a, b,c);
//	printf("%d", ji);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	while (a<100)
//	{
//		printf("继续加油\n");
//		a++;
//	}
//	if (a==100)
//	{
//		printf("已经完成");
//	}
//	return 0;
//}
//自行简单结合一下循环，函数，数组
//int add(int x,int y,int z)
//{
//	int t = 0;
//	t = x * y + z;
//	return t;
//}
//int main()
//{
//	int arr[3] = { 0,1,2};
//	scanf("%d %d %d", &arr[0],& arr[1], &arr[2]);
//	while(arr[0]<10)
//	{
//		arr[0]++;
//	}
//	if (arr[0]>=10)
//	{
//		int n = add(arr[0], arr[1], arr[2]);
//		printf("%d", n);
//	}
//
//
//	return 0;
//}
//计算数组里的个数
//int main()
//{
//	int arr[6] = { 0 };
//	int cf = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", cf);
//	return 0;
//}
//enum age
//{
//	er,
//	san,
//	si
//};
//int main()
//{
//	printf("%d", er);
//
//
//	return 0;
////}
//int main()
//{
//	int arr[10] = { 0 };
//	int cf = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", cf);
//	return 0;
//}
//int add(int x,int y,int z)
//{
//	int t = 0;
//	t = x + y + z;
//	return t;
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int c = 0;
//	printf("请输入三个数字");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < 10)
//		a = 10;
//	int ji = add(a, b, c);
//	printf("%d", ji);
//
//	return 0;
//}
//做点题目
//int main()
//{
//	printf("v   v\n v v\n  v");
//	printf("%d %d %d %d %d ", sizeof(int), sizeof(short),sizeof(char),sizeof(long),sizeof(long long));
//	return 0;
//}
//打印小飞机
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("***********\n");
//	printf("***********\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//
//
//	return 0;
//}
//int main()
//{
//	printf("0%o 0X%x", 1234, 1234);
//	return 0;
//}
//输入成绩
//int main()
//{
//	int arr[3] = { 0,1,2 };
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//	printf("语文%d\n数学%d\n英语%d", arr[0], arr[1], arr[2]);
//	return 0;
//}
//int main()
//{
//	char a ;
//	scanf("%c",&a);
//	printf("%c",a);
//	printf(" %c", a);
//	printf("%c", a);
//	printf("%c",a);
//	printf("%c", a);
//
//	
//	return 0;
//}
//int main()
//{
//	char c=75;
//	printf("%c", c);
//	return 0;
//}.
//int main()
//{
//	printf("%o %X",1234,1234);
//	return 0;
//}
//int main()
//{
//	printf("请输入学号 各科成绩");
//	int arr[] = { '1','2','3' };
//	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
//	printf("The each subject score of No.%d is %d %d", arr[0], arr[1], arr[2]);
//	return 0;
//}
//int main()
//{
//	char a=0;
//	scanf("%c", &a);
//	printf("    %c", a);
//	printf("   %c %c\n", a,a);
//	printf("%c %c %c %c\n", a,a,a,a);
//
//	return 0;
//}
//int main()
//{
//	int a = 0; int b = 0; int c = 0;
//	scanf("%4d%2d%2d",&a,&b,&c);
//	printf("year=%4dmonth=%0dei=%0d", a,b,c);
//	return 0;
//}
//取余数
//int main()
//{
//	int arr[4] = { 0 ,1};
//	int c = 0;
//	scanf("%4d", &c);
//	arr[0] = c % 10;
//	arr[1] = (c/10)%10;
//	arr[2] = (c /100)%10;
//	arr[3] = c / 1000;
//	for (int i=0;i<4;i++)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}
#define add(x,y) x+y
int main()
{
	printf("%d", add(2, 3));
	return 0;
}