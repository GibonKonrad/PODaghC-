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
    
        inflatable* ps=new inflatable;
        cout<<"Podaj nazwę dmuchanej zabawki: ";
        cin.get(ps->name,20);
        cout<<"Podaj objetosc w stopniach szesciennych: ";
        cin>>(*ps).volume;
        cout<<"Podja cene: ";
        cin>>ps->price;
        cout<<"Nazwa: "<<ps->name;
        cout<<"Objetosc: "<<ps->volume<<" stop szesciennych\n";
        cout<<"Cena: "<<(*ps).price<<"zl"<<endl;
        cin.get();
        cin.get();
         delete ps;
    return 0;
}