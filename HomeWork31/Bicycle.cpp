#include "Bicycle.h"

Bicycle::Bicycle()
{
    max_speed = 0;
    price = 0;
}

Bicycle::Bicycle(string name,int max_speed, int price)
{
    this->name = name;
    this->max_speed = max_speed;
    this->price = price;
}

void Bicycle::SetSpeed(int max_speed)
{
    this->max_speed = max_speed;
    
}

void Bicycle::SetPrice(int price)
{
    this->price = price;

}

int Bicycle::getPrice() const
{
    return price;
}

int Bicycle::getMax_speed() const
{
    return max_speed;
}

void Bicycle::SetName(string name)
{
    this->name = name;
}

string Bicycle::Getname() const
{
    return name;
}
