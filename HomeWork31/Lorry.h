#pragma once
class Lorry
{
protected:
	int carry_cappacity;
public:
	Lorry();
	Lorry(string name,int max_speed, int price, int year_release, int carry_cappacity);

	int GetCarryingCappacity();
	void SetCarryingCappacity(int carry_cappacity);
};

