#include "school_util.h"

student::student(int a, int c, string n)
{
    adn = a;
    cls = c;
    name = n;
}
void student::display()
{
    cout << "Id " << adn << endl;
    cout << "Name " << name << endl;
    cout << "Class " << cls << endl;
}
void student::gather()
{
    cout << "\nEnter your admission number : ";
    cin >> adn;
    cout << "\nEnter your class : ";
    cin >> cls;
    cout << "\n Enter your name : ";
    cin >> name;
    cout << endl;
}

fileop::fileop(string fn)
{
    f_name = fn;
}
void fileop::write_student(student st)
{

    fstream out;
    out.open(f_name, ios_base::app | ios_base::out);
    out << "###\n";
    out << st.adn << endl;
    out << st.name << endl;
    out << st.cls << endl;
    out.close();
}
int fileop::get_num()
{
    int n = 0;
    ifstream in(f_name);
    if (!in.good())
    {
        return -1;
    }
    string a = "";
    while (in.eof() == 0)
    {
        getline(in, a);
        if (a == "###")
        {
            n++;
        }
        a = "";
    }
    in.close();
    return n;
}
student* fileop::read_student()
{
    string a;
    int n = get_num();
    student *s = new student[n];
    ifstream in(f_name);
    n = 0;
    while (in.eof() == 0)
    {
        getline(in, a);
        if (a == "###")
        {
            // getline(in,a);
            getline(in, a);
            s[n].adn = stoi(a);
            getline(in, a);
            s[n].name = a;
            getline(in, a);
            s[n].cls = stoi(a);
            n++;
        }
    }
    in.close();
    return s;
}
void fileop::create()
{
    f_name = __DATE__ " Attendance";
}
void fileop::clear()
{
    ofstream in(f_name);
    in << "";
    in.close();
}
void fileop::openfile(string f)
{
    f_name = f;
}
