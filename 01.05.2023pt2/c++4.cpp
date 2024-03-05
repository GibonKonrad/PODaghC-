#include<iostream>
const int ArSize=20;
int main()
{
    using namespace std;
    char name[ArSize];
    cout<<"Prosze podac swoje imie: ";
    cin>>name;
    cout<<"oto twoje imie: ";
    int i=0;
    while(name[i]!='\0')
    {
        cout<<name[i];
    }
    return 0;
}