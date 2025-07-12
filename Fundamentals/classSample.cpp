#include<iostream>
using namespace std;

class NewClass{
    public:
       int data=10;
       int rollno;
       void getdata();
};

void NewClass :: getdata()
{
    cout<<"data is"<<data<<endl;
    rollno=20;
    cout<<"roll no"<<rollno<<endl;
}

int main()
{
    NewClass n;
    n.getdata();
    return 0;
}