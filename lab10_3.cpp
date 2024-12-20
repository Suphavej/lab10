#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include<cstdlib>
using namespace std;

int main()
{
    int count = 0; 
    float sum = 0; 
    float sum_of_square = 0; 
    string textline;

    ifstream source("score.txt"); 

    if (!source) {
        cerr << "Error: Unable to open score.txt." << endl;
        return 1;
    }

    while (getline(source, textline)) {
        float number = stof(textline); 
        sum += number;
        sum_of_square += number * number;
        count++;
    }

    source.close();

    float mean = sum / count;
    float standard_deviation = sqrt((sum_of_square / count) - (mean * mean));

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3) ;
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << standard_deviation << "\n";

    return 0;
}
