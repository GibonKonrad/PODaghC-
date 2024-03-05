#include<iostream>
const int Fave=27;
int main()
{
    using namespace std;
    int n;

    cout<<"Szukaj mojej ulubionej liczby - miesii sie ";
    cout<<" w zakresie 1 - 100";
    do
    {
        cin>>n;
        if(n<Fave)
            cout<<"Za malo- probuj dalej: ";
        else if(n>Fave)
            cout<<"Za duzo- probuj dalej: ";
        else
            cout<<Fave<<"To jest to!\n";
    }while(n!=Fave);
    cin.get();
    cin.get();
    return 0;
}