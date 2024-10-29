#pragma once
#include <string>
using namespace std;

class Bicycle
{
protected:
	string name;
	int max_speed;
	int price;
public:
	Bicycle();
	Bicycle(string name,int max_speed, int price);

	void SetSpeed(int max_speed);
	void SetPrice(int price);

	int getPrice()const;
	int getMax_speed()const;

	void SetName(string name);
	string Getname()const;

};

