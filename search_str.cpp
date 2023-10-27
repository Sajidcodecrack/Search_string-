#include <iostream>
#include <string>
using namespace std;
int main()
{
    string t;
    string w;
    // string p;
    cout << "Enter the text :";
    getline(cin, t);
    cout << "Enter the word want to search :" << endl;
    cin >> w;
    int found = t.find(w);
    if (found != string ::npos)
    {
        cout << " the word is present in the sentence  -> " << w << "-> It's the word" << endl;
    }
    else
    {
        cout << " the word is not present in the sentence -> " << w << "-> It's the word " << endl;
    }
}