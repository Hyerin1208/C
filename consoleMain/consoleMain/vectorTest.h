#pragma once
#include <iostream>
#include <vector> // ���Ͷ�� STL�����̳ʸ� ������ ��Ŭ��� �ؾ���

using namespace std;

class vectorTest
{
private:
	vector<int>           _vNum;
	vector<int>::iterator _viNum;

public:
	vectorTest();
	~vectorTest();
};

