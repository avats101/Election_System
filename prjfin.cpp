#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <sys/stat.h>

using namespace std;

int totvt=0,totct=0;

struct voter
{
    string name,vid,aadhar,mob,gender,add,street,city,state,voted_for;
    bool voted;
    int m,d,y;

    string usnm,pswd;
    string retaadhar()
    {
        return aadhar;
    }
    string retvid()
    {
        return vid;
    }
    bool vtchk()
    {
        return voted;
    }
    void vote()
    {
        voted=true;
    }
    void vreset()
    {
        voted=false;
    }
    void getinfo()
    {
        cout<<"Hello New Voter, \nPlease enter the following data to register yourself as a voter.";
        cout<<"\n\nEnter your Name : ";
        getline(cin,name);
        cout<<"Enter your Gender : ";
        getline(cin,gender);
        cout<<"Enter your Aadhar Number : ";
        getline(cin,aadhar);
        cout<<"Enter your Mobile number : ";
        getline(cin,mob);
        cout<<"\nEnter date of birth below \n\n";
        cout<<"Enter the date (dd) : ";
        cin>>d;
        cout<<"Enter the month (mm) : ";
        cin>>m;
        cout<<"Enter the year (yyyy): ";
        cin>>y;
        cout<<"\nEnter your address below  ";
        cout<<"\n\nEnter the House Address :";
        getline(cin,add);
        getline(cin,add);
        cout<<"Enter the Street Name : ";
        getline(cin,street);
        cout<<"Enter the City Name : ";
        getline(cin,city);
        cout<<"Enter the State : ";
        getline(cin,state);
        voted=false;
        genvotid();
    }

    void genvotid()
    {
        string tp;
        tp=name.substr(0,3);
        vid.clear();
        vid.append(tp);
        tp.clear();
        tp=aadhar.substr(0,4);
        vid.append(tp);
        cout<<"\n\nYour Voter ID has been generated.";
        cout<<"\n\nYour Voter Id is "<<vid;
        cout<<"\n\nPlease do not share your Voter Id with anyone else.\n\n";
        system("PAUSE");
    }

    void showdata()
    {
        cout<<"\n\nName : "<<name;
        cout<<"\nGender : "<<gender;
        cout<<"\nAadhar Number : "<<aadhar;
        cout<<"\nMobile Number : "<<mob;
        cout<<"\nDate of birth : "<<d<<" - "<<m<<" - "<<y;
        cout<<"\nAddress : "<<add<<", "<<street<<", "<<city<<", "<<state;
        cout<<"\nVoter ID : "<<vid<<"\n\n";
        cout<<"\nUsername :"<<usnm;
        cout<<"\nPassword: "<<pswd<<"\n\n";
//         cout<<"\n\nPress Any Key to Move Back to the Main Screen.";
        system("PAUSE");
    }

    void addchange()
    {
        cout<<"\n\nEnter your new address below \n\n";
        cout<<"Enter the House Address :";
        getline(cin,add);
        getline(cin,add);
        cout<<"Enter the Street Name : ";
        getline(cin,street);
        cout<<"Enter the City Name : ";
        getline(cin,city);
        cout<<"Enter the State : ";
        getline(cin,state);
        cout<<"\n\nYour new address has been successfully updated.\n\n";
//         cout<<"\n\nPress Any Key to Move Back to the Main Screen.";
        system("PAUSE");
    }

    void mobchange()
    {
        cout<<"\n\nEnter your new mobile number : ";
        getline(cin,mob);
        getline(cin,mob);
        cout<<"\n\nYour new mobile number has been updates successfully.\n\n";
//         cout<<"\n\nPress Any Key to Move Back to the Main Screen.";
        system("PAUSE");
    }
} vt[50],currvt;

struct candidate
{
    string name,candidate_id,aadhar,mob,gender;
    string add,street,city,state,party_name,party_slogan;
    int m,d,y,votes;
    string retcanid()
    {
        return candidate_id;
    }
    void showvotes()
    {
        cout<<"\n\nCandidate Name : "<<name<<"\n";
        cout<<"Votes Received : "<<votes<<"\n\n";
    }
    void voteadd()
    {
        votes++;
    }
    int retvt()
    {
        return votes;
    }
    void vreset()
    {
        votes=0;
    }
    string usnm,pswd;
    string retnm()
    {
        return name;
    }
    void getinfo()
    {
        cout<<"Welcome New Candidate, Please fill out the following information to register.\n\n";
        cout<<"Enter your Name : ";
        getline(cin,name);
        cout<<"Enter your Gender : ";
        getline(cin,gender);
        cout<<"Enter your Aadhar Number : ";
        getline(cin,aadhar);
        cout<<"Enter your Mobile number : ";
        getline(cin,mob);
        cout<<"\nEnter date of birth below\n\n";
        cout<<"Enter the date (dd) : ";
        cin>>d;
        cout<<"Enter the month (mm) : ";
        cin>>m;
        cout<<"Enter the year (yyyy): ";
        cin>>y;
        cout<<"\n\nEnter your address below\n\n";
        cout<<"Enter the house address :";
        getline(cin,add);
        getline(cin,add);
        cout<<"Enter the street name : ";
        getline(cin,street);
        cout<<"Enter the city name : ";
        getline(cin,city);
        cout<<"Enter the state : ";
        getline(cin,state);
        cout<<"\n\nEnter the details of the political party you are affiliated with below \n";
        cout<<"\nEnter the Party Name: ";
        getline(cin,party_name);
        cout<<"Enter the Party Slogan: ";
        getline(cin,party_slogan);
        get_candidate_id();
        votes=0;
        cout<<"\n\n";
        system("PAUSE");
    }
    void get_candidate_id()
    {
        candidate_id="C";
        string tp;
        tp=name.substr(0,3);
        candidate_id.clear();
        candidate_id.append(tp);
        tp.clear();
        tp=aadhar.substr(0,4);
        candidate_id.append(tp);
        cout<<"\n\nYour Candidate ID has been generated.";
        cout<<"\n\nYour Candidate Id is "<<candidate_id;
    }
    void showdata()
    {
        cout<<"\n\nYour data has been stored as follows :";
        cout<<"\n\nPersonal Data";
        cout<<"\n\nName : "<<name;
        cout<<"\nGender : "<<gender;
        cout<<"\nAadhar Number : "<<aadhar;
        cout<<"\nMobile Number : "<<mob;
        cout<<"\nDate of birth : "<<d<<" - "<<m<<" - "<<y;
        cout<<"\nAddress : "<<add<<", "<<street<<", "<<city<<", "<<state;
        cout<<"\n\n";
        cout<<"\nCandidate ID : "<<candidate_id;
        cout<<"\n\nParty Data\n\n";
        cout<<"\nParty Name : "<<party_name;
        cout<<"\nParty Slogan : "<<party_slogan;
        cout<<"\n\nPlease do not share your Candidate Id with anyone else.\n\n";
        system("PAUSE");
    }
    void addchange()
    {
        cout<<"\n\nEnter your new address below : \n\n";
        cout<<"Enter the house address :";
        getline(cin,add);
        getline(cin,add);
        cout<<"Enter the street name : ";
        getline(cin,street);
        cout<<"Enter the city name : ";
        getline(cin,city);
        cout<<"Enter the state : ";
        getline(cin,state);
        cout<<"\n\nYour new address has been successfully updated.\n\n";
        system("PAUSE");
    }
    void mobchange()
    {
        cout<<"\n\nEnter your new Mobile Number : ";
        getline(cin,mob);
        getline(cin,mob);
        cout<<"\nYour new mobile number has been updates successfully.\n\n";
        system("PAUSE");
    }
    string retaadhar()
    {
        return aadhar;
    }
} ct[50],currct;

void vregister()
{
    string usn;
    string pwd;

    system("CLS");
    cout << "Create a new account: \n";
    cout << "\nEnter your username: ";
    cin.get();
    getline(cin, usn);

    if(usn.empty())
    {
        cout << "\nYou can't leave the username field empty!\n";
        system("PAUSE");
        vregister();
    }
    else if (usn.length() < 3)
    {
        cout << "\nUsername should be more than 3 characters\n";
        system("PAUSE");
        vregister();
    }
    else
    {
        currvt.usnm=usn;
        cout << "Enter password: ";
        getline(cin, pwd);

        bool hasLower = false, hasUpper = false, hasDigit = false;
        for (int i = 0; i < pwd.length(); i++)
        {
            if (islower(pwd[i]))
                hasLower = true;
            if (isupper(pwd[i]))
                hasUpper = true;
            if (isdigit(pwd[i]))
                hasDigit = true;
        }

        if (pwd.empty())
        {
            cout << "\nYour password can't be left empty.\n";
            system("PAUSE");
            vregister();
        }
        else if (pwd.length() < 8)
        {
            cout << "\nYour password can't be less than 8 characters.\n";
            system("PAUSE");
            vregister();
        }
        else if (!hasLower || !hasUpper || !hasDigit)
        {
            cout << "\nCheck if your password contains at least one lowercase letter, one uppercase letter and one digit.\n";
            system("PAUSE");
            vregister();
        }
        else
        {
            currvt.pswd=pwd;
            currvt.getinfo();
            vt[totvt]=currvt;
            totvt++;
//			 system("PAUSE");
            system("CLS");
        }
    }
}


void voter_func();

void vlogin()
{
    string username;
    string password;
    string output;

    system("CLS");
    cout << "Login to your account: \n";
    cout << "\nUsername: ";
    cin.get();
    getline(cin, username);

    if (username.empty())
    {
        cout << "\nYou can't leave the username field empty!\n";
        system("PAUSE");
        vlogin();
    }
    else
    {
        bool flag=false;
        for(int i=0; i<totvt; i++)
        {
            currvt=vt[i];
            if(username==currvt.usnm)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"Enter Password : ";
//           cin.get();
            getline(cin,password);
            cout<<password<<"\n";;
            //cout<<vt.pswd;
            if(password==currvt.pswd)
            {
                cout << "\nLogin successful.\n";
                system("PAUSE");
            }
            else
            {
                cout << "\nIncorrect password.\n";
                do
                {
                    cout<<"Please re-enter your Password :";
                    cin.get();
                    getline(cin,password);
                }
                while(password!=currvt.pswd);
            }
        }
        else
        {
            cout << "\nUsername does not exist.\n";
            system("PAUSE");
            voter_func();
        }
    }
}

void vupdate();

void cupdate();

void elect()
{
    candidate tmp;
    if(currvt.vtchk())
    {
        cout<<"You have already voted.\nYou will be returned to the main screen.\n\n";
        system("PAUSE");
        return;
    }

    for(int i=0; i<totct; i++)
    {
        ct[i].showdata();
        cout<<"Press Enter to show the next candidate.";
    }
    system("CLS");
    char ans;
    bool vtd=false;
    cout<<"\n\nNow you can select which Candidate to vote for : ";
    for(int i=0; i<totct; i++)
    {
        if(!vtd)
        {
            ct[i].showdata();
            cout<<"Do you want to vote for this Candidate ? (Please type Y or N)";
            cin>>ans;
            if(ans=='y'||ans=='Y')
            {
                ct[i].voteadd();
                currvt.vote();
                cout<<"You have successfully voted for this candidate.";
                vtd=true;
                vupdate();
                cupdate();
            }
        }
    }
    return;
}

void vupdate()
{
    for(int i=0; i<totvt; i++)
    {
        if(vt[i].retvid()==currvt.retvid())
        {
            vt[i]=currvt;
            break;
        }
    }
}

void voter_func()
{
    int opt;

selopt:
    ;
    system("CLS");
    cout << "Choose the action you want to perform: \n";
    cout << "1. Register a new account\n2. Login to existing account\n3. Exit program\n\n";
    cout << "-> ";

    cin >> opt;
    switch(opt)
    {
    case 1:
        vregister();
        break;
    case 2:
        vlogin();
        break;
    case 3:
        cout<<"\nThank you for using our election system! We hope to see you again!\n";
        return;
    default:
        cout<<"\nPlease choose a valid option.\n";
        goto selopt;
    }
    system("CLS");
    int ch;
voteraction:
    ;
    system("CLS");
    cout<<"1.View your data.";
    cout<<"\n2.Change your address.";
    cout<<"\n3.Update your mobile number.";
    cout<<"\n4.Goto election Screen.";
    cout<<"\n5.Logout";
    cout<<"\n\nEnter your choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        currvt.showdata();
        goto voteraction;
        break;
    case 2:
        currvt.addchange();
        goto voteraction;
        break;
    case 3:
        currvt.mobchange();
        goto voteraction;
        break;
    case 4:
        elect();
        break;
    case 5:
        vupdate();
        return;
    default:
        cout<<"Invalid Choice Entered.";
        goto voteraction;
    }
}



void cregister()
{
    string usn;
    string pwd;

    system("CLS");
    cout << "Create a new account: \n";
    cout << "\nEnter your username: ";
//	 cin.get();
    getline(cin, usn);

    if(usn.empty())
    {
        cout << "\nYou can't leave the username field empty!\n";
        system("PAUSE");
        cregister();
    }
    else if (usn.length() < 3)
    {
        cout << "\nUsername should be more than 3 characters\n";
        system("PAUSE");
        cregister();
    }
    else
    {
        currct.usnm=usn;
        cout << "Enter password: ";
        getline(cin, pwd);

        bool hasLower = false, hasUpper = false, hasDigit = false;
        for (int i = 0; i < pwd.length(); i++)
        {
            if (islower(pwd[i]))
                hasLower = true;
            if (isupper(pwd[i]))
                hasUpper = true;
            if (isdigit(pwd[i]))
                hasDigit = true;
        }

        if (pwd.empty())
        {
            cout << "\nYour password can't be left empty.\n";
            system("PAUSE");
            cregister();
        }
        else if (pwd.length() < 8)
        {
            cout << "\nYour password can't be less than 8 characters.\n";
            system("PAUSE");
            cregister();
        }
        else if (!hasLower || !hasUpper || !hasDigit)
        {
            cout << "\nCheck if your password contains at least one lowercase letter, one uppercase letter and one digit.\n";
            system("PAUSE");
            cregister();
        }
        else
        {
            currct.pswd=pwd;
            currct.getinfo();
            ct[totct]=currct;
            totct++;
//			 system("PAUSE");
            system("CLS");
        }
    }
}

void candidate_func();

void clogin()
{
    string username;
    string password;
    string output;

    system("CLS");
    cout << "Login to your account: \n";
    cout << "\nUsername: ";
    cin.get();
    getline(cin, username);

    if (username.empty())
    {
        cout << "\nYou can't leave the username field empty!\n";
        system("PAUSE");
        clogin();
    }
    else
    {
        bool flag=false;
        for(int i=0; i<totct; i++)
        {
            currct=ct[i];
            if(username==currct.usnm)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            cout<<"Enter Password : ";
//            cin.get();
            getline(cin,password);
//              cout<<password<<"\n";;
            //cout<<ct.pswd;
            if(password==currct.pswd)
            {
                cout << "\nLogin successful.\n";
                system("PAUSE");
            }
            else
            {
                cout << "\nIncorrect password.\n";
                do
                {
                    cout<<"Please re-enter your Password :";
                    //cin.get();
                    getline(cin,password);
                }
                while(password!=currct.pswd);
            }
        }
        else
        {
            cout << "\nUsername does not exist.\n";
            system("PAUSE");
            candidate_func();
        }
    }
}

void cupdate()
{
    for(int i=0; i<totct; i++)
    {
        if(ct[i].retcanid()==currct.retcanid())
        {
            ct[i]=currct;
            break;
        }
    }
}

void candidate_func()
{
    int opt;
    candidate tmp;
    ifstream f5;
selopt:
    ;
    system("CLS");
    cout << "Choose the action you want to perform: \n";
    cout << "1. Register a new account\n2. Login to existing account\n3. Exit program\n\n";
    cout << "-> ";

    cin >> opt;
    switch(opt)
    {
    case 1:
        cregister();
        break;
    case 2:
        clogin();
        break;
    case 3:
        cout<<"\nThank you for using our election system! We hope to see you again!\n";
        return;
    default:
        cout<<"\nPlease choose a valid option.\n";
        goto selopt;
    }
    system("CLS");
    int ch;
candidateaction:
    ;
    system("CLS");
    cout<<"1.View your data.";
    cout<<"\n2.Change your address.";
    cout<<"\n3.Update your mobile number.";
    cout<<"\n4.Logout";
    cout<<"\n\nEnter your choice : ";
    cin>>ch;
    switch(ch)
    {
    case 1:
        currct.showdata();
        goto candidateaction;
        break;
    case 2:
        currct.addchange();
        goto candidateaction;
        break;
    case 3:
        currct.mobchange();
        goto candidateaction;
        break;
    case 4:
        cupdate();
        return;
    default:
        cout<<"Invalid Choice Entered.";
        goto candidateaction;
    }
}


void admin_func()
{
    system("CLS");
    string usid,pass;
    cout<<"Enter the administrator username : ";
    cin.get();
    getline(cin,usid);
    if(usid=="@dm!n")
    {
reenter:
        ;
        cout<<"\nEnter the password : ";
        getline(cin,pass);
        if(pass!="passw0rd")
        {
            cout<<"Wrong Password entered.\nPlease re-enter the correct password.";
            goto reenter;
        }
    }
    else
    {
        return;
    }
    int ch;
    long int max_vote=INT_MIN;
    candidate tp;
redo:
    ;
    system("CLS");
    cout<<"\n\nHello Admin";
    cout<<"\n\n1.Display the votes received by each Candidate and the winning Candidate.";
    cout<<"\n2.Reset the votes.";
    cout<<"\n3.Logout";
    cout<<"\n\nEnter your choice : ";
    cin>>ch;
    ofstream f1;
    switch(ch)
    {
    case 1:
        for(int i=0; i<totct; i++)
        {
            ct[i].showvotes();
            if(ct[i].retvt()>max_vote)
            {
                max_vote=ct[i].retvt();
                tp=ct[i];
            }
        }
        cout<<"\n\nThe candidate who won is \n\n";
        tp.showdata();
        f1.open("ElectionWin.txt",ios::out);
        f1<<"Name : "<<tp.name<<"\n";
        f1<<"Candidate_ID : "<<tp.candidate_id<<"\n";
        f1<<"Gender : "<<tp.gender<<"\n";
        f1<<"Mobile Number : "<<tp.mob<<"\n";
        f1<<"Party : "<<tp.party_name<<"\n";
        f1<<"Party Slogan : "<<tp.party_slogan<<"\n";
        f1<<"Votes Received : "<<tp.votes<<"\n";
        f1.close();
        break;
    case 2:
        for(int i=0; i<totct; i++)
        {
            ct[i].vreset();
        }
        for(int i=0; i<totvt; i++)
        {
            vt[i].vreset();
        }
        vupdate();
        cupdate();
        cout<<"The voting Status has been reset successfully.\n";
        system("PAUSE");
        goto redo;
    case 3:
        return;
    default:
        cout<<"Invalid Choice";
        system("CLS");
        goto redo;
    }
}


void getdata()
{
    ifstream fvt,fct;
    fvt.open("VoterData.txt",ios::in);
    if(!fvt)
    {
        totvt=0;
    }
    else
    {
        while(fvt)
        {
            if(fvt.eof())
            {
                break;
            }
            fvt.read((char*)&vt[totvt],sizeof(vt[totvt]));
            totvt++;
        }
        fvt.close();
    }
    fct.open("CandidateData.txt",ios::in);
    if(!fct)
    {
        totct=0;
    }
    else
    {
        while(fct)
        {
            if(fct.eof())
            {
                break;
            }
            fct.read((char*)&ct[totct],sizeof(ct[totct]));
            totct++;
        }
        fct.close();
    }
}

void storedata()
{
    if(totvt!=0)
    {
        ofstream fv;
        fv.open("VoterData.txt",ios::out);
        for(int i=0; i<totvt; i++)
        {
            fv.write((char*)&vt[i],sizeof(vt[i]));
        }
        fv.close();
    }
    if(totct!=0)
    {
        ofstream fc;
        fc.open("CandidateData.txt",ios::out);
        for(int i=0; i<totct; i++)
        {
            fc.write((char*)&ct[i],sizeof(ct[i]));
        }
        fc.close();
    }
}

int main()
{
    cout << "Welcome to India 2020 Election System!\n";
    system("PAUSE");
    getdata();
Choose:
    ;
    system("CLS");
    int logop;
    cout << "Choose the login option: \n";
    cout << "1. Voter Login\n2. Candidate Login\n3. Admin Login\n4. Exit\n";
    cout << "-> ";
    cin >> logop;
    switch(logop)
    {
    case 1:
        voter_func();
        break;
    case 2:
        candidate_func();
        break;
    case 3:
        admin_func();
        break;
    case 4:
        storedata();
        return 0;
    default:
        cout<<"Invalid Choice";
        goto Choose;
    }
    goto Choose;
}

