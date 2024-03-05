#include<iostream>
#include<cctype>
int main()
{
    using namespace std;
    cout<<"Podaj wielka litere: ";
    char ch;
    cin.get(ch);
    while(ch!='@')
    {
        cout.put(tolower(ch));
        cin.get(ch);
    }
    cout<<"Podaj teraz w malych: ";
    char ch1;
    cin.get(ch1);
    while(ch1!='@')
    {
        cout.put(toupper(ch1));
        cin.get(ch1);
    }
    cin.get();
    cin.get();
    return 0;
}