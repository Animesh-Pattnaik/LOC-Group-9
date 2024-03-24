// Finding total,average and percentage of marks obtained in 5 subjects
#include <iostream>
using namespace std;
int main()
{

    int marks[5],i,sum=0; 
    float  avg;

    
        cout<<"Enter marks of Math:";
        cin>>marks[0];

        cout<<"Enter marks of Physics:";
        cin>>marks[1];

        cout<<"Enter marks of English:";
        cin>>marks[2];

        cout<<"Enter marks of CDS:";
        cin>>marks[3];

        cout<<"Enter marks of BEE :";
        cin>>marks[4];
        
    for(i=0;i<5;i++){
        sum+=marks[i];
    }
    avg =(float)sum/5;
    cout<<"The total marks obtained is:"<<sum<<endl ;
    cout<<"The average of marks is:"<<avg<<endl;
    cout<<"The percentage of marks obtained is: "<<avg<<"%";  
    return 0;  
}