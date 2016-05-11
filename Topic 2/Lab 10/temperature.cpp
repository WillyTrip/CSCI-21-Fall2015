#include "temperature.h"

// CLASS FUNCTION DEFINITIONS GO HERE

Temperature::Temperature()
{
    kelvin_ = 0;
}

Temperature::Temperature(double kelvin)
{
    kelvin_ = kelvin;
}

Temperature::Temperature(double temp, char unit)
{
    if (unit == 'F' || unit == 'f')
    {
        SetTempFromFahrenheit(temp);
    }
    else if (unit == 'C' || unit == 'c')
    {
        SetTempFromCelsius(temp);
    }
    else
    {
        SetTempFromKelvin(temp);
    }
}

void Temperature::SetTempFromKelvin(double kelvin)
{
    kelvin_ = kelvin;
}

void Temperature::SetTempFromCelsius(double celcius)
{
    kelvin_ = celcius + 273.15;
}

void Temperature::SetTempFromFahrenheit(double fahrenheit)
{
    kelvin_ = (5.0 * (fahrenheit - 32) / 9) + 273.15;
}

double Temperature::GetTempAsKelvin() const
{
    return kelvin_;
}

double Temperature::GetTempAsCelsius() const
{
    double cel = 0;
    cel = kelvin_ - 273.15;
    return cel;
}

double Temperature::GetTempAsFahrenheit() const
{
    double far = 0;
    far = ((GetTempAsCelsius() * 9.0) / 5) + 32;
    return far;
}

string Temperature::ToString(char unit) const
{
    string converted_temp;
    stringstream ss;
    ss.str();
    ss.setf(std::ios::fixed);
    ss.precision(2);
    string unit1;
    
    if (unit == 'f' || unit == 'F')
    {
        unit1 = ("Fahrenheit");
    }
    else if (unit == 'c' || unit == 'C')
    {
        unit1 = ("Celsius");
    }
    else
    {
        unit1 = ("Kelvin");
    }
    
    switch (unit)
    {
        case 'f' :
        ss << GetTempAsFahrenheit() << " " << unit1;
        converted_temp = ss.str();
        return converted_temp;
        break;
        
        case 'F' :
        ss << GetTempAsFahrenheit() << " " << unit1;
        converted_temp = ss.str();
        return converted_temp;
        break;
        
        case 'C' :
        ss << GetTempAsCelsius() << " " << unit1;
        converted_temp = ss.str();
        return converted_temp;
        break;
        
        case 'c' :
        ss << GetTempAsCelsius() << " " << unit1;
        converted_temp = ss.str();
        return converted_temp;
        break;
        
        case 'k' :
        ss << kelvin_ << " " << unit1;
        converted_temp = ss.str();
        return converted_temp;
        break;
        
        case 'K' :
        ss << kelvin_ << " " << unit1;
        converted_temp = ss.str();
        return converted_temp;
        break;
        
        default :
        converted_temp = ("Invalid Unit");
        return converted_temp;
    }
}