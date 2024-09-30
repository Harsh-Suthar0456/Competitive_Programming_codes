#include<simplecpp>
#include<cassert>


class complex
{
        float real,imag;
public:        
        complex(){real=imag=0;}
        complex(float a)
        {
                imag=0;
                real=a;
        }
        complex(float a,float b)
        {
                real=a;
                imag=b;
        }
        complex operator+ (const complex &b) const
        {
                complex c;
                c.real=b.real+real;
                c.imag=b.imag+imag;
                return c;
        }
        complex operator- (const complex &b) const
        {
                complex c;
                c.real=-1*b.real+real;
                c.imag=-1*b.imag+imag;
 }
        complex operator* (const complex &b) const
        {
                complex c(real*b.real-imag*b.imag,real*b.imag+imag*b.real);
                return c;
        }
        complex operator/ (const complex &b) const
        {
                assert(b.real!=0 || b.imag!=0);
                complex c;
                c.real=(real*b.real+imag*b.imag);
                c.imag=(imag*b.real-real*b.imag);
                c.real=c.real/(b.real*b.real+b.imag*b.imag);
                c.imag=c.imag/(b.real*b.real+b.imag*b.imag);
                return c;

        }


};
main_program()
{
        complex c1(1,2);
        complex c2(3,4);
        
}