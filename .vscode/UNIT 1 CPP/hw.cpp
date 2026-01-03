#include <bits/stdc++.h>
using namespace std;
int main () {
    //Area of circle
    int r;
    double a;
    cin>>r;
    a=3.14*r*r;
    cout<<"Area of circle is : "<<a;
    //Permater of rectangle
    long int l,b;
    long int p;
    cin>>l>>b;
    p=2*(l+b);
    cout<<"Perameter of rectangle is : "<<p;
    //Compound Interest
    double p2,r2,t;
    double total;
    cin>>p2>>r2>>t;
    total=p2*pow((1+r2/100),t);
    cout<<"Compound Interest is : "<<total-p;
    //Temperature Conversion
    double c,f;
    cin>>c;
    f=(c*9/5)+32;
    cout<<f;
    return 0;
}
//end