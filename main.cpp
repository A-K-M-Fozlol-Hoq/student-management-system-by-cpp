#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include <cstdio>
#define getmax(a, b) ((a)>(b)?(a):(b))
using namespace std;

void div_b(int a,int b){
    if(a==6 ||a==9 || b==6 ||b==9)
        throw"Make sure that you are not a Robot!...";
}
template <class arnob> arnob qube(arnob a)
{
    return a;
}
/*============================================ STUDENT CLASS =========================================*/
class student{
protected:
    string ID ,  str;
    int i, sub[10], avg, total;
public:
    void stcal(){
        cout<<"*********************Enter Students's Id********************* \n: ";
        cin.ignore();
        getline(cin, str);
        cout<<"Enter Students's English, Bangla, SPL, CPC, Calculus and EEE marks respectively: ";
        for(i=1; i<=6; i++){
            cin>> sub[i];
        }
        total=sub[1]+sub[2]+sub[3]+sub[4]+sub[5]+sub[6];
        avg=total/6;
        cout<<"_________________Your average mark is: "<<avg<<"___________________"<<endl;
        cout<<"__________________Your total mark is: "<<total<<"_____________________\n";
    }
    void stresult(){
        if (avg>=80&&avg<=100)
            cout<<"_________________Your average mark is: A+___________________";
        else if (avg>=75&&avg<=79)
            cout<<"_________________Your average mark is: A___________________";
        else if (avg>=70&&avg<=74)
            cout<<"_________________Your average mark is: A-___________________";
        else if (avg>=65&&avg<=69)
            cout<<"_________________Your average mark is: B+___________________";
        else if (avg>=60&&avg<=64)
            cout<<"_________________Your average mark is: B___________________";
        else if (avg>=55&&avg<=59)
            cout<<"_________________Your average mark is: B-___________________";
        else if (avg>=50&&avg<=54)
            cout<<"_________________Your average mark is: C+___________________";
        else if (avg>=45&&avg<=49)
            cout<<"_________________Your average mark is: C___________________";
        else if (avg>=40&&avg<=44)
            cout<<"_________________Your average mark is: D___________________";
        else
            cout<<"\n___________________You are Failed!_____________________";
    }
};
/*============================================= STUDENT INFO CLASS Starts Here==========================================*/
class studentinfo{
protected:
    int roll;
    string info , x;
public:
    void showinfo();
    void showcgpa();
};
class about{
    string x,y,m1n,m2n,m1i,m2i;
public:
    void print(string a, string b){
        x=a;
        y=b;
    }
    void print(string p,string q,string r,string s){
        m1n=p;
        m2n=q;
        m1i=r;
        m2i=s;
    }
    friend ostream &operator<<( ostream &output, const about &D ) {
         output <<"\n*************************** Teachers Name:\t\t"<<D.x<< " ***************************";
         output<<"\n*************************** Teachers Designation:\t"<<D.y<<" *****************************\n";
         output<<"\n\nStudents Name:\n";
         output<<"1)Name: "<<D.m1n<<"\t\t\t\t"<<"2)Name: "<<D.m2n<<endl<<"ID:"<<D.m1i<<"\t\t\t\t\t"<<"Id: "<<D.m2i;
         return output;
    }
};
/*============================================= More CLASS Starts Here==========================================*/
class more: public studentinfo, public about{
protected:
    int c,a,b;
    string x,y,admin,pass,p,ID,fozlol;
public:
    void setval(){
        fstream file,file2;
            file.open("admin.txt");
            while(getline(file,x)){
                admin=admin+x;
            }
            file2.open("password.txt");
            while(getline(file2,y)){
                pass=pass+y;
            }
            file.close();
            file2.close();
    }
    void asetval(){
        fstream file,file2;
            file.open("aadmin.txt");
            while(getline(file,x)){
                admin=admin+x;
            }
            file2.open("apassword.txt");
            while(getline(file2,y)){
                pass=pass+y;
            }
            file.close();
            file2.close();
    }
    void changeuser();
    void achangeuser();
    void changepass();
    void achangepass();
    void editinfo();
    void addcgpa();
    void Menu(){
        cout<<"\n\n Enter 1 to change username \n Enter 2 to change password \n Enter 3 to edit student information \n Enter 4 to add student cgpa";
        cout<<"students semesterwise cgpa. \n Enter 5 to change system colors\n Enter 6 to add an additional admin\n Enter 7 to remove the additional admin \n Enter 8 to know about us\nResponse=";
        cin>>c;
        switch(c){
        case 1: changeuser(); break;
        case 2: changepass(); break;
        case 3: editinfo(); break;
        case 4: addcgpa();
                break;
        case 5:cout<<"\nEnter Your Choice:\n\t1) Text: Red, Background: White \n\t2) Text: White, Background: Blue \n\t3) Text: Blue, Background: Black ";
                cin>>c;
                switch(c){
                case 1:system("COLOR FC"); break; //cyan
                case 2:system("color 1F"); break; //cyan
                case 3:system("color 01"); break; //cyan
                default: system("color 0F"); break; //cyan
                }
                break;
        case 6: {ofstream afile, bfile;
                cout<<"Enter New Username: ";
                afile.open ("aadmin.txt");
                cin.ignore();
                getline(cin, fozlol);
                afile<<fozlol;
                afile.close();
                cout<<"Enter Password: ";
                bfile.open ("apassword.txt");
                cin>>pass;
                bfile<<pass;
                bfile.close();
                cout<<"\nUsername Created Successfully!!!...";} break;

        case 7:{
                metul: ;
                cout<<"\nEnter two random number(except 6 and 9): ";
                cin>>a>>b;
                try{
                    div_b(a,b);
                }catch(const char* fozlol){
                    cerr<<fozlol<<endl;
                    goto metul;
                }
                c=getmax(a,b);
                cout<<"Enter the bigger number between "<<a<<" and "<<b<<"\nResponse=";
                cin>>b;
                if(b==c){
                    remove("aadmin.txt");
                    if( remove("apassword.txt")!=0)
                        perror("\nNo additional administrations were found");
                    else
                        puts("\nAdditional Admin Removed Sucessfully...!");
                 }
                 else
                    cout<<"\nMake sure that you are not a Robot!...";
                }
                break;
        case 8: {about t;
                t.print("SHIFAT SHARMIN SHAPLA", "Assistant Professor");
                t.print("A.K.M Fozlol Hoq","MD. Shaymun Islam Anik","CSE 068 07945","CSE 068 07951");
                cout<<t;
                }   break;
        default: cout<<"\nYou Entered wrong input. Please try again..."; break;
        }
    }
};
/*============================================= ADMIN CLASS Starts Here==========================================*/
class Admin: public student, public more{
protected:
    int choice;
public:
    void menu(){
        cout<<"\n\n\n*************** MAIN MENU **************** \n\n Enter 1 for Calculate mark. \n Enter 2 for Grade.\n Enter 3 to see Full Information.";
        cout<<"\n Enter 4 to see CGPA in every semester.\n Enter 5 for More option. \n Enter 6 to exit.\nResponse=";
        cin>>choice;
        switch(choice)
        {

        case 1: stcal();
                break;
        case 2: stresult();
                break;
        case 3: showinfo();
                break;
        case 4: showcgpa();
                break;
        case 5: Menu();
                break;
        case 6: exit(0);
                break;
        default: cout<<"\nYou Entered wrong input. Plrase try again...";
                 break;
       }

    }
};
/*============================================= Additional  ADMIN CLASS Starts Here==========================================*/
class AAdmin: public student, public more{
protected:
    int choice;
public:
    void amenu(){
        cout<<"\n\n\n*************** MAIN MENU **************** \n\n Enter 1 for Calculate mark. \n Enter 2 for Grade.\n Enter 3 to see Full Information.";
        cout<<"\n Enter 4 to see CGPA in every semester.\n Enter 5 to change username. \n Enter 6 to change password.\n Enter 7 to Exit.\nResponse=";
        cin>>choice;
        switch(choice)
        {

        case 1: stcal();
                break;
        case 2: stresult();
                break;
        case 3: showinfo();
                break;
        case 4: showcgpa();
                break;
        case 5: achangeuser();
                break;
        case 6: achangepass();
                break;
        case 7: exit(0);
                break;
        default: cout<<"\nYou Entered wrong input. Plrase try again...";
                 break;
       }

    }
};
/*======================================MAIN FUNCTION STARTS FROM HERE=====================================*/
main(){
    int login;
    string admin, x, pass,y, ID,p;
    char c;
    cout<<"\n.                                 ######################\t\t\t\tTime: "<<__TIME__;
    cout<<"\n\n.                             ********************************\t\t\t\tDate: "<<__DATE__<<endl<<endl;
    cout<<qube(".               ***************Stamford University Bangladesh******************");
    cout<<"\n\n";
    cout<<qube(".             ************* Result Processing System(University)*****************\n");
    cout<<qube("\t1)Student log in. \t\t2)Admin log in.\t\t3)A. Admin log in.\n\n\tResponse : ");
    cin>>login;
    if(login==1){     /*================= Student login ===============*/
        student objs;
        objs.stcal();
        objs.stresult();
    }
    else if(login==2){ /*================= Admin login ===============*/
        fstream file,file2;
        file.open("admin.txt");
        while(getline(file,x)){
            admin=admin+x;
        }
        file2.open("password.txt");
        while(getline(file2,y)){
            pass=pass+y;
        }
        file.close();
        file2.close();
        cout<<admin<<" "<<pass;//To show password and admin name
        cout<<"\nEnter username: ";
      //  cin.ignore();
      //  getline(cin, ID);
        cin>>ID;
        cout<<"Enter the password: ";
      //  cin.ignore();
       // getline(cin, p);
        cin>>p;
        if ((p.compare(pass)==0) && (admin.compare(ID)==0)){
            Admin obja;
            metul:;
            obja.menu();
            goto metul;
        }
        else
            cout<<"\nIncorrect user name or password. Please try again..."<<endl;
    }
    else if(login==3){ /*================= A.Admin login ===============*/
        fstream file,file2;
        file.open("aadmin.txt");
        while(getline(file,x)){
            admin=admin+x;
        }
        file2.open("apassword.txt");
        while(getline(file2,y)){
            pass=pass+y;
        }
        file.close();
        file2.close();
        cout<<admin <<" "<<pass;//To show password and admin name
        cout<<"\nEnter Your Username: ";
      //  cin.ignore();
      //  getline(cin, ID);
        cout<<ID;
        cin>>ID;
        cout<<"Enter Your Password: ";
       // cin.ignore();
       // getline(cin, p);
        cout<<p;
        cin>>p;
        if ((p.compare(pass)==0) && (admin.compare(ID)==0)){
            AAdmin obj;
            mitul:;
            obj.amenu();
            goto mitul;
        }
    }
    else{
        cout<<"Incorrect input. Plrase try again....";
    }
    getch();
}

/*==========================================Main Function Ended===================================*/
void studentinfo :: showinfo(){ /*==========================================Show student info starts here===================================*/
    {
        info='0';
        cout<<"*************** Input roll number **************\nResponse=";
        cin>>roll;
        fstream file;
        switch (roll){
        case 1: file.open("information1.txt");
                break;
        case 2: file.open("information2.txt");
                break;
        case 3: file.open("information3.txt");
                break;
        case 4: file.open("information4.txt");
                break;
        case 5: file.open("information5.txt");
                break;
        case 6: file.open("information6.txt");
                break;
        case 7: file.open("information7.txt");
                break;
        case 8: file.open("information8.txt");
                break;
        case 9: file.open("information9.txt");
                break;
        case 10: file.open("information10.txt");
                 break;
        case 11: file.open("information11.txt");
                 break;
        case 12: file.open("information12.txt");
                 break;
        default: cout<<"\nYou Entered wrong roll number";
                 break;
        }
        while(getline(file,x)){
            info=info+x;
        }
        file.close();
        cout<<info;
    }
}

void studentinfo :: showcgpa(){ /*==========================================Show student CGPA starts here===================================*/
    {
        info='0';
        cout<<"*************** Input roll number **************\nResponse=";
        cin>>roll;
        fstream file;
        switch (roll){
        case 1: file.open("cgpa1.txt");
                break;
        case 2: file.open("cgpa2.txt");
                break;
        case 3: file.open("cgpa3.txt");
                break;
        case 4: file.open("cgpa4.txt");
                break;
        case 5: file.open("cgpa5.txt");
                break;
        case 6: file.open("cgpa6.txt");
                break;
        case 7: file.open("cgpa7.txt");
                break;
        case 8: file.open("cgpa8.txt");
                break;
        case 9: file.open("cgpa9.txt");
                break;
        case 10: file.open("cgpa10.txt");
                 break;
        case 11: file.open("cgpa11.txt");
                 break;
        case 12: file.open("cgpa12.txt");
                 break;
        default: cout<<"\nYou Entered wrong roll number";
                 break;
        }
        while(getline(file,x)){
            info=info+x;
        }
        file.close();
        cout<<info;
    }
}
void more :: changeuser(){ /*==========================================change username starts here===================================*/
    setval();
    ofstream file;
    cout<<"\nEnter old username: ";
    cin>>ID;
    cout<<"Enter the password: ";
    cin>>p;
    if((p.compare(pass)==0) && (admin.compare(ID)==0)){
        cout<<"Enter New Username: ";
        file.open ("admin.txt");
       // cin>>fozlol;
        cin.ignore();
        getline(cin, fozlol);
        file<<fozlol;
        file.close();
        cout<<"\nUsername Updated Successfully!!!...";
    }
    else{
        cout<<"\nIncorrect old user name or password. Please try again...";
    }
}
void more :: achangeuser(){ /*==========================================change username starts here===================================*/
    asetval();
    ofstream file;
    cout<<"\nEnter old username: ";
    cin>>ID;
    cout<<"Enter the password: ";
    cin>>p;
    if((p.compare(pass)==0) && (admin.compare(ID)==0)){
        cout<<"Enter New Username: ";
        file.open ("aadmin.txt");
       // cin>>fozlol;
        cin.ignore();
        getline(cin, fozlol);
        file<<fozlol;
        file.close();
        cout<<"\nUsername Updated Successfully!!!...";
    }
    else{
        cout<<"\nIncorrect old user name or password. Please try again...";
    }
}

void more :: changepass(){ /*==========================================change password starts here===================================*/
    setval();
    ofstream file;
    cout<<"\nEnter old username: ";
    cin>>ID;
    cout<<"Enter the password: ";
    cin>>p;
    if((p.compare(pass)==0) && (admin.compare(ID)==0)){
        cout<<"Enter New Password: ";
        file.open ("password.txt");
       // cin>>fozlol;
        cin.ignore();
        getline(cin, fozlol);
        file<<fozlol;
        file.close();
        cout<<"\nPassword Updated Successfully!!!...";
    }
    else{
        cout<<"\nIncorrect old user name or password. Please try again...";
    }
}
void more :: achangepass(){ /*==========================================change password starts here===================================*/
    asetval();
    ofstream file;
    cout<<"\nEnter old username: ";
    cin>>ID;
    cout<<"Enter the password: ";
    cin>>p;
    if((p.compare(pass)==0) && (admin.compare(ID)==0)){
        cout<<"Enter New Password: ";
        file.open ("apassword.txt");
       // cin>>fozlol;
        cin.ignore();
        getline(cin, fozlol);
        file<<fozlol;
        file.close();
        cout<<"\nPassword Updated Successfully!!!...";
    }
    else{
        cout<<"\nIncorrect old user name or password. Please try again...";
    }
}
void more :: editinfo(){ /*========================================== edit info starts here===================================*/
    cout<<"*************** Input roll number **************\nResponse=";
    cin>>roll;
    ofstream file;
    switch (roll){
    case 1: file.open("information1.txt");
            break;
    case 2: file.open("information2.txt");
            break;
    case 3: file.open("information3.txt");
            break;
    case 4: file.open("information4.txt");
            break;
    case 5: file.open("information5.txt");
            break;
    case 6: file.open("information6.txt");
            break;
    case 7: file.open("information7.txt");
            break;
    case 8: file.open("information8.txt");
            break;
    case 9: file.open("information9.txt");
            break;
    case 10: file.open("information10.txt");
             break;
    case 11: file.open("information11.txt");
             break;
    case 12: file.open("information12.txt");
             break;
    default: cout<<"\nYou Entered wrong roll number";
             break;
        }
    cout<<"Enter All Info: ";
       // cin>>fozlol;
    cin.ignore();
    getline(cin, info);
    file<<info;
    file.close();
    cout<<"\nAccount Updated Successfully!!!...";
}
void more :: addcgpa(){ /*========================================== add cgpa starts here===================================*/
    cout<<"*************** Input roll number **************\nResponse=";
    cin>>roll;
    fstream file;
  //  ofstream file1;
    switch (roll){
    case 1: file.open("cgpa1.txt");
            break;
    case 2: file.open("cgpa2.txt");
            break;
    case 3: file.open("cgpa3.txt");
            break;
    case 4: file.open("cgpa4.txt");
            break;
    case 5: file.open("cgpa5.txt");
            break;
    case 6: file.open("cgpa6.txt");
            break;
    case 7: file.open("cgpa7.txt");
            break;
    case 8: file.open("cgpa8.txt");
            break;
    case 9: file.open("cgpa9.txt");
            break;
    case 10: file.open("cgpa10.txt");
             break;
    case 11: file.open("cgpa11.txt");
             break;
    case 12: file.open("cgpa12.txt");
             break;
    default: cout<<"\nYou Entered wrong roll number";
             break;
        }
    while(getline(file,x)){
        info=info+x;
    }
    file.close();
    cout<<"Your old result: "<<info<<"\nEnter All Info:\n ";
    cin.ignore();
    getline(cin, info);
    ofstream file1;
    switch (roll){
    case 1: file1.open("cgpa1.txt");
            break;
    case 2: file1.open("cgpa2.txt");
            break;
    case 3: file1.open("cgpa3.txt");
            break;
    case 4: file1.open("cgpa4.txt");
            break;
    case 5: file1.open("cgpa5.txt");
            break;
    case 6: file1.open("cgpa6.txt");
            break;
    case 7: file1.open("cgpa7.txt");
            break;
    case 8: file1.open("cgpa8.txt");
            break;
    case 9: file1.open("cgpa9.txt");
            break;
    case 10: file1.open("cgpa10.txt");
             break;
    case 11: file1.open("cgpa11.txt");
             break;
    case 12: file1.open("cgpa12.txt");
             break;
    default: cout<<"\nYou Entered wrong roll number";
             break;
        }
    file1<<info;
    file1.close();
    cout<<"\nAccount Updated Successfully!!!...";
}
