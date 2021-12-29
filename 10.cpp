// Problem Name - Attribute Parser.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
map<string, string> tagMap;

void createMap(int &n, string pretag){
    if(!n){
        return;
    }

    string line, tag, attr, value;
    getline(cin, line);                        // Take the tag input from the keyboard.

    int i=1;
    if(line[i] == '/'){                                // Check for a closed tag.
        while(line[i] != '>'){
            i++;
        }
        if(pretag.size() > (i-2)){
            tag = pretag.substr(0, pretag.size()-i+1);
        }else{
            tag = "";
        }
    }
    else{
        while(line[i] != ' ' && line[i] != '>'){            // Check for an open tag.
            i++;
        }
        tag = line.substr(1, i-1);
        if(pretag != ""){
            tag = pretag + '.' + tag;                    // Find the tag name and set the tag name in tag variable.
        }

        int j;
        while(line[i] != '>'){
            j = ++i;
            while(line[i] != ' '){
                i++;
            }
            attr = line.substr(j, i-j);                  // Find the attribute of a tag and set it in attr variable.

            while(line[i] != '\"'){
                i++;
            }
            j = ++i;
            while(line[i] != '\"'){
                i++;
            }
            value = line.substr(j, i-j);                 // Find the attibute value and set it in value variable.
            i = i+1;

            tagMap[tag + '~' + attr] = value;            // Finaly store the tag value into the map, for key value pairs.
        }
    }
    createMap(--n, tag);                          // Run the createMap function recursively upto n.
}

int main() {

    int n, q;
    int i;
    //cout << "Enter the value of 'n' and 'q': \n";
    cin >> n >> q;
    cin.ignore();                           // Clears the input buffer.
    createMap(n, "");                            // call the function.

    string attr, value;
    while(q--){
        //cout << "Enter your query: \n";
        getline(cin, attr);                      // Input queries from the keyboard.
        value = tagMap[attr];
        if(value == ""){
            cout << "Not Found!";
        }
        cout << value << endl;                  // If the tag value matched with tag attribute, the value is returned.
    }
    return 0;
}