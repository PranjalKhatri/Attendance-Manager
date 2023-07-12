#include "ranks.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n = 1;
    cout << "         Welcome to Attendance manager\n";
    fileop f;
    f.create();
    while (n != 0)
    {
        cout << "Choose your operation by typing its serial no." << endl;
        cout << "1. Marke attendance \n";
        cout << "2. View Todays attendance sheet\n";
        cout << "3. View attendance sheet of a particular date\n";
        cout << "4. Get total headcount\n";
        cout << "0. End\n";
        cin >> n;
        system("cls");
        switch (n)
        {
        case 1:
        {
            student s;
            s.gather();
            f.write_student(s);
        }
        break;
        case 2:
        {
            int n = f.get_num();
            student *s = f.read_student();
            for (int i = 0; i < n; i++)
            {
                s[i].display();
                cout << endl;
            }
        }
        break;
        case 3:
        {
            string na = "";
            cout << "Name of file ? \n";
            cin.ignore();
            getline(cin,na);
            f.openfile(na);
            int n = f.get_num();
            student *s = f.read_student();
            for (int i = 0; i < n; i++)
            {
                s[i].display();
                cout << endl;
            }
            f.create();
        }
        break;
        case 4:
        {
            int t = f.get_num();
            cout << "Total : " <<t <<endl;
        }
        break;
        case 0:
            break;
        default:
            cout << "Enter a valid choice." << endl;
            break;
        }
    }

    return 0;
}
