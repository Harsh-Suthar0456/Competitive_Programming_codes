#include<iostream>
using namespace std;
void power(int a[],int m,int d)
{
        if(m==0)
        {
                for(int i=0;i<d+1;i++)
                {
                        a[i]=0;
                }
                a[0]=1;
        }
        else
        {
                int b[d+1];
                int c[2*d+2];
                for(int i=0;i<2*d+2;i++)
                {
                        c[i]=0;
                }
                for(int i=0;i<d+1;i++)
                {
                        b[i]=a[i];
                }
                for(int i=1;i<m;i++)
                {
                        for(int i=0;i<2*d+2;i++)
                        {
                                c[i]=0;
                        }
                        for(int j=0;j<d+1;j++)
                        {
                                for(int k=0;k<d+1;k++)  c[j+k]+=a[j]*b[k];
                        }
                        for(int i=0;i<d+1;i++)
                        {
                                a[i]=c[i];
                        }
                }
        }
}

int main()
{
        cout<<"Enter degree of f(x)"<<endl;
        int df;
        cin>>df;
        cout<<"Enter degree of g(x)"<<endl;
        int dg;
        cin>>dg;
        int d=df*dg;
        int f[d+1];
        int g[d+1];
        cout<<"Enter coeficients a0 a1 ... "<<endl;
        for(int i=0;i<d+1;i++)
        {
                f[i]=0;
                g[i]=0;
        }
        for(int i=0;i<df+1;i++)
        {
                cin>>f[i];
        }
        cout<<"Enter coeficients a0 a1 ... "<<endl;
        for(int i=0;i<dg+1;i++)
        {
                cin>>g[i];
        }
        int fog[d+1];
        for(int i=0;i<d+1;i++)
        {
                fog[i]=0;
        }
        for(int i=0;i<d+1;i++)
        {
                for(int j=0;j<d+1;j++)
                        {
                                int x[d+1];
                                for(int i=0;i<d+1;i++)
                                {
                                        x[i]=f[i];
                                }
                                power(f,j,d);
                                fog[i]+=g[j]*f[i];
                                for(int i=0;i<d+1;i++)
                                {
                                        f[i]=x[i];
                                }
                        }

        }
        for(int s=d;s>=0;s--)
        {
                cout<<fog[s]<<" ";
        }
}