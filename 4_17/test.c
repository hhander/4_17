#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////#include<graphics.h>
////#include<mmsystem.h>
////#pragma comment(lib,"winmm.lib")
//
//
//void test(int arr[][5])
//{
//	;
//}
//void test1(int(*p)[])
//{
//	;
//}
//
////int main()
////{
////	int arr[3][5] = { 0 };
////	/*test(arr);*/
////	test1(arr);
////
////
////
////	return 0;
////}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//#include<conio.h>
//int main()
//{
//	/*int a = 10;
//	int b = 20;*/
//	/*printf("%d", Add(a, b));*/
//	/*printf("%#x", Add);*/
//	/*if (_kbhit())
//	{
//		if (_getch() == 72)
//		{
//			printf("success");
//		}
//	}*/
//	//int(*p)(int,int) = Add;
//	//int ret = (*p)(3, 4);
//	//printf("%d", ret);
//	return 0;
//}


//int main()
//{
//	if (_getch() == 72)
//	{
//		printf("success");
//	}
//	else
//	{
//		printf("fail");
//	}
//	return 0;
//}


//int(*(*p)[5])(int, int);





//void Bubble_sort(int arr[], int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}


struct Stu
{
	char name[30];
	int age;
};




void swap(char* dest, char* sour,int width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *dest;
		*dest = *sour;
		*sour = tmp;
		dest++;
		sour++;
	}
}



void my_qsort(void* base, int length, int width, int(*cmp)(void* a, void* b))
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (cmp((char*)base + j*width,(char*)base + width*(j+1)>0))
			{
				swap((char*)base + j * width, (char*)base + width * (j + 1),width);
			}

		}
	}

}


int cmp_int(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}


int cmp_name(void* a, void* b)
{
	return strcmp(((struct Stu*)a)->name, ((struct Stu*)b)->name);
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10} };

	my_qsort(s, 3, sizeof(struct Stu), cmp_name);

	/*my_qsort(arr, 10, 4, cmp_int);*/




	/*Bubble_sort(arr, sz);*/
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", s[i].age);
	}
	return 0;
}