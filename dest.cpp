#include<iostream>
using namespace std;
class student
{
    public:
    student()
    {
        cout<<"constructor";
    }
    ~student()
    {
        cout<<"obj destructor";
    }
};
int main()
{
    cout<<"main function start";
    student s;
    cout<<"working with obj";
    return 0;
}