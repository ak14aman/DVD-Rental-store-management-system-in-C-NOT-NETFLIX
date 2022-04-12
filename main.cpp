// By Aman Kumar

#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <windows.h>
#include <string>
#include <stdio.h>
#include <time.h>
#include <cstdlib>

using namespace std;

void bootingup();
void menu();
void notnetflix();
void admin();
void user();
void about();
void exit();
void Register();
void login();
void loadUserData();
int userCount();
void view();
void rent();
void buy();
void prevUserTxn();
void loadMovieData();
int movCount();
void welcome();
bool checkUID(char &temp );


struct Movie
{
    int movieID;
    char name[100];
    int year;
    float imdb;
    char ratedFor[6];

};

struct Customer
{
    char name[100];
    char id[50];
    char password[100];
    char phno[13];
    char address[500];
};

struct utxn
{
    char id[10], nam[50], invoice[20], buyrent[5], day[5], amt[10];
};

Customer cust[1000];
Movie film[1000];
utxn UT;



void notnetflix()
{
    
	//Boarder();
	//gotoxy(0, 30);
	ifstream ifs ("notnetflix.txt");    
	string Lines = "";
    
    if (ifs)
    {
		while (ifs.good ())
		{
	    	string TempLine;
	    	getline (ifs , TempLine);
	    	TempLine += "\n";
	    
	    	Lines += TempLine;
		}
	    cout << Lines;
        
	}

	//cout<<"\n\t  |\t\t\t\t\t\t\t";
	ifs.close ();
	//Sleep(1000);
}

void bootingup()
{

    int timer =5+ rand()%20;
    int row,col,r,c,q;
    //gotoxy(65,34);
    cout<<"\n\n\n \t\t\t\t\t\t\tBOOTING UP...";
    //gotoxy(60,36);
    for(r=1;r<=timer;r++)
	{
    for(q=0;q<=100000000;q++);//to display the character slowly
    printf("%c",177);
	}
    Sleep(100);
    system("cls");
	
}

void loadUserData()
{
    ifstream ifs;
	ifs.open("customers.txt");
	int custNum = 0;

	while (!ifs.eof())
	{
		ifs.getline(cust[custNum].name,20,';');
        ifs.getline(cust[custNum].id,50,';');
		ifs.getline(cust[custNum].password,20,';');
		ifs.getline(cust[custNum].phno,13,';');
		ifs.getline(cust[custNum].address,100);
		custNum++;
	}
	
	ifs.close();
}

void loadMovieData()
{
    ifstream mfs;
	mfs.open("movieList.txt");
	int movNum = 0;

	while (!mfs.eof())
	{
		mfs>>film[movNum].movieID;
        mfs.ignore(5,';');
		mfs.getline(film[movNum].name,100,';');
		mfs>>film[movNum].year;
        mfs.ignore(5,';');
		mfs>>film[movNum].imdb;
        mfs.ignore(5,';');
		mfs.getline(film[movNum].ratedFor,20);
		movNum++;
	}
	
	mfs.close();
}

int userCount()
{
	int numOfCust = 0;
	ifstream ifs("customers.txt"); 

	string word;
	while (getline(ifs, word))
	{
    	if (!word.empty())
        	numOfCust++;
	}

	ifs.close();

	return numOfCust;
}

int movCount()
{
	int numOfMov = 0;
	ifstream ifs("movieList.txt"); 

	string word;
	while (getline(ifs, word))
	{
    	if (!word.empty())
        	numOfMov++;
	}

	ifs.close();

	return numOfMov;
}

void menu()
{
    system("cls");
    notnetflix();
    
    int n;

    cout<<"\n \t\t\t\t\t 1. ADMIN";
    cout<<"\n \t\t\t\t\t 2. USER";
    cout<<"\n \t\t\t\t\t 3. About Us";
    cout<<"\n \t\t\t\t\t 4. EXIT";

    cout<<"\n\n \t\t\t\t\t Enter an option: ";
    cin>>n;
    cout<<endl;

    //system("cls");

    switch(n)
    {
        case 1: cout<<"\n \t\t\t\t\t Under development. Sorry for inconvenience.";
                cout<<"\n \t\t\t\t\t Press any key to go back.";
                getch();
                menu();
                //admin();
                break;
        case 2: user();
                break;
        case 3: about();
                break;
        case 4: cout<<"\n \t\t\t\t\t Thank you! Have a good day :D\n\n";
                exit(0);
                break;
        default: {
                cout<<"\n \t\t\t\t\t Please enter a valid option.";
                 cout<<"\n \t\t\t\t\t Press any key to continue";
                 getch();
                 menu();
                }
    }

}

void user()
{
    system("cls");
    notnetflix();

    int x;
    cout<<"\n \t\t\t\t\t 1. Log in";
    cout<<"\n \t\t\t\t\t 2. Register";
    cout<<"\n \t\t\t\t\t 3. Back to Main Menu";
    cout<<"\n\n \t\t\t\t\t Enter an option: ";
    cin>>x;
    cout<<endl;
    

    if(x==1)
    {
        login();
    }
    else if(x==2)
    {
        Register();
    }
    else if(x==3)
    {
        menu();
    }
    else
    {
        cout<<"\n\n \t\t\t\t\t Please enter a valid option.";
        user();
    }
}

void welcome()
{
    system("cls");
    notnetflix();
    cout<<"\n \t\t\t\t\t Welcome. Hope you are having a good day!";
    
    int t;
    cout<<"\n\n \t\t\t\t\t 1. View all movies (DVDs)";
    cout<<"\n \t\t\t\t\t 2. Rent";
    cout<<"\n \t\t\t\t\t 3. Buy";
    cout<<"\n \t\t\t\t\t 4. View previous transactions";
    cout<<"\n \t\t\t\t\t 5. Main menu";
    cout<<"\n\n \t\t\t\t\t Please enter an option: ";
    cin>>t;

    switch(t)
    {
        case 1: view();
                break;
        case 2: rent();
                break;
        case 3: buy();
                break;
        case 4: prevUserTxn();
                break;
        case 5: menu();
                break;
        default: 
                {   
                 cout<<"\n \t\t\t\t\t Please enter a valid option.";
                 cout<<"\n \t\t\t\t\t Press any key to continue";
                 getch();
                 welcome();
                }
    }
}

void login()
{
    system("cls");
    loadUserData();
    notnetflix();
    char id[50];
    char pass[100];

    cout<<"\n \t\t\t\t\t Enter User Id (integer): ";
    cin.ignore(256,'\n');
    cin.getline(id,50);

    cout<<"\n \t\t\t\t\t Enter password: ";
    //cin.ignore(256,'\n');
    cin.getline(pass,100);
    bool flag=false;

    for(int i=0; i<userCount(); i++)
    {
        if(strcmp(id,cust[i].id)==0)
        {
            if(strcmp(pass,cust[i].password)==0)
            {
                cout<<"\n\n \t\t\t\t\t You are succesfully logged in.";
                //Sleep(5000);
                flag=true;
                break;
            }
            else
            {
                cout<<"\n \t\t\t\t\t Wrong User Id or password.";
                cout<<"\n \t\t\t\t\t Please try again.";
                cout<<"\n \t\t\t\t\t Press any key to go back.";
                getch();
                flag=true;
                user();
            }
        }
    }
    
    if(!flag)
    {
        cout<<"\n \t\t\t\t\t User ID not found.";
        cout<<"\n \t\t\t\t\t Please register as new user.";
        cout<<"\n \t\t\t\t\t Press any key to go back.";
        getch();
        user();
    }   

    welcome();

}

void Register()
{
    system("cls");
    notnetflix();

    char uid[50];
    //string pass, repass, name, address;
    char name[100];
    char no[13];
    char pass[100];
    char address[500];
    char repass[100];

    cout<<"\n \t\t\t\t\t Please enter below details to register at NOT NETFLIX.";
    cout<<"\n \t\t\t\t\t Enter Name: ";
    cin.ignore(256,'\n');
    cin.getline(name,100);

    bool uflag=false;

    while(!uflag)
    {
        cout<<"\n \t\t\t\t\t Enter User Id (integer): ";
        //cin.ignore(256,'\n');
        cin.getline(uid,50);
        //cin.ignore(1,'\n');
        for(int i=0; i<userCount(); i++)
        {
            if(strcmp(uid,cust[i].id)==0)
            {
                cout<<"\n \t\t\t\t\t This user id is already taken please choose another.";
                break;
            }
            else
            {
                uflag=true;
                break;
            }
        }
    }

    cout<<"\n \t\t\t\t\t Enter password: ";
    //cin.ignore(256,'\n');
    cin.getline(pass,100);
    cout<<"\n \t\t\t\t\t Enter phone number: ";
    //cin.ignore('\n');
    cin.getline(no,13);
    cout<<"\n \t\t\t\t\t Enter address: ";
    //cin.ignore('\n');
    cin.getline(address,500);

    bool pflag=false;

    while(!pflag)
    {
        cout<<"\n \t\t\t\t\t Please re-enter your password: ";
        //cin.ignore('\n');
        cin.getline(repass,100);
        
            if(strcmp(repass,pass)!=0)
            {
                cout<<"\n \t\t\t\t\t Your password dosen't match, please re-enter correct password.";
            }
            else
            {
                pflag=true;
            }
        
    }

    //int tempCustNum=userCount();
    ofstream log;
    log.open("customers.txt", fstream::app);
    log<<"\n";
    log<<name<<";";
    log<<uid<<";";
    log<<pass<<";";
    log<<no<<";";
    log<<address;

    log.close();
    //loadUserData();


    cout<<"\n\n \t\t\t\t\t Thank you for registering!";
    cout<<"\n \t\t\t\t\t Press any key to go back to and then log in.";
    getch();
    user();
}

void view()
{
    system("cls");
    notnetflix();

    cout<<"\t\t\t"<<left<<setw(7)<<"ItemID"<<" "<<left<<setw(50)<<"Name"<<" "<<left<<setw(5)<<"Year"<<" "<<left<<setw(5)<<"IMDB"<<" "<<left<<setw(5)<<"Rated";
    cout<<endl;
    for(int i=0; i<movCount(); i++)
    {
        cout<<"\t\t\t"<<left<<setw(7)<<film[i].movieID<<" "<<left<<setw(50)<<film[i].name<<" "<<left<<setw(5)<<film[i].year<<" "<<left<<setw(5)<<film[i].imdb<<" "<<left<<setw(5)<<film[i].ratedFor;
        cout<<endl;
    }

    cout<<"\n \t\t\t\t\t Press any key to go back.";
    getch();
    welcome();

}

void rent()
{
    system("cls");
    notnetflix();
    loadUserData();

    int days, ino;
    char UserID[50];
    
    cout<<"\n \t\t\t\t\t Please enter below details to rent your favourite item:\n";

    cout<<"\n \t\t\t\t\t Press 1 to view list of movies again: ";
    cin>>ino;

    cout<<"\n\n";
    if(ino==1)
    {
        cout<<"\t\t\t\t"<<left<<setw(7)<<"ItemID"<<" "<<left<<setw(50)<<"Movie Name"<<" "<<left<<setw(5)<<"Year"<<" "<<left<<setw(5)<<"IMDB"<<" "<<left<<setw(5)<<"Rated";
        cout<<endl;
        for(int i=0; i<movCount(); i++)
        {
            cout<<"\t\t\t\t"<<left<<setw(7)<<film[i].movieID<<" "<<left<<setw(50)<<film[i].name<<" "<<left<<setw(5)<<film[i].year<<" "<<left<<setw(5)<<film[i].imdb<<" "<<left<<setw(5)<<film[i].ratedFor;
            cout<<endl;
        }
    }
    else
    cout<<"";

    cout<<"\n\n \t\t\t\t\t Enter Item Number: ";
    cin>>ino;

    bool mflag=false;
    int tempMovID;

    while(!mflag)
    {
        
        for(int j=0; j<movCount(); j++)
        {
            
            if(ino == film[j].movieID)
            {
                mflag=true;
                tempMovID=j;
                break;
            }
             
        }
        if(!mflag)
        {
            cout<<"\n\n \t\t\t\t\t No such Item exists, Please enter correct Item number: ";
            cin>>ino;
        }
    }



    cout<<"\n \t\t\t\t\t Enter number of days to rent: ";
    cin>>days;
    cout<<"\n \t\t\t\t\t Enter User ID: ";
    cin.ignore(256,'\n');
    cin.getline(UserID,50);

    
    for(int i=0; i<userCount(); i++)
    {
        if(strcmp(UserID,cust[i].id)==0)
            break;
    
        else
        {
                cout<<"\n \t\t\t\t\t Invalid User Id.";
                cout<<"\n \t\t\t\t\t Please try again.";
                //cout<<"\n \t\t\t\t\t Press any key to go back.";
                getch();
                
                rent();
        
        }
    }
    

    cout<<"\n\n \t\t\t\t\t Total amount: Rs. "<<days*20<<"/-"; 
    cout<<"\n\n \t\t\t\t\t Press any key for bill. ";
    getch();
    system("cls");
    notnetflix();

    //Printing bill
    int tempID;
    for(int j=0; j<userCount(); j++)
    {
        if(strcmp(UserID,cust[j].id)==0)
        {
            tempID=j;
            break;
        }
    }

    
    srand(time(0));
    int iNum =(rand()%1000 + 10000);

    cout << "\n                     NOT NETFLIX - Customer Invoice                     "<<endl;
    cout << "	///////////////////////////////////////////////////////////"<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Invoice Number"<<"| "<<left<<setfill(' ')<<"#IN"<<setw(10)<<iNum<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Item Number"<<"| "<<left<<setfill(' ')<<setw(13)<<ino<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Customer Name"<<"| "<<left<<setfill(' ')<<setw(13)<<cust[tempID].name<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Customer ID"<<"| "<<left<<setfill(' ')<<setw(13)<<cust[tempID].id<<endl;
    cout<<left<<setfill('-')<<setw(47)<<"	| Rent/Buy"<<"| "<<left<<setfill(' ')<<setw(13)<<"RENT"<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Number of days"<<"| "<<left<<setfill(' ')<<setw(13)<<days<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Amount"<<"| "<<left<<setfill(' ')<<setw(13)<<days*20<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| GST (16%)"<<"| "<<left<<setfill(' ')<<setw(13)<<((days*20)*0.16)<<endl<<endl;
    cout << "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Total Payble Amount"<<"| Rs. "<<left<<setfill(' ')<<setw(9)<<(((days*20)*0.16)+days*20)<<endl;
    cout << "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    cout << "	 # This is a computer generated invoce and it does not"<<endl;
    cout << "	 require an authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout << "	 Thank you for shopping at NOT NTEFLIX, see you again."<<endl;
    cout << "	 Have a good day!"<<endl;
    cout << "	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

    //exporting bill in .txt
    ofstream ofs;
	ofs.open("bill.txt");

    ofs<< "\n                     NOT NETFLIX - Customer Invoice                     "<<endl;
    ofs<< "	///////////////////////////////////////////////////////////"<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Invoice Number"<<"| "<<left<<setfill(' ')<<"#IN"<<setw(10)<<iNum<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Item Number"<<"| "<<left<<setfill(' ')<<setw(13)<<ino<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Customer Name"<<"| "<<left<<setfill(' ')<<setw(13)<<cust[tempID].name<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Customer ID"<<"| "<<left<<setfill(' ')<<setw(13)<<cust[tempID].id<<endl;
    ofs<<left<<setfill('-')<<setw(47)<<"	| Rent/Buy"<<"| "<<left<<setfill(' ')<<setw(13)<<"RENT"<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Number of days"<<"| "<<left<<setfill(' ')<<setw(13)<<days<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Amount"<<"| "<<left<<setfill(' ')<<setw(13)<<days*20<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| GST (16%)"<<"| "<<left<<setfill(' ')<<setw(13)<<((days*20)*0.16)<<endl<<endl;
    ofs<< "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Total Payble Amount"<<"| Rs. "<<left<<setfill(' ')<<setw(9)<<(((days*20)*0.16)+days*20)<<endl;
    ofs<< "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    ofs<< "	 # This is a computer generated invoce and it does not"<<endl;
    ofs<< "	 require an authorised signture #"<<endl;
    ofs<<" "<<endl;
    ofs<< "	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    ofs<< "	 Thank you for shopping at NOT NTEFLIX, see you again."<<endl;
    ofs<< "	 Have a good day!"<<endl;
    ofs<< "	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

    ofs.close();

    //storing txn details in transactions.txt
    ofstream txn;
    txn.open("userTxn.txt", fstream::app);
    
    txn<<cust[tempID].id<<";";
    txn<<film[tempMovID].name<<";";
    txn<<"#IN"<<iNum<<";";
    txn<<"RENT"<<";";
    txn<<days<<";";
    txn<<(((days*20)*0.16)+days*20)<<";";
    txn<<"\n";

    txn.close();



    cout<<"\n \t\t\t\t\t Please find the bill in current directory as 'bill.txt' ";
    cout<<"\n \t\t\t\t\t Press any key to go back. ";
    getch();
    welcome();

    
}

void buy()
{
    system("cls");
    notnetflix();
    loadUserData();

    int ino;
    char UserID[50];
    
    cout<<"\n \t\t\t\t\t Please enter below details to buy your favourite item:\n";

    cout<<"\n \t\t\t\t\t Press 1 to view list of movies again: ";
    cin>>ino;

    cout<<"\n\n";
    if(ino==1)
    {
        cout<<"\t\t\t\t"<<left<<setw(7)<<"ItemID"<<" "<<left<<setw(50)<<"Movie Name"<<" "<<left<<setw(5)<<"Year"<<" "<<left<<setw(5)<<"IMDB"<<" "<<left<<setw(5)<<"Rated";
        cout<<endl;
        for(int i=0; i<movCount(); i++)
        {
            cout<<"\t\t\t\t"<<left<<setw(7)<<film[i].movieID<<" "<<left<<setw(50)<<film[i].name<<" "<<left<<setw(5)<<film[i].year<<" "<<left<<setw(5)<<film[i].imdb<<" "<<left<<setw(5)<<film[i].ratedFor;
            cout<<endl;
        }
    }
    else{
        cout<<"";
    }

    cout<<"\n\n \t\t\t\t\t Enter Item Number: ";
    cin>>ino;

    bool mflag=false;
    int tempMovID;

    while(!mflag)
    {
        
        for(int j=0; j<movCount(); j++)
        {
            
            if(ino == film[j].movieID)
            {
                mflag=true;
                tempMovID=j;
                break;
            }
             
        }
        if(!mflag)
        {
            cout<<"\n\n \t\t\t\t\t No such Item exists, Please enter correct Item number: ";
            cin>>ino;
        }
    }



    cout<<"\n \t\t\t\t\t Enter User ID: ";
    cin.ignore(256,'\n');
    cin.getline(UserID,50);

    //cout<<UserID;

    for(int i=0; i<userCount(); i++)
    {
        if(strcmp(UserID,cust[i].id)!=0 && i==userCount()-1)
        {
                cout<<"\n \t\t\t\t\t Invalid User Id.";
                cout<<"\n \t\t\t\t\t Please try again.";
                cout<<cust[i].id;
                //cout<<"\n \t\t\t\t\t Press any key to go back.";
                getch();
                
                buy();
        
        }
    }


    cout<<"\n\n \t\t\t\t\t Total amount: Rs. "<<250<<"/-"; 
    cout<<"\n\n \t\t\t\t\t Press any key for bill. ";
    getch();
    system("cls");
    notnetflix();

    //Printing bill
    int tempID;
    for(int j=0; j<userCount(); j++)
    {
        if(strcmp(UserID,cust[j].id)==0)
        {
            tempID=j;
            break;
        }
    }

    srand(time(0));
    int iNum =(rand()%1000 + 10000);

    cout << "\n                     NOT NETFLIX - Customer Invoice                     "<<endl;
    cout << "	///////////////////////////////////////////////////////////"<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Invoice Number"<<"| "<<left<<setfill(' ')<<"#IN"<<setw(10)<<iNum<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Item Number"<<"| "<<left<<setfill(' ')<<setw(13)<<ino<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Customer Name"<<"| "<<left<<setfill(' ')<<setw(13)<<cust[tempID].name<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Customer ID"<<"| "<<left<<setfill(' ')<<setw(13)<<cust[tempID].id<<endl;
    cout<<left<<setfill('-')<<setw(47)<<"	| Rent/Buy"<<"| "<<left<<setfill(' ')<<setw(13)<<"BUY"<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Amount"<<"| "<<left<<setfill(' ')<<setw(13)<<250<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| GST (16%)"<<"| "<<left<<setfill(' ')<<setw(13)<<((250)*0.16)<<endl<<endl;
    cout << "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout <<left<<setfill('-')<<setw(47)<< "	| Total Payble Amount"<<"| Rs. "<<left<<setfill(' ')<<setw(9)<<(((250)*0.16)+250)<<endl;
    cout << "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    cout << "	 # This is a computer generated invoce and it does not"<<endl;
    cout << "	 require an authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout << "	 Thank you for shopping at NOT NTEFLIX, see you again."<<endl;
    cout << "	 Have a good day!"<<endl;
    cout << "	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;


    //exporting bill in .txt
    ofstream ofs;
	ofs.open("bill.txt");

    ofs<< "\n                     NOT NETFLIX - Customer Invoice                     "<<endl;
    ofs<< "	///////////////////////////////////////////////////////////"<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Invoice Number"<<"| "<<left<<setfill(' ')<<"#IN"<<setw(10)<<iNum<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Item Number"<<"| "<<left<<setfill(' ')<<setw(13)<<ino<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Customer Name"<<"| "<<left<<setfill(' ')<<setw(13)<<cust[tempID].name<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Customer ID"<<"| "<<left<<setfill(' ')<<setw(13)<<cust[tempID].id<<endl;
    ofs<<left<<setfill('-')<<setw(47)<<"	| Rent/Buy"<<"| "<<left<<setfill(' ')<<setw(13)<<"BUY"<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Amount"<<"| "<<left<<setfill(' ')<<setw(13)<<250<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| GST (16%)"<<"| "<<left<<setfill(' ')<<setw(13)<<((250)*0.16)<<endl<<endl;
    ofs<< "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    ofs<<left<<setfill('-')<<setw(47)<< "	| Total Payble Amount"<<"| Rs. "<<left<<setfill(' ')<<setw(9)<<(((250)*0.16)+250)<<endl;
    ofs<< "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
    ofs<< "	 # This is a computer generated invoce and it does not"<<endl;
    ofs<< "	 require an authorised signture #"<<endl;
    ofs<<" "<<endl;
    ofs<< "	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    ofs<< "	 Thank you for shopping at NOT NTEFLIX, see you again."<<endl;
    ofs<< "	 Have a good day!"<<endl;
    ofs<< "	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;

    ofs.close();

    //storing txn details in transactions.txt
    ofstream txn;
    txn.open("userTxn.txt", fstream::app);
    
    txn<<cust[tempID].id<<";";
    txn<<film[tempMovID].name<<";";
    txn<<"#IN"<<iNum<<";";
    txn<<"BUY"<<";";
    txn<<"-"<<";";
    txn<<(((250)*0.16)+250)<<";";
    txn<<"\n";

    txn.close();



    cout<<"\n \t\t\t\t\t Please find the bill in current directory as 'bill.txt' ";
    cout<<"\n \t\t\t\t\t Press any key to go back. ";
    getch();
    welcome();
}

void about()
{
    system("cls");
    notnetflix();
    

    cout<<"\n \t\t\t\t\t This is simulation of an old-time DVD store.";
    cout<<"\n \t\t\t\t\t Well as we all know that NETFLIX was originally a DVD Rental store chain";
    cout<<"\n \t\t\t\t\t So yeah, that's kind of the reason why it's named 'NOT NETFLIX' :) ";
    cout<<"\n \t\t\t\t\t Call it Retro Netflix maybe ;)";
    cout<<"\n \t\t\t\t\t Have a good day! :D";

    cout<<"\n\n\n \t\t\t\t\t INSTRUCTIONS:";
    cout<<"\n \t\t\t\t\t User id is in integer format so keep it in mind.";
    cout<<"\n \t\t\t\t\t For guest users who don't want to register fresh can use below credentials:";
    cout<<"\n \t\t\t\t\t User Id: 1111    Password: admin";

    cout<<"\n\n\n \t\t\t\t\t Press any key to go back.";
    getch();
    menu();
}

bool checkUID(char temp[10] )
{
    ifstream ifs;
	ifs.open("userTxn.txt");

    bool valid=false;

    while(!ifs.eof())
    {        
            ifs.getline(UT.id,10,';');
            ifs.getline(UT.nam,50,';');
            ifs.getline(UT.invoice,20,';');
            ifs.getline(UT.buyrent,5,';');
            ifs.getline(UT.day,5,';');
            ifs.getline(UT.amt,10,';');
            if(strcmp(UT.id,temp)==0)
            {
                valid=true;
                //cout<<"\n";
                //cout<<"\t\t\t\t"<<left<<setw(8)<<UT.id<<" "<<left<<setw(26)<<UT.nam<<" "<<left<<setw(11)<<UT.invoice<<" "<<left<<setw(9)<<UT.buyrent<<" "<<left<<setw(5)<<UT.day<<" "<<left<<setw(7)<<UT.amt;
            }
    
            ifs.ignore(256,'\n');
        
       // else
        //ifs.ignore(256,'\n');
        
    }

    ifs.close();

    return valid;
}

void prevUserTxn()
{
    system("cls");
    notnetflix();

    ifstream ifs;
	ifs.open("userTxn.txt");

    char tempUID[10];
    cout<<"\n \t\t\t\t\t Enter User ID to get previous transaction details: ";
    cin.ignore(256,'\n');
    cin.getline(tempUID,10);
    cout<<"\n";

    bool valid;
    valid=checkUID(tempUID);

    while(!valid)
    {
        
            cout<<"\n \t\t\t\t\t No transactions for this User ID present. ";
            cout<<"\n \t\t\t\t\t Please Enter correct User ID: ";
            //cin.ignore(256,'\n');
            cin.getline(tempUID,10);
            cout<<"\n";
            valid=checkUID(tempUID);
    }

    cout<<"\t\t\t\t"<<left<<setw(8)<<"User ID"<<" "<<left<<setw(26)<<"Movie Name"<<" "<<left<<setw(11)<<"Invoice No"<<" "<<left<<setw(9)<<"Buy/Rent"<<" "<<left<<setw(5)<<"Days"<<" "<<left<<setw(7)<<"Amount";

    
    while(!ifs.eof())
    {        
            ifs.getline(UT.id,10,';');
            ifs.getline(UT.nam,50,';');
            ifs.getline(UT.invoice,20,';');
            ifs.getline(UT.buyrent,5,';');
            ifs.getline(UT.day,5,';');
            ifs.getline(UT.amt,10,';');
            if(strcmp(UT.id,tempUID)==0)
            {
                cout<<"\n";
                cout<<"\t\t\t\t"<<left<<setw(8)<<UT.id<<" "<<left<<setw(26)<<UT.nam<<" "<<left<<setw(11)<<UT.invoice<<" "<<left<<setw(9)<<UT.buyrent<<" "<<left<<setw(5)<<UT.day<<" "<<left<<setw(7)<<UT.amt;
            }
    
            ifs.ignore(256,'\n');
        
    }

    ifs.close();

    cout<<"\n\n\n \t\t\t\t\t Press any key to go back. ";
    getch();
    welcome();

}


main()
{
    system("cls");
    notnetflix();
    bootingup();
    loadUserData();
    loadMovieData();


    menu();
    
}