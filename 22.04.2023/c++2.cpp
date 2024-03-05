#include<iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
}mazur={"mazur",1.88,200},stafin;
int main()
{
    using namespace std;
    inflatable bouquet{"sloneczniki",0.20,12.49};
    inflatable choice;
    cout<<"zmienna bouquet: "<<bouquet.name<<" za "<<bouquet.price<<"\n";
    choice=bouquet;
    cout<<"zmienna choice: "<<choice.name<<" za "<<choice.price<<"\n";
    cin.get();
    cin.get();
    return 0;
}