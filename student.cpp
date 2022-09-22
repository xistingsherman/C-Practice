#include <iostream>
using namespace std;

class Course {
    string name;
    int id;
};

class Student {
    private:
        string name;
        string address;
        int rollNo;
        Course courses[4];

    public:

        string getName(){
            return name;
        }
        void setName(string n){
            name = n;
        }
        string getAddress(){
            return address;
        }
        void setAddress(string a){
            address = a;
        }
        int getRollNo(){
            return rollNo;
        }
        void setRollNo(int n){
            rollNo = n;
        }
        void setCourses(Course c[4]){
            courses[0] = c[0];
            courses[1] = c[1];
            courses[2] = c[2];
            courses[3] = c[3];
        }

        void setCourses(Course c1, Course c2, Course c3, Course c4){
            courses[0] = c1;
            courses[1] = c2;
            courses[2] = c3;
            courses[3] = c4;
        }
};
 
int main()
{
    Student s;
    s.setName("Patty Jenkins");

    cout << s.getName() << "  " << s.getAddress() << "  " << s.getRollNo()
         << '\n';
}