#include <iostream>

using namespace std;

int main()
{
	// 포인터란 변수의 주소값을 가르키는 것.
	//int b = 4;
	//int* c;
	//
	//cout << "b의 값은 : " << b << endl;

	//c = &b;

	//cout << "&b의 값은 : " << &b << endl;

	//*c = 7;

	//cout << "b의 값은 : " << b << endl;

	// int 배열 5개 선언
	/*
	int num[5];
	                                      // 4바이트
	num[0] = 1; // 1000(임의의 번지수) + sizeof(int) * 0
	num[1] = 2; // 1000 + sizeof(int) * 1
	num[2] = 3; // 1000 + sizeof(int) * 2
	num[3] = 4;
	num[4] = 5;
	*/
	// 별짓기
	/*
	const char* star = "*****";

	for (int i = 0; i < 5; i++)
	{
		cout << star + i << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << star + 4 - i << endl;
	}
	*/
	// 더블포인터 : 포인터를 가르키는 포인터 
	// int** d;

	return 0;
}