#include<iostream>
int main()
{
    using namespace std;
    int ch;
    int count=0;

    while((ch=cin.get()) != EOF)
    {
        cout.put(ch);
        ++count;
    }
    cout<<endl<<"wczytano "<<count<<" znakow\n";
    cin.clear();
    cin.get();
    cin.get();
    return 0;
}