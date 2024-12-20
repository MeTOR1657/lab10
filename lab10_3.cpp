#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int count = 0;
    float sum = 0.0;
    float sum_of_square = 0.0;
    string textline;

    ifstream source("score.txt"); 

    if (!source.is_open()) {
        cerr << "Error: Unable to open file." << endl;
        return 1;
    }

    while (getline(source, textline)) {
        float value = stof(textline); 
        sum += value;                
        sum_of_square += value * value; 
        count++;                     
    }

    source.close();


    float mean = sum / count;
    float stddev = sqrt((sum_of_square / count) - (mean * mean));


    cout << "Number of data = " << count << "\n";


    cout << defaultfloat << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << stddev << "\n";

    return 0;
}
