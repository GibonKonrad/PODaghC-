#include<iostream>
int main()
{
    using namespace std;
    int ch;
    int count=0;
    while((ch=cin.get())!=EOF)
    {
        cout.put(ch);
        count++;
    }
    cin.clear();
    cin.get();
    cin.get();
    return 0;
}