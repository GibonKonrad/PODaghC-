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
    inflatable guest{"Marcin",1.88,230};
    inflatable pal{"Piotr",1.90,500};
    cout<<"Wpisz na swoja liste gosci jeszcze: "<<guest.name<<"oraz"<<pal.name<<"\n";
    cout<<"Mozesz ich miec oboje za: "<<guest.price+pal.price<<"zl";
    pal.name[2];
    cin.get();
    cin.get();
    return 0;
}