#include<iostream>
    using namespace std;
void showmenu();
void report();
void comfort();
int main()
{
    showmenu();
    char choice;
    cin>>choice;
    while(choice !='Q' && choice!='q')
    {
        switch(choice)
        {
            case 'a':
            case 'A': cout<<"\a\n";
                    break;
            case 'r':
            case 'R': report();
                    break;
            case 'l':
            case 'L': cout<<"Szef nigdzie nie wychodzil.\n";
                    break;
            case 'c':
            case 'C': comfort();
                    break;
            default: cout<<"Nie ma takiej opcji!!!\n";
        }
        showmenu();
        cin>>choice;
    }
    cout<<"Do zobaczenia!\n";
    cin.get();
    cin.get();
    return 0;
}
void showmenu()
{
    cout<<"Wybierz 1,2,3,4 albo 5:\n"
    "1) alarm               2)raport\n"
    "3) alibi               4)luzik\n"
    "5) koniec\n";
}
void report()
{
    cout<<"To byl naprawde wspanialy tydzien. \n"
    "Sprzedarz wzrosla o 120%, wydatki zmalaly o 35%.\n";
}
void comfort()
{
    cout<<"Pracownicy uwazajacie za najfajniejszego\n"
    "dyrektora w calej branzy. Zarzad sadzi, ze jestes\n"
    "najlepszym dyrektorem w calym przemysle.\n";
}