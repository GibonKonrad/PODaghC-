#include<cstring>
#include<iostream>
int main()
{
    using namespace std;
    string word="?ate";
    for(char ch='a';word!="mate";ch++)
    {
        cout<<word<<endl;
        word[0]=ch;
    }
    cout<<word<<endl;
    cin.get();
    cin.get();
    return 0;
}