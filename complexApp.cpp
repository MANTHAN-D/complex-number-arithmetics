#include<iostream>
#include<fstream>
#include<string>
#include "complex.h"
using namespace std;

int main(){

    ifstream myfile;
    string line;
    float r,im;
    myfile.open("C:\\Users\\Manthan\\Downloads\\126import.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            if(sscanf(line.c_str(), "%f + %fi", &r, &im) == 2){
                cout<< r << " and " << im << endl;
            }
            else if(sscanf(line.c_str(), "%f - %fi", &r, &im) == 2){
                cout<< r << " and " << im * -1.0f << endl;
            }
            else if(sscanf(line.c_str(), "%f", &r) == 1){ // only real part
                cout<< r << endl;
            }
            else if(sscanf(line.c_str(), "%fi", &im) == 1){ // only imaginary part
                cout<< im << endl;
            }
            else {
                cout<<"Unidentified format" << endl;
            }
            cout << line << '\n';
        }
        myfile.close();
    }
    else
        cout<< "Unable to open file" << endl;

    Complex c1(4,5);
    Complex c2(3,4);

    cout << c1.value() << endl;
    cout << c2.value() << endl;
    bool v = c2 > c1;
    cout << v << endl;

    Complex c3;
    cout<< "Enter real number followed by imaginary part: " << endl;
    cin >> c3;
    cout << "You entered : " << c3 << endl;
    return 0;
}

