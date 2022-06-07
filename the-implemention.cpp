#include <iostream>

using namespace std;

string tolowercase(string text){
    string final = "";
    for(int i = 0; i < text.size(); i++){
        final += tolower(text[i]);
    }
    return final;
}

string touppercase(string text){
    string final = "";
    for(int i = 0; i < text.size(); i++){
        final += toupper(text[i]);
    }
    return final;
}

int main()
{
    cout<< tolowercase("HI IAM COBRA\n");
    cout<< touppercase("hi iam cobra\n");

    return 0;
}
