#include<iostream>
#include<string>
int main()
{
    using namespace std;
    cout<<"Podaj slowo: ";
    string word;
    cin>>word;
    for(int i=word.size()-1;i>=0;i--)
        cout<<word[i];
    cout<<"\nDo widzenia\n";
    cin.get();
    cin.get();
    return 0;
}