/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victor Alcaraz
 * Created on September 28, 2018, 9:37 PM
 * Purpose: Savitch Chapter 4 Problem 1
 */

#include <iostream>
#include <iomanip>
using namespace std;

/* Global Variables */
float GALLONS_PER_LITER = 0.264179;

/* Function Declarations */
float calculate_mpg(float, float);
float calculate_gpl(float);

int main(int argc, char** argv) {
    float liters_used, gallons_used, miles_traveled, mpg;
    
    while(true){
        liters_used = 0.0;
        gallons_used = 0.0;
        miles_traveled = 0.0;
        mpg = 0.0;
        
        cout << "How many liters of gasoline did your car consume? Enter a\n";
        cout << "negative number to be done with the program." << endl;
        cin >> liters_used;

        if(liters_used < 0){
            break;
        }

        cout << endl << "How many miles did your car travel?" << endl;
        cin >> miles_traveled;
        
        gallons_used = calculate_gpl(liters_used);
        mpg = calculate_mpg(gallons_used, miles_traveled);
        
        cout << endl;
        cout << "Your car traveled " << miles_traveled << " miles with ";
        cout << liters_used << " liters used." << endl;
        cout << "That is " << gallons_used << " gallons of gasoline." << endl;
        cout << "Your car had an average " << mpg << " MPG." << endl << endl;
    }
    return 0;
}

/****************************************************************
 * Function used to calculate miles per gallon (mpg)
 ****************************************************************/
float calculate_mpg(float gallons_used, float miles_travelled){
    return (miles_travelled / gallons_used);
}

/*****************************************************************
 * Function used to calculate the conversion from liters to gallons
 *****************************************************************/
float calculate_gpl(float liters_used){
    return liters_used * GALLONS_PER_LITER;
}