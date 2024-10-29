#pragma once
#include "Bicycle.h"
class Car :public Bicycle
{
protected:
	int year_release;
public:
	Car();
	Car(string name,int max_speed, int price, int year_release);


	void SetYear_release();
	int getYear_release()const;

};

