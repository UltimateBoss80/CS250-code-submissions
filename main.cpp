#include <iostream>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;

bool palRecursive(char str[], int f, int l)
{
    if(f==l)
        return true;

    if(str[f]!=str[l])
        return false;

    return palRecursive(str, f + 1, l - 1);

}



bool isPalindrome(char str [])
{
    int length = strlen(str);

    if (length == 0)
        return true;

    return palRecursive(str, 0, length - 1);


}

int main()
{
    try
    {

        const int length = 100;
        char word[length];
        cout << "Enter a palindrome: ";
        cin >> word;
        char letter = word[0];
        if (!isalpha(letter))
        {
            cout << endl << "The fist character is not a letter, please try again." << endl;
            cout << "Enter a palindrome: ";
            cin >> word;
        }

        if (isPalindrome(word))
        {
            cout << "This word is a palindrome.";
        }

        else
        {
            throw "This word is not a palindrome.";
        }
    }

    catch (const char *msg)
    {
        cout << msg << endl;
    }

    return 0;
}
