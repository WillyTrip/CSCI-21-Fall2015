/*
 * Name        : lab_2.cpp
 * Author      : Nick Lopez
 * Description : Using Arithmetic to finish the functions MakeChange() and
 *               LaunchHumanCannonball()
 * Sources     :
 */

// Please note the header above. You need to include the name of the file, the
// author, a description of the program and any sources used
#include "lab_2.h"



/*
 * Given an initial integer value (representing change to be given, such as in a
 * financial transaction), break the value down into the number of quarters,
 * dimes, nickels, and pennies that would be given as change.
 * @param int initial_value - The amount of change to be broken down in pennies.
 * @param int quarters  - The number of quarters that come out of initial_value
 * @param int dimes - The number of dimes that come out of initial_value,
 *                    after quarters have been taken out
 * @param int nickels - The number of nickels that come out of initial_value,
 *                      after quarters and dimes have been taken out
 * @param int pennies - The number of pennies that come out of initial_value,
 *                      after quarters, dimes, and nickels have been taken out
 */
 

 
 
 
 
void MakeChange(int initial_value, int &quarters, int &dimes, int &nickels,
                int &pennies)
{
  quarters = floor(initial_value / 25);
  int after_q = initial_value - (quarters * 25);
  cout << "You have " << quarters << " quaters." << endl;
  
  dimes = floor(after_q / 10);
  int after_d = after_q - (dimes * 10);
  cout << "You have " << dimes << " dimes." << endl;
  
  nickels = floor(after_d / 5);
  int after_n = after_d - (nickels * 5);
  cout << "You have " << nickels << " nickels." << endl;
  
  pennies = after_n;
  cout << "You have " << pennies << " pennies." << endl;
}

/*
 * Computes the horizontal distance traveled by a human cannonball given an
 * initial velocity and launch angle. Simplified -- does not accou9nt for many
 * factors that affect projectile motion.
 * @param double initial_velocity - Represents the initial velocity of the
 *                                  human cannonball in meters/second
 * @param double launch_angle -  Represents the launch angle of the human
 *                               cannonball in degrees
 * @return double  - Represents the horizontal distance the human cannonball
 *                   will travel
 */
double LaunchHumanCannonball(double initial_velocity, double launch_angle) 
{
  // (1) Convert launch_angle from degrees to radians
  //     [radian_angle = launch_angle * (kPI/180)]
  double radian_angle = 0;
  radian_angle = launch_angle * (kPI/180);
  cout << "The launch angle " << launch_angle << " degrees is " << radian_angle << " in radians." << endl;

  //(2) Compute final horizontal/x velocity
  //     [x_velocity = initial_velocity * cos(radian_angle)]
  double x_velocity = 0;
  x_velocity = initial_velocity * cos(radian_angle);
  cout << "The horizontal velocity is " << x_velocity << endl;


  // (3) Compute final vertical/y velocity
  //     [y_velocity = initial_velocity * sin(radian_angle) * -1]
  double y_velocity = 0;
  y_velocity = initial_velocity * sin(radian_angle) * -1;
  cout << "The vertical velocity is "<< y_velocity << endl;


  // (4) Compute time of flight
  //     [flight_time = (y_velocity) * 2 / -9.8]
  double flight_time = 0;
  flight_time = y_velocity *2/-9.8;
  cout << "FT is " << flight_time << endl;

  // (5) Compute horizontal/x distance traveled
  //     [x_distance = x_velocity * flight_time]
  double x_distance = 0;
  x_distance = x_velocity * flight_time;

  // (6) Return horizontal/x distance
 return x_distance; 
}


int main()
{
    int initial_value = 164;
    int q = 0;
    int d = 0;
    int n = 0;
    int p = 0;
    
   MakeChange(initial_value ,q, d, n, p); 
    
    double initial_velocity = 100;
    double launch_angle = 90;
    cout<<LaunchHumanCannonball(initial_velocity,launch_angle);
    
    
}
