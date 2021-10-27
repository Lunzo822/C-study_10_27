//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//const修饰指针 - 常量指针
//	//指针值不可以改，指针的指向可以改
//	const int * p = &a;
//	//* p = 20;		//err，指针的值不可以改
//	p = &b;		//true，指针的指向可以改
//
//	//const修饰常量 - 指针常量
//	//指针的值可以改，指针的指向不可以改
//	int * const p2 = &a;
//	* p2 = 20;		//true，指针的值可以改
//	//p2 = &b;		//err，指针的指向不可以改
//
//	//const修饰指针和常量
//	//指针的值和指向都不可以改
//	const int * const p3 = &a;
//	//* p3 = 20;		//err，指针的值不可以改
//	//p3 = &b;		//err，指针的指向不可以改
//
//	system("pause");
//	return 0;
//}