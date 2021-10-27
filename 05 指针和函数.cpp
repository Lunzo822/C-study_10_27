//#include<iostream>
//
//using namespace std;
//
////自定义一个两数交换的函数
////不用指针
//void swap01(int x,int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
////使用指针
//void swap02(int * x,int * y)
//{
//	int temp = * x;
//	* x = * y;
//	* y = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	swap01(a, b);		//形参的值改变了，但是实参没有交换
//	//值传递不可以改变实参的值
//	cout<<"swap01 a = "<<a<<endl;
//	cout<<"swap01 b = "<<b<<endl;
//
//	swap02(&a, &b);		//指针传的是地址
//	//地址传递可以改变实参的值
//	//形参和实参的值都交换了
//	cout<<"swap02 a = "<<a<<endl;
//	cout<<"swap02 b = "<<b<<endl;
//
//	system("pause");
//	return 0;
//}