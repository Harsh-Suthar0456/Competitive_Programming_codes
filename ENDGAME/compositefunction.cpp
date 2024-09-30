#include<iostream>
using namespace std;

struct poly{
    static int counter;
     double coeff[100];
     int degree;
     poly(){degree=0;coeff[2]=0;}
     poly(int k){degree=k;}

     static int resetter(int degreee){
        degreee=4;
     }

     poly operator* (const poly &b) const{
        poly a;
        for(int i=0;i<= this->degree;i++){
            for(int j=0;j<=b.degree;j++){
                a.coeff[i+j] = a.coeff[i+j] +coeff[i]*b.coeff[j];
        }
        }
        a.degree= this->degree+b.degree;
        return a;
    }   

     poly of(poly f){
        poly h;
        h.degree = degree*(f.degree);

        for(int i=0;i<=degree;i++){
            for(int j=0;j<=(f.degree)*i;j++){
               h.coeff[j]+=coeff[i]*((f.power(i)).coeff[j]);
            
            }
        }
        return h;
     }

     poly power(int n)const {
        poly null;null.degree=0;null.coeff[0]=1;
        
        if(n==0){return null;}
        if(n==1){return (*this);}
        else return (*this)*((*this).power(n-1));
     }
};

int poly::counter=0;

istream& operator>>(istream& ist,poly& f){
    for(int i=f.degree;i>=0;i--){
        ist >> f.coeff[i];
    }
    return ist;
}

ostream& operator<<(ostream& ost,const poly& f){
    for(int i=f.degree;i>0;i--){
        ost << f.coeff[i]<<"*x^"<<i<<" + ";
    }
    ost<< f.coeff[0];
    return ost;
}

int main(){
    poly f,g;
 
    cout << "enter degree of poly 1(f): ";
    cin >> f.degree;
    cout << "enter the coeff of polynomial: ";
    cin >> f;
    cout << f<<endl;
    cout << "enter degree of poly 2(g): ";
    cin >> g.degree;
    cout << "enter the coeff of polynomial: ";
    cin >> g;
    cout << g<<endl;
    cout <<"g(f)is : "<< g.of(f);

}