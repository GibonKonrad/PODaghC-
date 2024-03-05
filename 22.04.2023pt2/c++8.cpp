#include<iostream>
int main()
{
    using namespace std;
        int tablica[10]{1};
        int tablica2[10];
        int (*pas)[10]=&tablica;
        cout<<(*pas)+1<<"adresa"<<tablica+1;
        cin.get();
        cin.get();
    return 0;
}