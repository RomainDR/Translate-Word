#include <string>
#include <iostream>

using namespace std;

const int sizeTab = 4;
string englishWords[sizeTab] = { "apple", "tree", "plane", "dog" };
string frenchWords[sizeTab] = { "pomme", "arbre", "avion" , "chien" };
bool isFrenchMode = false;

string GetModeWords(bool _frMode)
{
    string _word = "";
    if (_frMode) {
        for (int i = 0; i < sizeTab; i++)
        {
            string _endWord = (i == sizeTab - 1) ? "." : ", ";
            _word += englishWords[i] + _endWord;
        }
        return "Words are : " + _word;

    }
    else {
        for (int i = 0; i < sizeTab; i++)
        {
            string _endWord = (i == 3) ? "." : ", ";
            _word += frenchWords[i] + _endWord;
        }
        return "Les mots sont : " + _word;
    }
}
void InitTranslator(bool _frMode) {
    isFrenchMode = !isFrenchMode;
}

string InputWord()
{
    string _word;
    cout << "insert the text: " << endl;
    cin >> _word;
    return _word;
}
string IsValidWorld(string _input) {

    //loop
    for (int i = 0; i < 4; i++) {
        if (_input == frenchWords[i]) return englishWords[i];
        if (_input == englishWords[i]) return frenchWords[i];
    }
}
int main()
{
    InitTranslator(true);
    cout << IsValidWorld(InputWord());

}