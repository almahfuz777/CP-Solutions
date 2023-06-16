#include <bits/stdc++.h>
using namespace std;

double areaTriangle(int a,int b,int c){
    double s = (a + b + c) / 2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
double areaInscribedCircle(int a,int b,int c){
    double p = a+b+c;   // triangle perimeter
    double r = 2 * areaTriangle(a,b,c) / p; // r = 2A/P
    return M_PI * pow(r, 2);   
}
double areaCircumcircle(int a,int b,int c){
    double r = (a*b*c) / (4 * areaTriangle(a,b,c)); // r = abc/4A
    return M_PI * pow(r,2);
}
int main() {
    int a,b,c; 
    while(cin >> a >> b >> c){
        cout << setprecision(4) << fixed;
        cout << areaCircumcircle(a,b,c) - areaTriangle(a,b,c) << " " <<
            areaTriangle(a,b,c) - areaInscribedCircle(a,b,c) << " " <<
            areaInscribedCircle(a,b,c) << endl;
    }
    return 0;
}