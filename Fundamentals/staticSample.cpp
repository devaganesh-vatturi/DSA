// "Static members of a class are allocated memory independently of any object, 
// and their memory is assigned once when the class is loaded or the program starts (not per object)."
#include<iostream>
using namespace std;
class StaticClass{
    public:
    static int data;
    StaticClass()
    {
        data++;
    }
    static void callit()
    {
        cout<<"we can call this function without object";
    }
};
int StaticClass :: data=0; 
int main()
{
    StaticClass P,Q,R,S;    
    cout<< StaticClass::data<<endl;
    StaticClass :: callit();
    return 0;
}
