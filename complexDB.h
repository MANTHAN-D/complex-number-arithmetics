#include<vector>
#include "complex.h"
using namespace std;

class ComplexDB{
private:
    vector<Complex> db;
public:
    void add(Complex c){
        db.push_back(c);
    }

    void delete(Complex c){

    }
};
