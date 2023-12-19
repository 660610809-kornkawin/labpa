#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){

int i = 0;
double sum = 0 ;
double sum_of_square = 0;
string textline;
ifstream source("score.txt");
while (getline(source,textline))
{
    sum += atof(textline.c_str());
    sum_of_square += pow(atof(textline.c_str()),2);
    i++;
}

cout << "Number of data = "<<i<<"\n";
cout << setprecision(3);
cout << "Mean = "<<sum/i<<"\n";
cout << "Standard deviation = "<<sqrt((sum_of_square/i)-pow(sum/i,2));
 return 0;
}