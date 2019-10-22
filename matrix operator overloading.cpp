#include<iostream>
using namespace std;

class matrix
{
    int r,c;
    int a[10][10],b[10][10];
    public:
    matrix()
    {
        cout<<"matrix:constructed"<<endl;
    }
    ~matrix()
    {
        cout<<" matrix:destructed"<<endl;
    }
    void read()
    {
        int i,j;
        cout<<"enter the number of rows in matrix"<<endl;
        cin>>r;
        cout<<"enter the number of columns in  matrix"<<endl;
        cin>>c;
        cout<<"enter the elements in matrix:"<<endl;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    matrix operator +(matrix &x)
    {
        matrix p;
        p.r=r;
        p.c=c;
        cout<<p.r;
        cout<<p.c;
        for(int i=0;i<p.r;i++)
        {
            for(int j=0;j<p.c;j++)
            {
                p.a[i][j]=a[i][j]+x.a[i][j];
            }
        }
         return p;
     }
     matrix operator -(matrix &y)
     {
           matrix p;
           p.r=r;
            p.c=c;
            cout<<p.r;
            cout<<p.c;
           for(int i=0;i<r;i++)
           {
                for(int j=0;j<c;j++)
                {
                    p.a[i][j]=a[i][j]-y.a[i][j];
                }
           }
            return p;
     }
     matrix operator *(matrix &z)
     {
            matrix p;
             p.r=r;
               p.c=c;
            cout<<p.r;
            cout<<p.c;
            for(int i=0;i<r;i++)  
            {  
                for(int j=0;j<c;j++)  
                {              
                    p.a[i][j]=0;  
                    for(int k=0;k<z.c;k++)  
                    {
                        p.a[i][j]=p.a[i][j]+a[i][j]*z.a[j][k];
                    }  
                }    
            }  
            return p;  
      }
      void  display()
      {
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    cout<<a[i][j]<<" \t ";
                }
                    cout<<"\n";
            }
      }
                   
};

int main()
{
    int ch;
    matrix m1,m2,m3;
    do
    {
        cout<<"\n1.addition \n2.subtraction \n3.multiplication \n4.exit"<<endl;
        cout<<"enter the choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            m1.read();
 
            m2.read();
            m3=m1+m2;
            m3.display();
            break;
        case 2:
            m1.read();
            m2.read();
            m3=m1-m2;
            m3.display();
            break;
        case 3:
            m1.read();
            m2.read();
            m3=m1*m2;
            m3.display();
            break;
        }
     }
     while(ch!=4);
}

               
       
