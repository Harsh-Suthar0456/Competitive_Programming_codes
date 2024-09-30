#include<simplecpp>


class Polynomial{
    public:
    int degree;
    double coeff[100];
    Polynomial operator+ (const Polynomial &b) const{
        Polynomial a;
        for(int k=0;k<=100;k++){
            a.coeff[k]=0;
        }
        for(int i=0;i<= max(this->degree,b.degree);i++){
            a.coeff[i]= coeff[i]+b.coeff[i];
        }
        a.degree= max(this->degree,b.degree);
        return a;
    }

    Polynomial operator* (Polynomial &b) {
        Polynomial a;
        for(int i=0;i<= this->degree;i++){
            for(int j=0;j<=b.degree;j++){
                a.coeff[i+j] = a.coeff[i+j] +coeff[i]*b.coeff[j];
        }
        }
        a.degree= this->degree+b.degree;
        return a;
    
    }

    Polynomial operator- (const Polynomial &b) const{
        Polynomial a;
        for(int i=0;i<= max(this->degree,b.degree);i++){
            a.coeff[i]= coeff[i]-b.coeff[i];
        }
        a.degree= max(this->degree,b.degree);
        return a;
    }

    
    friend istream& operator>>(istream &input,Polynomial &b);
    friend ostream& operator<<(ostream &ioutput,Polynomial const &b);

    double evaluate(double x){
        double sum=0;
        for(int i=0;i<=degree;i++){
            sum +=coeff[i]*pow(x,i);
        }
        return sum;
    }

    void read(){
        cin >> *this;
        }
    
    void print(){
        cout << *this;
    }

    
};

    ostream & operator<< (ostream & output, Polynomial const &b){
        
        for(int i=0;i<=b.degree;i++){
        output <<b.coeff[i]<<"x^"<<i<<" + ";
    }
    output<<"0";
    return output;
    }
    istream & operator>> (istream & input, Polynomial &b){
        for(int i=0;i<=b.degree;i++){
        input >> b.coeff[i];
    }
    return input;
    }

    


    main_program{
        Polynomial f,g;
        char op;
        cout << "Enter the degree of polynomial: ";
        cin >> f.degree;
        cout << "Enter coeff: ";
        f.read();
        f.print();

        cout <<endl<< "Enter the degree of polynomial 2, or type -1 to end program: ";
        cin >> g.degree;
        if(g.degree==-1){return 0;}
        cout << "Enter coeff of 2: ";
        g.read();
        g.print();
        cout <<endl<< "Enter the first letter of req operation (A, S, M): ";
        cin >> op;

        if(op =='A'){ cout<< (f+g);}
        else if(op =='S'){ cout<< (f-g);}
        else if(op =='M'){ cout<< (f*g);}
        /*f.degree=2;g.degree=2;
        f.coeff[0]=1;g.coeff[0]=2;
        f.coeff[1]=2;g.coeff[1]=10;
        f.coeff[2]=3;g.coeff[2]=-1;
        cout << (f*g);*/
       

    }
    


