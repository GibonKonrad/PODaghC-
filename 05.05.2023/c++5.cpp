#include<iostream>
const char* znacznik[4]
{
    "Wejdz na drzewo",
    "Zejdz z drzewa",
    "No ogolnie stafin",
    "No ogolnie mazur"
};
int main()
{
    using namespace std;
    mazur:cout<<"Podaj litere: ";
    char a;
    cin.get(a);
    cin.get();

        switch(a)
        {
            case 'a': 
            case 'A':cout<<"Stafin"<<endl;
            break;
            case 'b':
            case 'B':cout<<"Mazur"<<endl;
            break;
            case 'c':
            case 'C': cout<<"Drzewo"<<endl;
            break;
            case 'd':
            case 'D': cout<<"Drzewov2"<<endl;
            break;
            default:
            goto mazur;
        
        }
    
    cin.get();
    cin.get();
    return 0;
}