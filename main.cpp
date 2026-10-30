#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   string name;
   int id;
   string grade;

   cout << "Enter full name: ";
   getline(cin,name);

   cout << "Enter ID: ";
   cin >> id;

   cout << "Enter Grade: ";
   cin >> grade;

   ofstream student_file;
   student_file.open("student.txt");

   if(student_file.is_open()){
        student_file<<"Name: " << name<< endl;
        student_file<<"ID: " <<id << endl;
        student_file<< "Grade: "<< grade<< endl;
        student_file.close();
        cout << "Done,data saved";
}else
{
    cout<<"Error!file is not opened /n";
}
    return 0;
}
