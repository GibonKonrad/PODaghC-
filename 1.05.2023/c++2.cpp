#include<iostream>
const int Cities = 5;
const int Years = 4;

int main()
{
    using namespace std;
    char cities[5][25]
    {
        "Jelenia Gora",
        "Zielona Gora",
        "Stara Gora",
        "Gorki",
        "Wilga Gorna"
    };
    // const char* cities[Cities]{"Jelenia gora","Zielona Gora","Stara Gora","Gorki","Wilga Gorna"};
    int maxtemps[Years][Cities]
    {
        {32,31,32,34,29},
        {28,31,31,32,30},
        {31,27,29,30,33},
        {30,31,29,33,32}
    };
    cout<<"Temperatury maksymalne (C) w latach 2008-2011\n\n";
    for(int city=0; city<Cities; city++)
    {
        cout<<cities[city]<<":\t";
        for(int year=0; year<Years; year++)
        cout<<maxtemps[year][city]<<"\t";
    cout<<endl;
    }
    cin.get();
    cin.get();
    return 0;
}