#include<iostream>
enum{red,orange,yellow,green,blue,violet,indigo};
int main()
{
    using namespace std;
    cout<<"Podaj kod koloru(0-6): ";
    int code;
    cin>>code;
    while(code>=red && code<=indigo)
    {
        switch(code)
        {
            case red: cout<<"Jest usta byly czerwone\n";break;
            case orange: cout<<"Jej wlosy byly pomaranczowe\n";break;
            case yellow: cout<<"Jej buty byly zolte\n";break;
            case green: cout<<"Jej paznokcie byly zielone\n";break;
            case blue: cout<<"Jej dres byl niebieski\n";break;
            case violet: cout<<"Jej oczy byly fiolkowe\n";break;
            case indigo: cout<<"Byla w nastroju indigo\n";break;
        }
        cout<<"Podaj kod koloru: ";
        cin>>code;
    }
    cout<<"Do widzenia:\n";
    cin.get();
    cin.get();
    return 0;
}