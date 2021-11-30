#pragma once
#include <iostream>

using namespace std;

class Main
{
private:
	int _hp;
	int _mp;
	//생성자도 오버라이딩이 가능
public:
	mainGame::mainGame()
	{
	}

	mainGame::~mainGame(int hp)
	{
	}

	mainGame::~mainGame(int hp, int mp)
	{
	}

	mainGame::~mainGame()
	{
	}

};