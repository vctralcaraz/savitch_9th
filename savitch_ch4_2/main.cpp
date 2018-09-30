/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Victor Alcaraz
 * Created on September 28, 2018, 9:37 PM
 * Purpose: Savitch Chapter 4 Problem 2
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
    float c1_liters_used, c1_gallons_used, c1_miles_traveled, c1_mpg; // car 1 variables
    float c2_liters_used, c2_gallons_used, c2_miles_traveled, c2_mpg; // car 2 variables
    int answer;
    
    while(true){
        c1_liters_used = 0.0;
        c1_gallons_used = 0.0;
        c1_miles_traveled = 0.0;
        c1_mpg = 0.0;
        
        c2_liters_used = 0.0;
        c2_gallons_used = 0.0;
        c2_miles_traveled = 0.0;
        c2_mpg = 0.0;
        
        answer = 0;
        
        cout << "Any positive integer to start the program." << endl;
        cout << "Any negative integer (or zero) to end the program." << endl;
        cin >> answer;
        
        if(answer <= 0){
            break;
        }
        
        cout << endl << "You will input the values of 2 cars. This program will\n";
        cout << "calculate which car has the better MPG." << endl << endl;
        
        cout << "[Car 1 values]" << endl;
        cout << "How many liters of gasoline did car 1 consume?" << endl;
        cin >> c1_liters_used;
        
        cout << endl << "How many miles did car 1 travel?" << endl;
        cin >> c1_miles_traveled;
        
        c1_gallons_used = calculate_gpl(c1_liters_used);
        c1_mpg = calculate_mpg(c1_gallons_used, c1_miles_traveled);
        
        cout << endl << "[Car 2 values]" << endl;
        cout << "How many liters of gasoline did car 2 consume?" << endl;
        cin >> c2_liters_used;
        
        cout << endl << "How many miles did car 2 travel?" << endl;
        cin >> c2_miles_traveled;
        
        c2_gallons_used = calculate_gpl(c2_liters_used);
        c2_mpg = calculate_mpg(c2_gallons_used, c2_miles_traveled);
        
        cout << endl;
        cout << "Car 1 traveled " << c1_miles_traveled << " miles with ";
        cout << c1_liters_used << " liters used." << endl;
        cout << "That is " << c1_gallons_used << " gallons of gasoline." << endl;
        cout << "Car 1 had an average " << c1_mpg << " MPG." << endl << endl;
        
        cout << "Car 2 traveled " << c2_miles_traveled << " miles with ";
        cout << c2_liters_used << " liters used." << endl;
        cout << "That is " << c2_gallons_used << " gallons of gasoline." << endl;
        cout << "Car 2 had an average " << c2_mpg << " MPG." << endl << endl;
        
        if(c1_mpg > c2_mpg){
            cout << "Car 1 has the better MPG" << endl;
        } else if(c1_mpg == c2_mpg){
            cout << "Both cars have identical MPG ratings" << endl;
        } else {
            cout << "Car 2 has the better MPG" << endl;
        }
        cout << endl;
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