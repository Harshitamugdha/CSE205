#include <bits/stdc++.h>
using namespace std;
    class Student{
        //public:
        private:
        string name;
        int age;
        int roll_no;
        public:
        void getDetail(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Roll no: "<<roll_no<<endl;
        }
        void SetDetail(){
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter roll no: ";
            cin>>roll_no;
        }
    };
int main(){
    Student s1,s2,s3;
    s1.SetDetail();
    s2.SetDetail();
    s3.SetDetail();
    // s1.name="Harshita";
    // s1.age=19;
    // s1.roll_no=36;
    // s2.name="Aditya";
    // s2.age=19;
    // s2.roll_no=25;
    // s3.name="Abhishek";
    // s3.age=19; 
    // s3.roll_no=30;
    s1.getDetail();
    s2.getDetail();
    s3.getDetail();
    return 0;
}