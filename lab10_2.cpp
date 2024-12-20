#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    ifstream source;
    ofstream dest;
    source.open("cheerbook.txt");
    dest.open("cheerbook_copy.txt");

    if (!source) {
        cerr << "Error: Unable to open cheerbook.txt for reading." << endl;
        return 1;
    }

    if (!dest) {
        cerr << "Error: Unable to create cheerbook_copy.txt for writing." << endl;
        return 1;
    }

    
    dest << "-------------------- BOOM ---------------------" << endl;

    
    string line;
    while (getline(source, line)) {
        dest << line << endl;
    }

    
    dest << "-------------------- HA!! ---------------------" << endl;

    source.close();
    dest.close();

    return 0;
}
