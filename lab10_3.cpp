#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sum2 =0 ;
    float num;
    string textline;
    ifstream source("score.txt");
    while(getline(source,textline)){
            
            num = atof(textline.c_str());
            sum += num;
            sum2 += pow(num,2);
            count++;
    }
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = " << sqrt((sum2/count)-pow((sum/count),2));
}