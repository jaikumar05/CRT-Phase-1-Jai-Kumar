#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str1("Hello");
    string str2("World");
    cout << str1 << " " << str2 << endl;

    int n = str1.length();
    cout << "Length of str1: " << n << endl;
    cout << "After Appending String is: " << str1.append("Students") << endl;
    cout << "Is String Empty: " << str1.empty() << endl;
    cout << "After Concatination String is: " << str1 + "Bacho" + str2 << endl;
    cout << "After Concatenation String is 2: " << str1 << endl;

    str2.push_back('U');
    cout << "After pushing back string is : "  << str2 << endl;
    str2.pop_back();
    cout << "After popping back string is : "  << str2 << endl;

    int index = str1.find("Hello");
    cout << "Index of 'Hello' in str1: " << index << endl;

    char ch = str1.at(1);
    cout << "Character at index 1 in str1: " << ch << endl;

    str1.swap(str2);
    cout << "After swapping str1 and str2 =" << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    string subStr = str2.substr(5,6);
    cout << "Substring of str2 from index 5 with length 6: " << subStr << endl;

    string str3;
    cout << "You entered: " << str3 << endl;
    return 0;    
}