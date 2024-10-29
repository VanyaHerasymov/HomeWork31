#include "Lorry.h"
#include <string>
using namespace std;
Lorry::Lorry()
{
    carry_cappacity = 0;
}

Lorry::Lorry(string name,int max_speed, int price, int year_release, int carry_cappacity)
{
    this->carry_cappacity = carry_cappacity;
}

int Lorry::GetCarryingCappacity()
{
    return carry_cappacity;
}

void Lorry::SetCarryingCappacity(int carry_cappacity)
{
    this->carry_cappacity = carry_cappacity;

}
