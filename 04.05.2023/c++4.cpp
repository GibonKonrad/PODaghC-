#include<iostream>
const int ArSize=80;
int main()
{
    using namespace std;
    char line[ArSize];
    int spaces=0;

    cout<<"Wypisz wiersz tekstu:\t";
    cin.getline(line,ArSize);
    cout<<"Caly wiersz:\n"<<line<<endl;
    cout<<"Wiersz do pierwszej kropki:\n";
    for(int i=0; line[i]!='\0';i++)
    {
        cout<<line[i];
        if(line[i]=='.')
            break;
        else if(line[i]!=' ')
            continue;
        spaces++;
    }
    cout<<"\n"<<spaces<<" spacji\n";
    cout<<"Gotowe.\n";
    cin.get();
    cin.get();
    return 0;
}