#include <fstream>
#include <iostream>
#include <string>
using namespace std;
class student
{
public:
    int adn;
    int cls;
    string name;

    /*
    @param a admission number
    @param c class
    @param n name
    */
    student(int a, int c, string n);

    student() {}

    /*Displays student information*/
    void display();
    /*gathers student information*/
    void gather();
};

class fileop
{
    string f_name = __DATE__ "Attendance";

public:
    fileop() {}

    /*
    *sets f_name to given string
    */
    fileop(string fn);
    
    /**@brief writes the given student details to the file (f_name)*/
    void write_student(student st);

    /*@return total number of students present in f_name*/
    int get_num();

    /*@return returns an array (pointer) of students in the given file*/
    student *read_student();

    /*sets f_name to current date + Attendance*/
    void create();

    /*Clears the content of the current file*/
    void clear();

    /*Change f_name*/
    void openfile(string f);
};
