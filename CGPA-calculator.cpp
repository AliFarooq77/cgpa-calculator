/***************************************************
 *
 * Description: Program to calculate CGPA
 * Author: Muhammad Ali Farooq
 * Registration No: FA21-BCE-005
 *
 ***************************************************/


#include <iostream>

int main(void){

	int semesterLimit = 0;
	int noOfCourses = 0;
	int creditHours = 0;
	double gradePoint = 0;
	double weight = 0;
	double weightSum = 0;
	int creditSum = 0;
	double GPA = 0;
	int i = 1;

	std::cout << "******************************************\n";
    std::cout << "COMSATS University Islamabad, Lahore Campus\n";
    std::cout << "CGPA Calculator\n";
    std::cout << "Made by: Muhammad Ali Farooq\n";
	std::cout << "******************************************\n\n";
	std::cout << "Uptill which semester(exclusive) do you want to calculate CGPA?: ";
	std::cin >> semesterLimit;

	while(i != semesterLimit){
		std::cout << '\n' <<"Semester " << i << '\n';
		std::cout << "Enter the number of courses: ";
		std::cin >> noOfCourses;
		for(int j = 1; j <= noOfCourses; j++){
			std::cout << '\n' <<"Course #" << j << '\n';

			std::cout << "Credit hours: ";
			std::cin >> creditHours;

			std::cout << "G.P (Grade Point): ";
			std::cin >> gradePoint;

			weight = creditHours * gradePoint;
			weightSum += weight;
			creditSum += creditHours;
		}
		i++;
	}
	GPA = weightSum / creditSum;
	std::cout << "GPA: " << GPA;

	return 0;
}
