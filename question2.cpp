#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<double> > vectors;
    for(int i = 0; i < 6; i++){
        vector<double> vect;
        for(int j = 0; j < 6; j++){
            double temp;
            cin >> temp;
            vect.push_back(temp);
        }
        vectors.push_back(vect);
    }
    double lossf = 0;
    double lossg = 0;
    for(int i = 0; i < 6; i++){
        lossf += (vectors[i][3] - (2 * vectors[i][0]) + (0.5 * vectors[i][2]))*(vectors[i][3] - (2 * vectors[i][0]) + (0.5 * vectors[i][2]));
        lossg += (vectors[i][3] - (vectors[i][0]) - (2 * vectors[i][2]))*(vectors[i][3] - vectors[i][0] - (2 * vectors[i][2]));
    }
    lossf /= 6;
    lossg /= 6;
    cout << "lossf : " << lossf << endl;
    cout << "lossg : " << lossg << endl;

}
// 3 9 1.9 5.0 5.05 6.8
// 2 7 2.1 3.2 2.95 6.2
// 4 12 2.8 6.6 6.6 9.6
// 5 16 0.9 9.8 9.55 6.8
// 5 15 3.1 8.5 8.45 11.2
// 4 11 1.6 6.9 7.2 7.2