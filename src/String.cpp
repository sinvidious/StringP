#include <iostream>
#include "StringP.h"

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


string toscentencecase(string text){
    string final = "";
    for(int i = 0; i < text.size(); i++){
        if(i == 0){
            final += toupper(text[i]);
        } else {
            final += tolower(text[i]);
        }
    }
    return final;
}

string tocapcase(string text){
    string final = "";
    
   for(int i = 0; i < text.size(); i++){
        if(i == 0){
            final += toupper(text[i]);
        } else if(text[i-1] == ' ' or NULL){
             final += toupper(text[i]);

        }
        else {
            final += tolower(text[i]);
        }
        
    }
    
    return final;
}
