#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
#include <cctype>

using namespace std;

bool AreAnagrams(string str1, string str2) {
   
    str1.erase(remove(str1.begin(), str1.end(), ' '), str1.end());
    str2.erase(remove(str2.begin(), str2.end(), ' '), str2.end());
    
    if (str1.length() != str2.length()) {
        return false;
    }
    
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    return str1 == str2;
}

string ConvertToUpper(string text) {
    transform(text.begin(), text.end(), text.begin(), ::toupper);
    return text;
}

string ConvertToLower(string text) {
    transform(text.begin(), text.end(), text.begin(), ::tolower);
    return text;
}

string ReverseString()
{
   string text1 = " This is a phrase";
   reverse(text1.begin(), text1.end());

   cout<< text1 <<endl;

   return text1;

}

bool PalindromeCheck(string text)
{
    for (int i = 0; i < text.length() / 2; i++)
    {
        if (text[i] != text[text.length() - i - 1])
        {
            return false;
        }
    }
    return true;
}

int VowelCount(string text)
{
    int vowel_count = 0;
    for (int i =0; i < text.length(); i++)
    {
        char c = tolower(text[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            vowel_count++;
        }
    }
    cout << "Total Vowels: " << vowel_count <<endl;
    return vowel_count;
}

int main()
{
    cout << "\n--- String Manipulation Examples ---\n\n";
    string test1 = "abccba";
    string test2 = "I am Maher";

    cout << "Uppercase: " << ConvertToUpper("Hello World") << endl;
    cout << "Lowercase: " << ConvertToLower("HELLO WORLD") <<"\n"<< endl;

    if(PalindromeCheck(test1))
    {
        cout<< test1 <<"     -> is a palindrome"<<endl;
    }
    else
    {
        cout<< test1 <<"     -> is NOT a palindrome"<<endl;
    }

     if(PalindromeCheck(test2))
    {
        cout<< test2 <<"     -> is a palindrome"<<endl;
    }
    else
    {
        cout<< test2 <<"     -> is NOT a palindrome"<<endl;
    }
    cout<<endl;

    cout<<"Counting the Vowls for : "<<test2<<endl;
    int vowel_count = VowelCount(test2);
    cout<<endl;

    cout<<"Reversing This: This is a phrase = ";
    ReverseString();

    cout << "\nAre 'listen' and 'silent' anagrams? " << (AreAnagrams("listen", "silent") ? "Yes" : "No") << endl;
    return 0;
}