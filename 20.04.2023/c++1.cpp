#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
        char animal[20]="niedzwiedz";
        const char*bird="myszolow";
        char*ps;

        cout<<animal<<"oraz";
        cout<<bird<<"\n";
        cout<<ps<<"\n";

        cout<<"Podaj rodzaj zwierzecia: ";
        cin>>animal;

        ps=animal;
        cout<<ps<<"i!\n";
        cout<<"Przed uzyciem strcpy():\n";
        cout<<animal<<"Pod adresem: "<<(int*)animal<<endl;
        cout<<ps<<"Pod adresem: "<<(int*)animal<<endl;

        ps=new char[strlen(animal)+1];
        strcpy(ps,animal);
        cout<<"Po użyciu strcpy():\n";
        cout<<animal<<"pod adresem "<<(int*)animal;
        cout<<ps<<"pod adresem "<<(int*)ps<<endl;
        delete [] ps;
           ps=animal;
        cout<<animal<<"pod adresem"<<(int*)animal<<endl;
        cout<<ps<<"pod adresem"<<(int*)ps<<endl;

        ps=new char[strlen(animal)+1];
        strcpy(ps,animal);
            cout<<"po czyms: ";
            cout<<ps;
        delete [] ps;

        char cos[20]{"marcin mazur"};
        strncpy(cos,"mazur",3);
        cout<<cos;
        cin.get();
        cin.get();



     
    return 0;
}