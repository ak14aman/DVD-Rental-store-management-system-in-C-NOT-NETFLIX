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

main()
{
int iNum=9292;
 ofstream txn;
    txn.open("userTxn.txt", fstream::app);
    
    ofs<<123<<";";
    ofs<<"aman"<<";";
    ofs<<"#IN"<<iNum<<";";
    ofs<<"RENT"<<";";
    ofs<<69<<";";
    ofs<<(((69*20)*0.16)+69*20)<<";";
    ofs<<"\n";

    txn.close();






























// int uid, no;
//     //string pass, repass, name, address;
//     char name[100];
//     char pass[100];
//     char address[500];
//     char repass[100];

//     cout<<"\n \t\t\t\t\t Please enter below details to register at NOT NETFLIX.";

//     cout<<"\n \t\t\t\t\t Enter Name: ";
//     cin.getline(name,100);



//     cout<<"\n \t\t\t\t\t Enter phone number: ";
//     cin>>no;
//     cout<<"\n \t\t\t\t\t Enter address: ";
//     cin.getline(address,500);

//     int uflag=0;

//     while(!uflag)
//     {
//         cout<<"\n \t\t\t\t\t Enter User id: ";
//         cin>>uid;
//         for(int i=0; i<3; i++)
//         {
//             if(uid == 123)
//             {
//                 cout<<"\n \t\t\t\t\t This user id is already taken please choose another.";
//                 break;
//             }
//             else
//             {
//                 uflag=1;
//                 break;
//             }
//         }
//     }

//     cout<<"\n \t\t\t\t\t Enter password: ";
//     cin.getline(pass,100);

//     int pflag=0;

//     while(!pflag)
//     {
//         cout<<"\n \t\t\t\t\t Please re-enter your password: ";
//         cin.getline(repass,100);
        
//             if(repass != pass)
//             {
//                 cout<<"\n \t\t\t\t\t Your password dosen't match, please re-enter correct password.";
//             }
//             else
//             {
//                 pflag=1;
//             }
        
//     }


//     cout<<"thanks";




    // int uid, no;
    // string pass, repass, name, address;

    // cout<<"\n \t\t\t\t\t Please enter below details to register at NOT NETFLIX.";
    // cout<<"\n \t\t\t\t\t Enter Name: ";
    // getline(cin,name);

    // bool uflag=false;

    // while(!uflag)
    // {
    //     cout<<"\n \t\t\t\t\t Enter User id: ";
    //     cin>>uid;
    //     for(int i=0; i<3; i++)
    //     {
    //         if(uid == 123)
    //         {
    //             cout<<"\n \t\t\t\t\t This user id is already taken please choose another.";
    //             break;
    //         }
    //         else
    //         {
    //             uflag=true;
    //             break;
    //         }
    //     }
    // }


    // cout<<"\n \t\t\t\t\t Enter password: ";
    // cin>>pass;
    // cout<<"\n \t\t\t\t\t Enter phone number: ";
    // cin>>no;
    // cout<<"\n \t\t\t\t\t Enter address: ";
    // getline(cin,address);

    // bool pflag=false;

    // while(!pflag)
    // {
    //     cout<<"\n \t\t\t\t\t Please re-enter your password: ";
    //     cin>>repass;
        
    //         if(repass != pass)
    //         {
    //             cout<<"\n \t\t\t\t\t Your password dosen't match, please re-enter correct password.";
    //         }
    //         else
    //         {
    //             pflag=true;
    //         }
        
    // }




// int days=15;
// ofstream ofs;
// 	ofs.open("temp.txt");


//     srand(time(0));

//     cout << "\n                     NOT NETFLIX - Customer Invoice                     "<<endl;
//     cout << "	///////////////////////////////////////////////////////////"<<endl;
//     cout <<left<<setfill('-')<<setw(47)<< "	| Invoice Number"<<"| "<<left<<setfill(' ')<<"#IN"<<setw(10)<<(rand()%1000 + 10000)<<endl;
//     cout <<left<<setfill('-')<<setw(47)<< "	| Item Number"<<"| "<<left<<setfill(' ')<<setw(13)<<days+129<<endl;
//     cout <<left<<setfill('-')<<setw(47)<< "	| Customer Name"<<"| "<<left<<setfill(' ')<<setw(13)<<"Aman"<<endl;
//     cout <<left<<setfill('-')<<setw(47)<< "	| Customer ID"<<"| "<<left<<setfill(' ')<<setw(13)<<days+100<<endl;

//     cout<<left<<setfill('-')<<setw(47)<<"	| Rent/Buy"<<"| "<<left<<setfill(' ')<<setw(13)<<"RENT"<<endl;

//     cout <<left<<setfill('-')<<setw(47)<< "	| Number of days"<<"| "<<left<<setfill(' ')<<setw(13)<<days<<endl;
//     cout <<left<<setfill('-')<<setw(47)<< "	| Amount"<<"| "<<left<<setfill(' ')<<setw(13)<<days*20<<endl;
//     cout <<left<<setfill('-')<<setw(47)<< "	| GST"<<"| "<<left<<setfill(' ')<<setw(13)<<((days*20)*0.16)<<endl<<endl;
//     cout << "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
//     cout <<left<<setfill('-')<<setw(47)<< "	| Total Payble Amount"<<"| Rs. "<<left<<setfill(' ')<<setw(9)<<(((days*20)*0.16)+days*20)<<endl;
//     cout << "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
//     cout << "	 # This is a computer generated invoce and it does not"<<endl;
//     cout << "	 require an authorised signture #"<<endl;
//     cout <<" "<<endl;
//     cout << "	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
//     cout << "	 Thank you for shopping at NOT NTEFLIX, see you again."<<endl;
//     cout << "	 Have a good day!"<<endl;
//     cout << "	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;




//     cout<<"\n \t\t\t\t\t Press any key to go back.";
//     getch();







//     ofs<< "\n                     NOT NETFLIX - Customer Invoice                     "<<endl;
//     ofs<< "	///////////////////////////////////////////////////////////"<<endl;
//     ofs<<left<<setfill('-')<<setw(47)<< "	| Invoice Number"<<"| "<<left<<setfill(' ')<<"#IN"<<setw(10)<<(rand()%1000 + 10000)<<endl;
//     ofs<<left<<setfill('-')<<setw(47)<< "	| Item Number"<<"| "<<left<<setfill(' ')<<setw(13)<<days+129<<endl;
//     ofs<<left<<setfill('-')<<setw(47)<< "	| Customer Name"<<"| "<<left<<setfill(' ')<<setw(13)<<"Aman"<<endl;
//     ofs<<left<<setfill('-')<<setw(47)<< "	| Customer ID"<<"| "<<left<<setfill(' ')<<setw(13)<<days+100<<endl;
//     ofs<<left<<setfill('-')<<setw(47)<<"	| Rent/Buy"<<"| "<<left<<setfill(' ')<<setw(13)<<"RENT"<<endl;
//     ofs<<left<<setfill('-')<<setw(47)<< "	| Number of days"<<"| "<<left<<setfill(' ')<<setw(13)<<days<<endl;
//     ofs<<left<<setfill('-')<<setw(47)<< "	| Amount"<<"| "<<left<<setfill(' ')<<setw(13)<<days*20<<endl;
//     ofs<<left<<setfill('-')<<setw(47)<< "	| GST"<<"| "<<left<<setfill(' ')<<setw(13)<<((days*20)*0.16)<<endl<<endl;
//     ofs<< "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
//     ofs<<left<<setfill('-')<<setw(47)<< "	| Total Payble Amount"<<"| Rs. "<<left<<setfill(' ')<<setw(9)<<(((days*20)*0.16)+days*20)<<endl;
//     ofs<< "	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
//     ofs<< "	 # This is a computer generated invoce and it does not"<<endl;
//     ofs<< "	 require an authorised signture #"<<endl;
//     ofs<<" "<<endl;
//     ofs<< "	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
//     ofs<< "	 Thank you for shopping at NOT NTEFLIX, see you again."<<endl;
//     ofs<< "	 Have a good day!"<<endl;
//     ofs<< "	>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;




//     ofs.close();








//  /$$   /$$  /$$$$$$  /$$$$$$$$       /$$   /$$ /$$$$$$$$ /$$$$$$$$ /$$$$$$$$ /$$       /$$$$$$ /$$   /$$
// | $$$ | $$ /$$__  $$|__  $$__/      | $$$ | $$| $$_____/|__  $$__/| $$_____/| $$      |_  $$_/| $$  / $$
// | $$$$| $$| $$  \ $$   | $$         | $$$$| $$| $$         | $$   | $$      | $$        | $$  |  $$/ $$/
// | $$ $$ $$| $$  | $$   | $$         | $$ $$ $$| $$$$$      | $$   | $$$$$   | $$        | $$   \  $$$$/ 
// | $$  $$$$| $$  | $$   | $$         | $$  $$$$| $$__/      | $$   | $$__/   | $$        | $$    >$$  $$ 
// | $$\  $$$| $$  | $$   | $$         | $$\  $$$| $$         | $$   | $$      | $$        | $$   /$$/\  $$
// | $$ \  $$|  $$$$$$/   | $$         | $$ \  $$| $$$$$$$$   | $$   | $$      | $$$$$$$$ /$$$$$$| $$  \ $$
// |__/  \__/ \______/    |__/         |__/  \__/|________/   |__/   |__/      |________/|______/|__/  |__/
                                                                                                        
                                                                                                        
                                                                                                        



















    // cout<<"\n \t\t\t\t\t Enter number of days to rent: 10";
    // days =10;
    // cout<<endl;

    // cout<<left<<setfill('-')<<setw(47)<<"	| Rent/Buy"<<"|"<<left<<setfill(' ')<<setw(13)<<"RENT"<<endl;



    // cout<<left<<setfill('-')<<setw(47)<<"	| Rent/Buy"; cout<<left<<setw(13)<<"|"<<"RENT"<<endl;
    // cout << "	| Number of days"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
    // cout << "	| Amount"<<"--------|"<<setw(10)<<days*20<<" |"<<endl;
    // cout << "	| GST"<<"----------------|"<<setw(10)<<((days*20)*0.28)<<" |"<<endl;
    // cout << "	 ________________________________________________________"<<endl;
    // cout <<"\n";
    // cout << "	| Total Payble Amount"<<"-------|"<<setw(10)<<(((days*20)*0.28)+days*20)<<" |"<<endl;

    //     srand(time(0));

    // cout << "\n                       NOT NETFLIX - Customer Invoice                  "<<endl;
    // cout << "	///////////////////////////////////////////////////////////"<<endl;
    // cout << "	| Invoice Number"<<"------------------|"<<setw(10)<<"#IN"<<(rand()%1000 + 10000)<<" |"<<endl;



    // cout << "\n                       NOT NETFLIX - Customer Invoice                  
    // cout << "	///////////////////////////////////////////////////////////
    // cout << "	| Invoice Number------------------------------|#IN81353 
    // cout << "	| Item Number-----------------                |1002 
    // cout << "	| Customer Name--------------------           |SETA sah 
    // cout << "	| Customer ID--------------------             |123 
    // cout << "	| Rent/Buy----------------------              |JH1234      
    // cout << "	| Number of days---------------               |30 
    // cout << "	| Amount--------                              |2500 
    // cout << "	| GST----------------                         |0 
    // cout << "	| ____________________________________________|__________
    // cout << "	| Total Payble Amount-------                  |2500 
    // cout << "	| ____________________________________________|__________
    // cout << "	 # This is a computer generated invoce and it does not
    // cout << "	 require an authorised signture #
    // cout <<" 
    // cout << "	///////////////////////////////////////////////////////////
    // cout << "	Thank you for shopping at NOT NTEFLIX, wish to see you again.
    // cout << "	Have a good day!
    // cout << "	///////////////////////////////////////////////////////////


















    // cout << "\n                       NOT NETFLIX - Customer Invoice                  "<<endl;
    // cout << "	///////////////////////////////////////////////////////////"<<endl;
    // cout << "	| Invoice Number"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
    // cout << "	| Item Number"<<"-----------------|"<<setw(10)<<"aman"<<" |"<<endl;
    // cout << "	| Customer Name"<<"--------------------|"<<setw(10)<<"SETA"<<" |"<<endl;
    // cout << "	| Customer ID"<<"--------------------|"<<setw(10)<<"SETA"<<" |"<<endl;
    // cout << "	| Rent/Buy"<<"----------------------|"<<setw(10)<<"JH1234"<<" |"<<endl;
    // cout << "	| Number of days"<<"---------------|"<<setw(10)<<30<<" |"<<endl;
    // cout << "	| Amount"<<"--------|"<<setw(10)<<2500<<" |"<<endl;
    // cout << "	| GST"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
    // cout << "	 ________________________________________________________"<<endl;
    // cout <<"\n";
    // cout << "	| Total Payble Amount"<<"-------|"<<setw(10)<<2500<<" |"<<endl;
    // cout << "	 ________________________________________________________"<<endl;
    // cout << "	 # This is a computer generated invoce and it does not"<<endl;
    // cout << "	 require an authorised signture #"<<endl;
    // cout <<" "<<endl;
    // cout << "	///////////////////////////////////////////////////////////"<<endl;
    // cout << "	Thank you for shopping at NOT NTEFLIX, wish to see you again."<<endl;
    // cout << "	Have a good day!"<<endl;
    // cout << "	///////////////////////////////////////////////////////////"<<endl;




    // int t=345;
    // cout<<left<<setw(6)<<"MovID"<<" "<<left<<setw(50)<<"Name"<<" "<<left<<setw(5)<<"Year"<<" "<<left<<setw(5)<<"IMDB"<<" "<<left<<setw(5)<<"Rated";
    // cout<<endl;
    // cout<<setw(6)<<"101"<<" "<<setw(50)<<"Doctor Strange in the multiverse of maddness"<<" "<<setw(5)<<"2022"<<" "<<setw(5)<<"8.9"<<" "<<setw(5)<<"R";
    // cout<<endl;
    // cout<<setw(6)<<"102"<<" "<<setw(50)<<"Spider man no way home"<<" "<<setw(5)<<"2021"<<" "<<setw(5)<<"9.0"<<" "<<setw(5)<<"pg13";
    // cout<<endl;
    // cout<<setw(6)<<"103"<<" "<<setw(50)<<"Balck Panther"<<" "<<setw(5)<<"2019"<<" "<<setw(5)<<"4.6"<<" "<<setw(5)<<"X";
    // cout<<endl;
    // cout<<setw(6)<<"104"<<" "<<setw(50)<<"Loki"<<" "<<setw(5)<<"2023"<<" "<<setw(5)<<"4.5"<<" "<<setw(5)<<"PG-13";
    // cout<<endl;
    // cout<<setw(6)<<"105"<<" "<<setw(50)<<"hawkeye"<<" "<<setw(5)<<"2021"<<" "<<setw(5)<<"1.6"<<" "<<setw(5)<<"R";
    

}


// MovID  Name                                            Year  IMDB  Rated
// 101    Doctor Strange in the multiverse of maddness    2022  8.9   R
// 102    Spider man no way home                          2021  8.7   PG13
// 103    Balck Panther                                   2018  8.0   pg13
// 104    Loki                                            2021  8.6   pg13