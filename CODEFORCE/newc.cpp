# include<iostream>
# include<cmath>
# include<ostream>
using namespace std ;
struct polynomial{
        int d1; // power of polynomial
        double x;
        double c[102];
        friend ostream & operator<<( ostream &ost, polynomial &v);
        
    polynomial operator+ (polynomial const &b) const {
                polynomial v;
                for(int i=0;i<max(this->d1+1,b.d1+1);++i){
                        v.c[i] = c[i] + b.c[i];
                }
                v.d1= max(this->d1+1,b.d1+1);
                                return v;
                }
                
    polynomial operator- (const polynomial &b) const{
                polynomial w;
                for(int i=0;i<max(this->d1+1,b.d1+1);++i){
                        w.c[i] = c[i] - b.c[i];
                }
                w.d1= max(this->d1+1,b.d1+1);
                                return w;
                }
   
};
ostream & operator<< (ostream & ost ,const polynomial &v ){
        
                ost<<v.c[1]<<" + ";
        
        return ost;

}

int main(){
        polynomial a,b;
        cout<<" enter the degree : " ;
        cin>>a.d1;
        cout<<" enter the value  of x : ";
        cin>>a.x;
        int i=0;
        while (i<a.d1+1){
                cin>>a.c[i];
                i++;
        }
cout<<endl;
        cout<<" enter the degree : " ;
        cin>>b.d1;
        cout<<" enter the value  of x : ";
        cin>>b.x;
        int j=0;
        while (j<b.d1+1){
                cin>>b.c[j];
                j++;
        }
        cout << (a+b);
        return 0;
}





