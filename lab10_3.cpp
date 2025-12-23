#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main(){
    ifstream score1("score.txt");
    double  Mean = 0 , de = 0;
    int data = 0;
    string text;
    while(getline(score1,text)){
        Mean += stod(text);
        de += pow(stod(text),2);
        data++;
    }
    score1.close();
    
    cout << "Number of data = " << data << "\n";
    cout << setprecision(3);
    cout << "Mean = " << Mean/data << "\n";
    cout << "Standard deviation = " << sqrt(de/data - pow(Mean/data,2)) << "\n";
    
    return 0;
}