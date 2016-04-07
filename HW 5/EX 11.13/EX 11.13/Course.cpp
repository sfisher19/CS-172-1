//Shaun Fisher
//03-31-2016
//HW 5: EX 11.13
//CS 172-2

#include <iostream>
#include "Course.h"
using namespace std;

Course::Course(const string& courseName, int capacity)//Overload constructor
{
	numberOfStudents = 0;//Starting number of students in the course
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	delete[] students;//Clears out all of the students from the originally created course
}

string Course::getCourseName() const
{
	return courseName;//Displays the name of the course
}

void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name;//As the numberOfStudents value in the array of students increase,
										//a new name gets put into the array at that value.
	numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
	students[numberOfStudents] = delete[numberOfStudents];//The value that numberOfStudents is at,
															//The course would drop that student, and
															//Lower the numberOfStudents that are enrolled in the class.
	numberOfStudents--;
}

string* Course::getStudents() const
{
	return students;//Get the names of students that are in the course
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;//Returns the number of students that are in the course
}

int Course::doubleCapacity(const int* list, int size)
{
	static int doublesize = size * 2;//doublesize equals the quantity of size times 2.
	int* list = new int[doublesize];//The new size of the array is doublesize.

	for (int i = 0; i < size; i++)//Putting in the original values of the array into the new array
	{
		list = list[i];
	}

	return list;
}