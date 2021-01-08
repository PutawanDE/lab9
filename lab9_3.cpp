#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include <iomanip>

using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    int n = 0;
    float sum;
    float sumX_sq;
    float mean;
    float sd;

    while(getline(source, textline)){
        float x = atof(textline.c_str());
        sum += x;
        sumX_sq += (x * x);
        n++;
    }

    mean = sum / n;
    sd = sqrt((sumX_sq/n)-(mean*mean));
    
    cout << "Number of data = " << n << '\n';
    cout << setprecision(3);
    cout << "Mean = " << mean << '\n';
    cout << "Standard deviation = " << sd;
    return 0;
}
