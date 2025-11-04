#include <bits/stdc++.h>
using namespace std;
//in struct eacgh member has its own memory
//in union all members share the same memory location
//for struct size is sum of all members
//for union size is size of largest member
struct student{
    string name;
    int age;
    int Class;
    void section(){
        cout<<"B";
    }
};
union employee{
    char name[20];
    int id;
};
enum Weekdays{
    MONDAY=1,
    TUESDAY=2,
    WEDNESDAY=3,
    THURSDAY=4,
    FRIDAY=5,
    SATURDAY=6,
    SUNDAY=7
};
int main(){
    student s1;
    s1.name="Akshit";
    s1.age=16;
    s1.Class=11;
    s1.section();
    employee e1;
    strcpy(e1.name,"Rehan");
}