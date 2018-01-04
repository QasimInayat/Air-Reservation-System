#include<iostream>
#include<string>
#include <windows.h>
#include "MMSystem.h"

using namespace std;

//@@@@@@@@@@@@@ Funtion#1 For Select Airline@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void starline();
string booking()
{	int airline_choise;string air;
   // string airline;
	cout<<"\n\n\n\n\n\t\t\t\tCHOOSE AIRLINES" <<endl;
   cout<<"\t_________________________________________________________" <<endl;
	cout<<"\n\n\t\tPress 1 for PIA";
	cout<<"\n\t\tPress 2 for SHAHEEN Air Ways\n";
	cout<<"\n\t\tEnter your choice: ";
	PlaySound(TEXT("Choose_airlines.wav"),NULL, SND_SYNC);
	cin>>airline_choise;
	system("cls");
	switch (airline_choise)
	{
		case 1:
		{
	//	cout<<"\n\n\n\n\t\tWELCOME TO PAKISTAN INTERNATIONAL AIRLINE";
		cout<<"\a";
		air="PIA";
		break;
			}
		case 2:
			{
//		cout<<"\n\n\n\n\t\tWELCOME TO ABC AIRLINE";
		cout<<"\a";
		air="SHAHEEN Air Ways";
		break;
			}
		default:
	{
		air="def";
			 	cout<<"\n\n\n\n\n\n\t\tSorry..! You have entered an invalid choice.\n\n" <<endl;
	 	PlaySound(TEXT("Sorry.wav"),NULL, SND_SYNC);
		system("pause");
		break;
}
}
return (air);

	};
//@@@@@@@@@@@@@@@@@@@@  Use Function#2 For Local Destination	@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


string choose_LocalDestination()
{	string dist;
	int choice;

	//desired destination//
	for(int c=1;c<8;c++)	
	{	system ("cls");
	cout<<"\n\n\n\n\t\t\tCHOOSE YOUR DESIRED DESTINATION"<<endl;
	cout<<"\t_________________________________________________________" <<endl;
	
	cout<<"\n\n\t\t\t1)Islamabad\n";
	cout<<"\t\t\t2)Karachi\n";
	cout<<"\t\t\t3)Quetta\n";
	cout<<"\t\t\t4)Peshawar\n";
	cout<<"\t\t\t5)Sialkot\n";
	cout<<"\t\t\t6)Rawalpindi\n";
	cout<<"\n\t\t\tEnter your Choice: ";
	PlaySound(TEXT("Desired_destination.wav"),NULL, SND_SYNC);
	cin>>choice;
		switch(choice)
		{
		case 1:
		{	
			dist="Islamabad";
			break;}
		case 2:
	{			dist="Karachi";
			break;}
		case 3:
	{			dist="Quetta";
			break;}
		case 4:
	{		dist="Peshawar";
			break;}
		case 5:
			dist="Sialkot";
			break;
		
		case 6:
			dist="Rawalpindi";
		break;
		default:
		dist="def";
				 	cout<<"\n\n\n\n\n\n\t\tSorry..! You have entered an invalid choice.\n\n" <<endl;
	 	PlaySound(TEXT("Sorry.wav"),NULL, SND_SYNC);
		system("pause");
		break;	
		}
		if(dist=="def")
		{
		}
		else
		{break;
		}
	}


	return (dist);
	};

//@@@@@@@@@@@@@@@@@@@@Use Function#2 For International destination@@@@@@@@@@@@@

string choose_InternationalDestination()
{
int cho;string dist;

for(int a=1;a<8;a++)	
	{	
	system ("cls");
	cout<<"\n\n\n\n\t\t\tCHOOSE YOUR DESIRED DESTINATION"<<endl;
	cout<<"\t_________________________________________________________" <<endl;
	cout<<"\n\n\t\t\t1)Dubai";
	cout<<"\n\t\t\t2)Canada";
	cout<<"\n\t\t\t3)U.S.A";
	cout<<"\n\t\t\t4)Saudi Arabia";
	cout<<"\n\t\t\t5)London\n";
	cout<<"\n\t\t\tEnter your Choice: "; 
	PlaySound(TEXT("Desired_destination.wav"),NULL, SND_SYNC);
	cin>>cho;
		switch(cho)
		{
		case 1:
		{	dist="Dubai";
			break;}
		case 2:
	{			dist="Canada";
			break;}
		case 3:
	{			dist="U.S.A";
			break;}
		case 4:
	{		dist="Saudi Arabia";
			break;}
		case 5:
			dist="London";
			break;
		default:
		dist="defu";
				 	cout<<"\n\n\n\n\n\n\t\tSorry..! You have entered an invalid choice.\n\n" <<endl;
	 	PlaySound(TEXT("Sorry.wav"),NULL, SND_SYNC);
		system("pause");
		break;	
		}
	if	(dist=="defu")
	{system ("cls");
	}
	else
	{break;
	}	
	}
	return (dist);	
};

//@@@@@@@@@@@@@@@@@@@@Use Function#2 For Date@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

string date()
{
	int choice;string date;
	for(int a=1;a<8;a++)	
	{	
	system ("cls");
	cout<<"\n\n\n\n\t\t\t\tCHOOSE FLIGHT'S SCHEDULE"<<endl;
	cout<<"\t\t_________________________________________________________\n" <<endl;
	cout<<"\n\t\t\t1)06-May-2015";
	cout<<"\n\t\t\t2)09-May-2015";
	cout<<"\n\t\t\t3)11-May-2015";
	cout<<"\n\t\t\t4)13-May-2015 \n";
	cout<<"\n\t\t\tEnter your choice: ";
	PlaySound(TEXT("flight_schedule.wav"),NULL, SND_SYNC);
	cin>>choice;
	
	switch(choice)
	{
		case 1:
		cout<<"\a";
		date="06-May-2015";	
		break;
		case 2:
		cout<<"\a";
		date="09-May-2015";
		break;
		case 3:
		cout<<"\a";
		date="11-May-2015";
		break;
		case 4:
		cout<<"\a";
		date="13-May-2015";
		break;
		default:
		cout<<"\a";
		 	cout<<"\n\n\n\n\n\n\t\tSorry..! You have entered an invalid choice.\n\n" <<endl;
	 	PlaySound(TEXT("Sorry.wav"),NULL, SND_SYNC);
		system("pause");
		date="def";
		break;	
	}
if(date=="def")
{
}
else{break;
}	
}	return(date);
	



};

//@@@@@@@@@@@@@@@@@@@@Use Function#2 For Timing@@@@@@@@@@@@@@@@@@@@@@@@

string Timing()
{int choice;string t;
system ("cls");
	for(int a=1;a<8;a++)	
	{	
	system ("cls");
	cout<<"\n\n\n\n\t\t\t\t   CHOOSE TIMING"<<endl;
	cout<<"\t\t_________________________________________________________\n" <<endl;
	cout<<"\n\t\t\t1)03:00 AM";
	cout<<"\n\t\t\t2)09:00 Am";
	cout<<"\n\t\t\t3)03:00 Pm";
	cout<<"\n\t\t\t4)09:00 PM\n";
	cout<<"\n\t\t\tEnter your Choice: ";
	PlaySound(TEXT("timing.wav"),NULL, SND_SYNC);
	cin>>choice;
switch (choice)
{
case 1:
{
t="03:00 AM";
break;}
case 2:
t="09:00 AM";
break;
case 3:
t="03:00 PM";
break;
case 4:
t="09:00 PM";
break;
default:
t="def";
cout<<"\n\n\n\n\n\n\t\tSorry..! You have entered an invalid choice.\n\n" <<endl;
	 	PlaySound(TEXT("Sorry.wav"),NULL, SND_SYNC);
		system("pause");
break;

}if(t=="def")
{
}
else
{break;
}
}
return(t);

};	

void starline()
{
	for (int i=0; i<50; i++)
	cout<<"*";
}
	


int main()
{	string name[10],cnic[10],contact_num[10],passport[10],time[10],t,d;
	int choice,responce,a=1;string responce1,res;
	string destination,destination1[10];double price,price1[10],seat[10],s=12;
	
	
	system("COLOR F0");
	cout<<"\n\n\n\n\n\n\n\n\n\n\t           WELCOME TO AIRLINE TICKET RESERVATION SYSTEM";
	PlaySound(TEXT("Intro.wav"),NULL, SND_SYNC);
	Sleep(1500);
	system ("cls");
	cout<<"\a";
	for(int e=1;e!=10;e++)
	{system ("cls");
//	system("COLOR 4c");
for(int c=1;c<8;c++)	
	{	system ("cls");
	//starline();
	cout<<"\n\n\n\n\n\n\n\t*************************************************************" <<endl;
	cout<<"\t\t\t\t   MAIN MENU" <<endl;
	cout<<"\t*************************************************************\n\n";
	cout<<"\n\t\tPress 1 to  View Available Airline\n";
	cout<<"\t\tPress 2 for Booking  \n";
	cout<<"\t\tPress 3 for Information\n";
	cout<<"\t\tPress 4 for Cancelation\n\n";
	cout<<"\t\tEnter your choice: ";
//	PlaySound(TEXT("Main_menu.wav"),NULL, SND_SYNC);
	PlaySound(TEXT("Main_menu.wav"),NULL, SND_SYNC);
	cin>>choice;
	system ("cls");
	
	switch (choice)
	{
			case 1:
	{
		int choice;
		cout<<"\a"; 	
		responce1=booking();
	
	

	for(int c=1;c<8;c++)	
	{
	if(responce1=="def")
	{		system("cls");
	
	
			responce1=booking();
	}
	else
	{break;
	}
}for(int c=1;c<8;c++)

{		system("cls");
		//cout<<"\n\n\n\n\n"<<responce1;
		cout<<"\n\n\n\n\n\t\t*************************************************\n";
		cout<<"\n\n\t\t\tPress 1 for Domestic";
		cout<<"\n\t\t\tPress 2 for International\n";
		cout<<"\n\t\t\tEnter your choice: ";
		PlaySound(TEXT("Domestic.wav"),NULL, SND_SYNC);
		cin>>choice;
	
		
	system ("cls");
		
	switch (choice)	
	{
	case 1:
		{	
			cout<<"\a";
			cout<<"\n\n\n\n\t***************************** DEPARTURES *****************************\n\n" <<endl;
			cout<<"\tTime\tTo\t\tFlight No.\tGate No.\tRemarks" <<endl;
			cout<<"\t______________________________________________________________________\n" <<endl;
			cout<<"\t09:35\tISLAM.\t\tSI2753\t\tB2\t\tON TIME" <<endl;
			cout<<"\t09:55\tKARACHI\t\tYRAI56\t\tC4\t\tDELAYED" <<endl;
			cout<<"\t10:45\tQUETA\t\tSA65FI\t\tA1\t\tCANCELLED" <<endl;
			cout<<"\t11:20\tPESH.\t\tTI2568\t\tD3\t\tCHECK IN ON" <<endl;
			cout<<"\t09:55\tSIALKOT\t\tJA4658\t\tC2\t\tON TIME" <<endl;
			cout<<"\t09:55\tRAWAL.\t\tSA4622\t\tA6\t\tON TIME" <<endl;
			cout<<"\t______________________________________________________________________\n";
			cout<<"\t11-May-2015\n\n" <<endl;	
			
	system("pause");
	cout<<"\a\a";
	break;
	}
	case 2:
		{	
			cout<<"\a";
			cout<<"\n\n\n\n\t***************************** DEPARTURES *****************************\n\n" <<endl;
			cout<<"\tTime\tTo\t\tFlight No.\tGate No.\tRemarks" <<endl;
			cout<<"\t______________________________________________________________________\n" <<endl;
			cout<<"\t09:35\tDUBAI\t\tQI2753\t\tA1\t\tON TIME" <<endl;
			cout<<"\t09:55\tCANADA\t\tYR3256\t\tC3\t\tDELAYED" <<endl;
			cout<<"\t10:45\tU.S.A\t\tSA6535\t\tA2\t\tCANCELLED" <<endl;
			cout<<"\t11:20\tSAUDI\t\tMR2568\t\tD6\t\tCHECK IN ON" <<endl;
			cout<<"\t09:55\tLONDON\t\tAI4658\t\tD4\t\tON TIME" <<endl;
			cout<<"\t______________________________________________________________________\n";
			cout<<"\t11-May-2015\n\n" <<endl;
	system("pause");
			cout<<"\a\a";
			break;
		}
		default:
			destination="def";
		 	cout<<"\n\n\n\n\n\n\t\tSorry..! You have entered an invalid choice.\n\n" <<endl;
	 	PlaySound(TEXT("Sorry.wav"),NULL, SND_SYNC);
		system("pause");
			
}
if(destination=="def")
{
}
else
{break;
}
}
	
	

		break;
		}
	
	case 2:
	{
	cout<<"\a";
	responce1=booking();
	
	

	for(int c=1;c<8;c++)	
	{
	if(responce1=="def")
	{		system("cls");
	
	
			responce1=booking();
	}
	else
	{break;
	}
	
}///for shaheen/////
for(int c=1;c<8;c++)

{		system("cls");
		//cout<<"\n\n\n\n\n"<<responce1;
			
		
		
		
		cout<<"\n\n\n\n\n\t\t*************************************************\n";
		cout<<"\n\n\t\t\tPress 1 for Domestic";
		cout<<"\n\t\t\tPress 2 for International\n";
		cout<<"\n\t\t\tEnter your choice: ";
		PlaySound(TEXT("Domestic.wav"),NULL, SND_SYNC);
		cin>>choice;
		
		
		
		
	
		
	system ("cls");
		
	switch (choice)	
	{
	case 1:
		{	
		cout<<"\a";
	destination=choose_LocalDestination();
	break;
	}
	case 2:
		{
			cout<<"\a";
	destination=choose_InternationalDestination();
			break;
		}
		default:
			destination="def";
				 	cout<<"\n\n\n\n\n\n\t\tSorry..! You have entered an invalid choice.\n\n" <<endl;
	 	PlaySound(TEXT("Sorry.wav"),NULL, SND_SYNC);
		system("pause");
}
if(destination=="def")
{
}
else
{break;
}
}


system ("cls");
	

if (destination=="Islamabad")
{
cout<<"\a";
price=3000;
//break;
}
else if (destination== "Karachi")
{
cout<<"\a";
price=2500;

//break;
}	
else if (destination=="Quetta")
{
cout<<"\a";
price=3500;
}
else if (destination=="Peshawar")
{
cout<<"\a";
price=4000;
}
else if (destination=="Sialkot")
{
cout<<"\a";
price=4500;
}
else if (destination=="Rawalpindi")
{
cout<<"\a";
price=4500;
}
else if (destination=="Dubai")
{
cout<<"\a";
price=35000;
}
else if (destination=="Canada")
{
	cout<<"\a";
   price=35000;
}
else if (destination=="U.S.A")
{
	cout<<"\a";
   price=36000;
}
else if (destination=="Saudi Arabia")
{
	cout<<"\a";
   price=37000;
}
else if (destination=="London")
{
	cout<<"\a";
   price=38000;
}
else
{
	cout<<"\a";
	cout<<"Invalid Choice";
}

		system ("cls");
		for(int c=1;c<8;c++)

{		system("cls");
	cout<<"\n\n\n\n\t\t\t\tCHOOSE YOUR TICKET"<<endl;
	cout<<"\t\t_________________________________________________________" <<endl;
	//		int choice;
	cout<<"\n\n\t\t\tPress 1 for One WAY Ticket";
	cout<<"\n\t\t\tPress 2 for Return Ticket\n";
	cout<<"\n\t\t\tEnter your Choice: ";
	PlaySound(TEXT("choose_ticket"),NULL, SND_SYNC);
	cin>>choice;
	switch(choice)
	{
	case 1:
	
{//	choice='One WAY Tickets';
	price=price;
	break;
	}
	case 2:
	{price=price*2;
	break;
	}
	default:
		{price==5;
		cout<<"\n\n\n\n\n\n\t\tSorry..! You have entered an invalid choice.\n\n" <<endl;
	 	PlaySound(TEXT("Sorry.wav"),NULL, SND_SYNC);
		system("pause");
		break;
		}
}
if(price==5)
{
}
else{break;
}
}
d=date();

res=Timing();




	for(int i=a;i<a+1;i++)
	{system ("cls");
	
	cout<<"\n\n\n\n\t\t\t\tFILL UP INFORMATION"<<endl;
	cout<<"\t\t_________________________________________________________" <<endl;
	PlaySound(TEXT("information.wav"),NULL, SND_SYNC);

	destination1[i]=destination;
	time[i]=res;
	price1[i]=price;
	
	cout<<"\n\t\t\tEnter Name: ";
	cin>>name[i];
	
	cout<<"\t\t\tEnter cnic No.: ";
	cin>>cnic[i];
	
	cout<<"\t\t\tEnter Passport No.: ";
	cin>>passport[i];
	
	cout<<"\t\t\tContact No.: ";
	cin>>contact_num[i];
	cout<<"\a\a\a";
	seat[i]=s+1;
	//system("cls");
	cout<<"\t\t\tYour Ticket num ="<<i<<endl;
	cout<<"\t\t\tSeat num="<<seat[i]<<endl;
	cout<<"\t\t\tTotal Amount="<<price<<endl;
	a=a+1;
	cout<<"\n\tThank you so much...Your Ticket has been successfully Booked.\n";
	PlaySound(TEXT("Successsfully_Booked.wav"), NULL, SND_SYNC);
	cout<<"\n";
	
	system("pause");
	break;

system("pause");
system ("cls");
break;
}break;
}

	case 3:
	{ 
	int a,i;
		cout<<"\a";
			cout<<"\n\n\n\n\t\t\t\t\tENQUIRY"<<endl;
	cout<<"\t\t_________________________________________________________" <<endl;
		cout<<"\n\n\tEnter ticket No.: ";
cin>>i;
cout<<"\n\t\tName="<<name[i];
cout<<"\n\t\tC.N.I.C Num="<<cnic[i];
cout<<"\n\t\tPassport Num="<<passport[i];
cout<<"\n\t\tContact Num="<<contact_num[i];
cout<<"\n\t\tFlight Timing ="<<time[i];
cout<<"\n\t\tAirline ="<<responce1;
cout<<"\n\t\tPrice ="<<price1[i];
cout<<"\n\t\tdestination ="<<destination1[i];
//system("pause");
cout<<"\n\t\tSeat Num ="<<seat[i] <<endl;
system("pause");
system("cls");
break;
		}
	case 4:
	{int choice;
	int i;

cout<<"\a";
	cout<<"\n\n\n\n\t\t\t\t      CANCELATION"<<endl;
	cout<<"\t\t_________________________________________________________\n\n" <<endl;	
cout<<"\n\n\t\tEnter ticket No.: ";
cin>>i;
cout<<"\n\t\tAre You Sure You Want TO Cancel The Ticket\n";
cout<<"\n\t\t\tIf YES Press 1"<<endl;
cout<<"\n\t\t\tIf NO Press 2\n"<<endl;
cout<<"\n\t\t\tEnter your Choice: ";
PlaySound(TEXT("Cancel.wav"), NULL, SND_SYNC);
cin>>choice;
switch(choice)
{
case 1:
{

name[i]="\0";
cnic[i]="";
passport[i]="";
contact_num[i]="";
time[i]="";
responce1="";
price1[i]=0;
destination1[i]="";
//system("pause");
seat[i]=0;
cout<<"\n\n";
cout<<"Your Ticket has been successfully Canceled.";
PlaySound(TEXT("Success.wav"),NULL, SND_SYNC);
system("pause");
		break;
	}
	case 2:
	break;				

system ("cls");



	}

}
//	return 0;

if(choice>=0&&choice<=5)
{break;
}
else
{
}


}

}
}
}


