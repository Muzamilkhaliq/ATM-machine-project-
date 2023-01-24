#include <iostream>
using namespace std;

double balance1;
int main()
{
	
	cout<<"\t\t      || Jutt  Bank ATM Machine    ||"<<endl;
    cout<<"\t\t  =========================================="<<endl;
    cout<<"\t\t  ==========================================\n\n"<<endl;
    int password;
    int pincode;
    
    cout<<"Please Enter the Pincode :";
    cin>>pincode;
    
    if(pincode== 1234)
    { 
    	cout<<"\n welcome jutt \n";
    	for(int i=0; i<3; i++)
    	{
    		cout<<"Enter your  password :\n";
    		cin>>password;
    		
    		double balance = 50000;
			balance1  =balance;
			if(password==7777)
			{
				for(int x=1; x< 10;x++)
				{
					double withdraw,deposit;
					int choice;
					cout<<endl;
					if(x==1)
					{
						cout<<"\t\t ATM" <<endl;
						cout<<"choose a Transaction \n\n";
					}
					cout<<"MAIN SCREEN \n";
					cout<<"[1] Inquire Balance"<<endl;
					cout<<"[2] withdraw" <<endl;
					cout<<"[3] Deposit"<<endl;
					cout<<"[4] Quit"<<endl;
					cout<<endl;
					cout<<"Enter option  :";
					cin>>choice;


                   switch(choice)
                   {
                   	case 1:
                   		cout<<"Balance Inquiry"<<endl;
                   		cout<<"your current Balance rupees"<<balance1<<endl;
                   		continue;
                   		case 2:
                   			cout<<"withdraw"<<endl;
                   			cout<<"enter  amount in rupees  :";
                   			cin>>withdraw;
                   			balance1 =balance1 -withdraw;
                   			cout<<"you withdraw  rupees :"<<withdraw<<endl;
                   			cout<<"your remaining  balance is rupees :"<<balance1<<endl;
                   			               continue;
                   	case  3:
                   		cout<<"Deposit"<<endl;
                   		cout<<"Enter amount in rupees  :";
                   		cin>>deposit;
                   		balance1 = balance1 + deposit;
                   		cout<<"You deposited rupees  :" <<deposit<<endl;
                   		cout<<"your  new balance is rupees :"<<balance<<endl;
                   		continue;
                   		case 4:
                   			cout<<"EXIT MODE"<<endl;
                   			system("cls");
                   			break;
                   		default:
                   			cout<<"Invalid Option"<<endl;
                   			continue;
                   			
				   }
				   break;
				}
				break;
			}
			else  if(i==2)
			{
				cout<<"card is captured"<<endl;
			}
			else
			{
				cout<<"pls try again"<<endl;
			}
					}
	}
}
