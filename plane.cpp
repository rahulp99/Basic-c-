#include<iostream>
#include<string.h>
using namespace std;

class aeroplane
{
    private:
        string airline;
        string dest;
        static int count;
    public:
        aeroplane(string a,string d)
        {
            airline = a;
            dest = d;
        }

        string getAirline()
        {
            return airline;
        }

        static int checkCount()
        {
            if(count<3)
                return 1;
            else
                return 0;
        }

        void landing()
        {
            cout<<airline<<" airline bound for "<<dest<<" has landed."<<endl;
            count++;
        }

        void takeOff()
        {
            cout<<airline<<" airline bound for "<<dest<<" has Taken Off from the Runway."<<endl;
            count--;
        }

        static int giveCount()
        {
            return count;
        }
};

int aeroplane::count = 0;

int main()
{
    int ch,flag,i,j,f;
    i=0;
    string n,d;
    aeroplane *a[3];
    while(1)
    {
        cout<<"\nChoose from the following:\n1. Request to Land a flight\n2. Request Take Off of a Flight\n3. Get Aeroplanes' count on the Runway\n4. Exit the Program\nPlease ENTER your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1: flag = aeroplane::checkCount();
                    if(flag==0)
                        cout<<"Landing not Allowed since Runway is occupied"<<endl;
                    else
                    {
                        cout<<"Enter name of Airline requesting for Landing :"<<endl;
                        cin>>n;
                        cout<<"Enter the Destination of the Aeroplane :"<<endl;
                        cin>>d;
                        a[i] = new aeroplane(n,d);
                        a[i]->landing();
                        i++;
                    }
                    break;
            case 2: flag = aeroplane::giveCount();
                    if(flag==0)
                        cout<<"No Flight currently on Runway to take off"<<endl;
                    else
                    {
                        cout<<"Flights currently on Runway: "<<endl;
                        for(j=0;j<flag;j++)
                        {
                            cout<<j+1<<". "<<a[j]->getAirline()<<endl;
                        }
                        cout<<"Enter the corresponding flight number to take off : ";
                        cin>>f;
                        a[f-1]->takeOff();
                        delete a[f-1];
                        for(j=f-1;j<flag-1;j++)
                        {
                            a[j] = a[j+1];
                        }
                        i--;
                    }
                    break;
            case 3: cout<<"Number of Aeroplanes currently on the Runway = "<<aeroplane::giveCount()<<endl;
                    break;
            case 4: cout<<"\nThank you for using our Software"<<endl;
                    exit(1);
            default:cout<<"Wrong choice!! Enter AGAIN."<<endl;
        }
    }
    return 0;
}