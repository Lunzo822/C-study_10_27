//#include<iostream>
//
//using namespace std;
//
////�Զ���һ�����������ĺ���
////����ָ��
//void swap01(int x,int y)
//{
//	int temp = x;
//	x = y;
//	y = temp;
//}
//
////ʹ��ָ��
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
//	swap01(a, b);		//�βε�ֵ�ı��ˣ�����ʵ��û�н���
//	//ֵ���ݲ����Ըı�ʵ�ε�ֵ
//	cout<<"swap01 a = "<<a<<endl;
//	cout<<"swap01 b = "<<b<<endl;
//
//	swap02(&a, &b);		//ָ�봫���ǵ�ַ
//	//��ַ���ݿ��Ըı�ʵ�ε�ֵ
//	//�βκ�ʵ�ε�ֵ��������
//	cout<<"swap02 a = "<<a<<endl;
//	cout<<"swap02 b = "<<b<<endl;
//
//	system("pause");
//	return 0;
//}