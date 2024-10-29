#include "Car.h"

Car::Car()
{
    year_release = 0;
}

Car::Car(string name,int max_speed, int price, int year_release)
{
    this->year_release = year_release;
}

void Car::SetYear_release()
{
    this->year_release = year_release;

}

int Car::getYear_release() const
{
    return year_release;
}
