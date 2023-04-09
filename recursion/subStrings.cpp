// given a string find all the sub-strings formed from the string
// for ex: for string ABC the substrings are {{^}, {A}, {B}, {C}, {AB}, {AC}, {BC}, {ABC}}
// Total number of sub strings is (2 to the power n), where n is number of alphabets in the string

#include<iostream>
using namespace std;

void subStrings(string& str, string curr = "", int i = 0){
    if(i == str.length()){
        cout << curr << endl;
        return;
    }

    subStrings(str, curr, i+1);
    subStrings(str, curr + str[i], i+1);
    // cout << curr << endl;
}


int main(){

    string  str = "ABC";

    subStrings(str);

    return 0;
}