/* Program name: M01 Programming Assignment 1
* Author: Ronald Hernandez
* Date last updated: 10/25/2024
* Purpose: For this assignment you make a class that describes a notebook.
The notebook will have a width and height that are doubles.
The number of pages will be in an int. There will be strings describing
the paper type, format, paper color, cover type, and cover design.
The uml diagram for class has been provided below. This class will be unit
tested, that means that you must spell the class information exactly as it
is specified in the diagram.
*/

#include <iostream>
#include <string>
#include <iomanip> 
#include <cmath>
#include <math.h>
#include <stdio.h>
#include <cstdlib>
#include <limits>
#include <fstream>
#include <vector>
#include "notebook.h"
#include "main.cpp"
#include "notebook.cpp"

int main()
{
    //Variables
    std::string coverDesign, colorType, paperColor, pageFormat, paperType;
    int numberOfPages;
    double notebookHeight, notebookWidth;

    //User inputs
    std::cout << "Enter the name of the cover color or design:" ;
    std::getline(std::cin, coverDesign);

    std::cout << "Enter the cover type: ";
    std::getline(std::cin, coverType);

    std::cout << "Enter the paper color: ";
    std::getline(std::cin, paperColor);

    std::cout << "Enter the notebook format: ";
    std::getline(std::cin, pageFormat);

    std::cout << "Enter the type of paper: ";
    std::getline(std::cin, paperType);

    std::cout << "Enter the number of pages: ";
    std::cin >> numberOfPages;

    std::cout << "Enter the notebook height: ";
    std::cin >> notebookHeight;

    std::cout << "Enter the notebook width: ";
    std::cin >> notebookWidth;


    //Output

    return 0;
}

