#include<iostream>
const int ArSize=20;
int main()
{
    using namespace std;
    char name[ArSize];
    cout<<"Podaj swoje imie: ";
    cin>>name;
    cout<<"Oto twoje imie ustawione pionowo jako kody ASCII :\n";
    int i=0;
    while(name[i]!='\0')
    {
        cout<<int(name[i])<<"i znak: "<<name[i]<<endl;
        i++;
    }
    cin.get();
    cin.get();
    return 0;
}