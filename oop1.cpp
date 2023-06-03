#include <iostream>
using namespace std;

class student{
    public:

    int rollnumber;
    int age;

};

int main(){
    //create object statically
    student s1;
    s1.rollnumber=101;
    s1.age=21;

    cout<<s1.rollnumber<<endl;
    cout<<s1.age<<endl;
    
    //creating object dynamically

    student *s2=new student;
    s2 -> age=22;
    cout<<s2 -> age;
    
}
