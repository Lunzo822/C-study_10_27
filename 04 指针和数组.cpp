//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	//利用指针访问数组中的元素
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	cout<<"第一个元素："<<arr[0]<<endl;
//
//	//利用指针访问
//	int * p = arr;
//	for(int i = 0;i<10;i++)
//	{
//		//利用指针访问数组元素，首先访问的是数组中的第一个元素
//		cout<<"数组中的第"<<i+1<<"个元素是："<<*p<<endl;
//		p++;//通过p++可以使指针向后偏移4个字节，使指针依次访问元素
//	}
//
//	system("pause");
//	return 0;
//}