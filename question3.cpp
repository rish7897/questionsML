#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    vector<pair<float, float>>data;
    for(int i = 0; i < 9; i++){
        pair<float,float> p;
        cin >> p.first;
        cin >> p.second;
        data.push_back(p);
    }
    
    float firstMean = 0;
    for(int i = 0; i < 9; i++){
        firstMean += data[i].first;
    }
    firstMean /= 9;
    
    float secondMean = 0;
    for(int i = 0; i < 9; i++){
        secondMean += data[i].second;
    }
    secondMean /= 9;
    
    float numerator = 0;
    for(int i = 0; i < 9; i++){
        numerator += (data[i].first - firstMean) * (data[i].second - secondMean);
    }
    float denomenator = 0;
    for(int i = 0; i < 9; i++){
        float smallAns = (data[i].first - firstMean);
        denomenator += smallAns * smallAns;
    }
    cout << "numerator : " << numerator << endl;
    cout << "denomenator : " << denomenator << endl;
    
    float a = numerator / denomenator;
    cout << "a : " << a << endl;
    
    float b = secondMean - firstMean * a;
    cout << "b : " << b << endl;
    
    float rss = 0;
    for(int i = 0; i < 9; i++){
        float smallAns = data[i].second - a * data[i].first - b;
        rss += smallAns * smallAns;
    }
    rss /= 9;
    cout << "rss : " << rss << endl;
    float tss = 0;
    for(int i = 0; i < 9; i++){
        float smallAns = data[i].second - b;
        tss += smallAns * smallAns;
    }
    tss /= 9;
    cout << "tss : " << tss << endl;
    
    float r2 = (1 - (rss / tss));
    cout << "r2 : " << r2 << endl;
}
// 1.25 2.25
// 1.32 2.5
// 1.62 2.5
// 1.97 3.5
// 2.0 3.4
// 2.2 3.5
// 2.3 3.6
// 2.48 4.25
// 2.6 4.15