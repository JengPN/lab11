#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(){
    int N;
    double sum, SS;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline))
    {
        N++;
        sum += atof(textline.c_str());
        SS += atof(textline.c_str())*atof(textline.c_str());
    }
    cout << "Number of data = " << N << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum/N << "\n";
    cout << "Standard deviation = " << sqrt(1.0/N*SS-sum*sum/N/N) << "\n";
}