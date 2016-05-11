/*
 * Name        : lab_9.cpp
 * Author      : FILL IN
 * Description : Building a Spaceship Class
 */
#include "lab_9.h"

// CODE HERE -- CLASS FUNCTION DEFINITIONS
void Spaceship::set_name(string name)
{
    name_ = name;
}

void Spaceship::set_top_speed(double top_speed)
{
    top_speed_ = top_speed;
}

void Spaceship::set_fuel_source(string fuel_source)
{
    fuel_source_ = fuel_source;
}

void Spaceship::set_crew_capacity(int crew_capacity)
{
    crew_capacity_ = crew_capacity;
}

string Spaceship::name() const
{
    return name_;
}

double Spaceship::top_speed() const
{
    return top_speed_;
}

string Spaceship::fuel_source() const
{
    return fuel_source_;
}

int Spaceship::crew_capacity() const
{
    return crew_capacity_;
}

string Spaceship::ToString() const
{
    stringstream ss;
    ss.str();
    ss.setf(std::ios::fixed);
    ss.precision(2);
    ss << name_ <<"\n"
    << "Top Speed:     " << "Warp " << top_speed_ << "\n"
    << "Fuel Source:   " << fuel_source_ << "\n"
    << "Crew Capacity: " << crew_capacity_;
    string ship;
    ship = ss.str();
    return ship;
    
    /*string ship = name_
    "Top Speed:     " << "Warp " << speed
    "Fuel Source:   " << fuel_source_
    "Crew Capacity: " << crew;*/
    

}