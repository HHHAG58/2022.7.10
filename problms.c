#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ָ�������1
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));//2 5 
//	return 0;
//}

//ָ�������2(?����ĺ���ʦ���Ĳ�һ��)
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//
////����p��ֵΪ0x100000
////��֪�ṹ��Test���͵ı�����С��20���ֽ�
////���������
//
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//14
//	printf("%p\n", (unsigned long)p + 0x1);//01
//	printf("%p\n", (unsigned int*)p + 0x1);//04
//
//	return 0;
//}

//ָ�������3(?���������쳣)
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int *)(&a + 1);//4
//	int* ptr2 = (int *)((int)a + 1);//2
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//ָ�������4
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);//1
//	 
//	return 0;
//}

//ָ�������5
int main()
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	//FFFFFFFFFFFFFFFC,-4
	return 0;
}