#include <iostream>
#include <string>

using namespace std;

class Heartrates{
    private:
    string Fname;
    string Lname;
    int bday;
    int birth_month;
    int birth_year;
    int current_day;
    int current_month;
    int current_year;
    int age;
    double Maxheartrate;
    double targetRate;



    public:
   void getData()
   {
        cout<<"Please Enter your firstname\n";
        getline (cin, Fname);
        cout<<"\n\n";
        cout<<"Please Enter your lastname\n";
        getline (cin, Lname);
        cout<<"\n\n";
        cout<<"Please Enter your date of birth\n";
        cout<<"year:";
        cin >> birth_year;
        cout<<"month:";
        cin>> birth_month;
        cout<<"day:";
        cin >> bday;

    cout<<"Data for:"<<Fname<< "  "<<Lname<<endl;
        cout<< "Your date of birth in the format dd/mm/yyyy is:"<<bday<<"/"<<birth_month<<"/"<<birth_year<<endl;
        cout<<"\n\n";
    }
   void getAge ()
    {
        cout<<"Enter the current date as follows: dd/mm/yyyy \n";
        cout<<"Day: ";
        cin>>current_day;
        cout<<"month:";
        cin>>current_month;
        cout<<"year:";
        cin>> current_year;

         if (current_month >= birth_month && current_day >= bday)
    {
        age= current_year- birth_year;
    }
        else
    {
        age= (current_year- birth_year)-1;
    }
        cout<<"You are currently "<< age<<"  "<<"years old. Press any key to continue\n";
    }


   void getMaximumHeartRate()
   {
       Maxheartrate= 220-age;
       cout<<"Your Max heartrate is:"<<Maxheartrate<<endl;
   }
   void getTargetHeartRate()
   {
        targetRate=  Maxheartrate*0.65;
        cout<< "Target heartrate is"<<targetRate<<endl;
    }
};




int main()
{
    Heartrates Jo;
    
    cout<<"Josiah's heartrate monitor program\n\n\n";
    
     Jo.getData();
     Jo.getAge();
   
    cin.ignore();
    cin.get();
    
      
     Jo.getMaximumHeartRate();
     Jo.getTargetHeartRate();

    cout<<"\n\n";
    cout<<"Josiah's HRM"<<endl;

    return 0;
}
