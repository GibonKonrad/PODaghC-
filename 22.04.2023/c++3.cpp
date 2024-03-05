#include<iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    using namespace std;
        inflatable guests[2]
        {
            {"mazur",1.88,230},{"stafin",1.98,500}
        };
        cout<<"Goscie tacy jak: "<<guests[0].name<<" oraz "<<guests[1].name<<" razem maja: "<<guests[0].volume+guests[1].volume<<" stop szesciennych";
        cin.get();
        cin.get();
    return 0;
}