# Attendance-Manager

A program to manage student attendance by automatically creating a file and writing data
Here is a list of functions provided by this utility(school_utils.h)

## Student(class)

    A basic student calss containing admission number,class and name

### functions

    display() :- displays student information

    gather() :-  Takes the information input from console

## fileop(class)

    Provides file operations on student class; contains a single variable f_name the name of the file currently working upon

### functions

    write_student(student) :- takes input a student object  and appends it to the current file

    get_num():- returns the total number of students in the curent file

    read_student() :-returns an array (pointer) of students in the given file

    create() :- it does not create a file but sets f_name to {{date}} + "Attendance"

    clear() :- Clears the content of the working file

    openfile(string) :- sets f_name to given string

(: Feel free to ask for more utility functinos :)
