

#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
struct administrator
{
	char user_name[10];
	char password[10];
}	admin;
class teacher
{
char name[20];
char sub[10];
long salary;
char dept[10];//senior,primary,middle
char phoneno[11];
char house;
int b;
int std;
char sec;
public:
void input()
{
cout<<"Enter the teachers'name:"<<endl;
gets(name);
cout<<"Enter the teachers'subject:"<<endl;
gets(sub);
cout<<"Enter the teachers'salary:"<<endl;
cin>>salary;
cout<<"Enter the teachers'department:( senior-'s',middle-'m',primary-'p',pre-primary-'pp')"<<endl;
gets(dept);
cout<<"Enter the teachers' phone no:"<<endl;
gets(phoneno);
cout<<"Enter the teachers' house (red-'r'/blue-'b'/green-'g'/yellow-'y'):"<<endl;
cin>>house;
cout<<"Bus incharge of (Delhi-1,2,3 || Noida-4,5,6 || Ghaziabad-7,8,9):"<<endl;
cin>>b;
cout<<"class teacher (of standard):";cin>>std;cout<<endl;
cout<<"class teacher (of section):";cin>>sec;cout<<endl;
}
void output()
{
cout<<"______________________________________________________________________________"<<endl;

cout<<"The teachers'name:"<<name<<endl;
cout<<"The teachers'subject:"<<sub<<endl;
cout<<"The teachers'salary: "<<salary<<endl;
cout<<"The teachers'department ( senior-'s',middle-'m',primary-'p',pre-primary-'pp'):"<<dept<<endl;
cout<<"The teachers' phone no:"<<phoneno<<endl;
cout<<"The teachers' house (red-'r'/blue-'b'/green-'g'/yellow-'y'):"<<house<<endl;
cout<<"Bus incharge of (Delhi-1,2,3 || Noida-4,5,6 || Ghaziabad-7,8,9):"<<b<<endl;
cout<<"class teacher of:"<<std<<"  "<<sec<<endl;
cout<<"_______________________________________________________________________________"<<endl;

}
char *getname();
char *getsub();
char *getdept();
long getsal();
char *getpn();
char getb();
int getstd();
char getsec();
char gethouse();
void setname(char []);
void setdept(char []);
void setpn(char []);
void setsub(char []);
void setsal(long) ;
void setb(int);
void sethouse(char);
};
char *teacher::getname()
{
return name;
}
char *teacher::getsub()
{
return sub;
}
char teacher::gethouse()
{
return house;
}
long teacher::getsal()
{
return salary;
}
char *teacher::getdept()
{
return dept;
}
char *teacher::getpn()
{
return phoneno;
}
char teacher::getb()
{
return b;
}
int teacher::getstd()
{
return std;
}
char teacher::getsec()
{
return sec;
}
void teacher::setname(char n[])
{
strcpy(name,n);
}
void teacher::sethouse(char h)
{
house=h;
}

void teacher::setdept(char d[])
{
strcpy(dept,d);
}
void teacher::setpn(char pn[])
{
strcpy(phoneno,pn);
}
void teacher::setsub(char s[])
{
strcpy(sub,s);
}

void teacher::setsal(long sal)
{
salary=sal;
}
/*void teacher::setb(int bu)
{
bu=b;
}*/



class student
{
char name[20];
//char name1[20];
//char name2[20];
long admn;
int std;
char sec;
char add[20];
int bus;
char pnum[10];
char fname[20];
//char fname2[20];
//char fname2[20];
char sib;
char b_gp[4];
char house;

public:
void input();
void output();
char *getname();
long getadmn();
int getstd();
char getsec();
char *getadd();
int getbus();
char *getpnum();
char *getfname();
char getsib();
char *getb_gp();
char gethouse();

void setname(char[]);
void setadmn(long);
void setstd(int);
void setsec(char);
void setadd(char[]);
void setbus(int);
void setpnum(char[]);
void setfname(char[]);
void setsib(char);
void setb_gp(char[]);
void sethouse(char);
};
void student ::input()
{
	cout<<"Enter Student Name"<<endl;gets(name);cout<<endl;
	cout<<"Enter student's admission number:"<<endl;cin>>admn;cout<<endl;
	cout<<"Enter student's standard:"<<endl;cin>>std;cout<<endl;
	cout<<"Enter Student's section:"<<endl;cin>>sec;cout<<endl;
	cout<<"Enter Student's address (Delhi-'d',noida-'n',Ghaziabad-'g'):"<<endl;gets(add);cout<<endl;
	cout<<"Enter Student's bus route number (Delhi-1,2,3 || Noida-4,5,6 || Ghaziabad-7,8,9):"<<endl;cin>>bus;cout<<endl;
	cout<<"Enter Student's Phone number:"<<endl;gets(pnum);cout<<endl;
	cout<<"Enter Student's Father's Name:"<<endl;gets(fname);cout<<endl;
	cout<<"Does the student have siblings studying in this school?(enter 'y' for yes and 'n' for no):"<<endl;cin>>sib;cout<<endl;
	cout<<"Enter Student's Blood group:"<<endl;gets(b_gp);cout<<endl;
	cout<<"Enter Student's House:(red-'r'/blue-'b'/green-'g'/yellow-'y'):"<<endl;cin>>house;cout<<endl;

}
void student :: output()
{
	cout<<"_____________________________________________"<<endl;
	cout<<" Name:"<<name<<endl;
	cout<<" Admission number:"<<admn<<endl;
	cout<<" Standard:"<<std<<endl;
	cout<<" Section:"<<sec<<endl;
	cout<<" Address (Delhi-'d',noida-'n',Ghaziabad-'g'): "<<add<<endl;
	cout<<" Bus route number (Delhi-1,2,3 || Noida-4,5,6 || Ghaziabad-7,8,9):"<<bus;cout<<endl;
	cout<<" Phone number:"<<pnum;cout<<endl;
	cout<<" Father's Name:"<<fname;cout<<endl;
	cout<<" Sibling studying here:"<<sib;cout<<endl;
	cout<<" Blood group:"<<b_gp;cout<<endl;
	cout<<" House (red-'r'/blue-'b'/green-'g'/yellow-'y'):"<<house;cout<<endl;
	cout<<"_________________________________________________"<<endl;
}
char *student:: getname()
{
	return name;
}
long student:: getadmn()
{
	return admn;
}
int student:: getstd()
{
	return std;
}
char student:: getsec()
{
	return sec;
}
char *student:: getadd()
{
	return add;
}
int student:: getbus()
{
	return bus;
}
char *student:: getpnum()
{
	return pnum;
}
char *student:: getfname()
{
	return fname;
}
char student:: getsib()
{
	return sib;
}
char *student:: getb_gp()
{
	return b_gp;
}
char student:: gethouse()
{
	return house;
}

void student ::setname(char N[])
{
	strcpy(name,N);
}
void student ::setadmn(long a)
{
	admn=a;
}
void student ::setstd(int s)
{
	std=s;
}
void student ::setsec(char s)
{
	sec=s;
}
void student ::setadd(char x[])
{
	strcpy(add, x);
}
void student ::setbus(int b)
{
	bus=b;
}
void student ::setpnum(char P[])
{
	strcpy(pnum,P);
}
void student ::setfname(char F[])
{
	strcpy(fname,F);
}
void student ::setsib(char s)
{
	sib=s;
}void student ::setb_gp(char B[])
{
	strcpy(b_gp,B);
}void student ::sethouse(char h)
{
	house=h;
}

int C,B,flag,pos;
char Ns[20],N[20],S,Ad[20],naam[20],P[20],F[20],Bgp[4],h,ans,si;
long As,A;

int ch,a,b,e,f,i,c;    long sal,sal1;
char Na[20],Nm[20],sub[20],dept[20],pn[20],n[20],d[20],s[20];
float M;
fstream f3,f4;
teacher t1;
void addrecord();
void displayrecord();
void searchrecord5(long);
void searchrecord1(char []);
void searchrecord3(char []);
void searchrecord2(char []);
void searchrecord4(char []);
void deleterecord1(char []);
void deleterecord4(char []);
void updaterecord5(long);
void updaterecord1(char []);
void updaterecord2(char []);
void updaterecord3(char []);
void updaterecord4(char []);
void buslist(char[]);
void classlist(char[]);

fstream f1,f2;
student s1;
void assign_user();
int verify_password();
void displays();
void add1records();
void addMrecords();
void classteachername(char[]);
void houseteachername(char[]);
void searchnames(char[]);
void searchadmns(long);
void searchstds(int);
void searchsecs(char);
void searchadds(char[]);
void searchbuss(int);
void searchpnums(char[]);
void searchfnames(char[]);
void searchsibs(char);
void searchb_gps(char[]);
void searchhouses(char);


void updatens(char[]);
void updateadmns(long);
void updatepnums(char[]);
void updatefnames(char[]);

void deletens(char[]);
void deleteadmns(long);
void deletepnums(char[]);
void deletefnames(char[]);

void toupdatestds(int);
void toupdatebus(int);
void classlist1(int,char);
void buslist1(int);
void teachdept(char[]);


void main()
{
	clrscr();
	int cah,z,choice,p;

cout<<"                                     __________            "<<endl;
cout<<"			            | _______  |"<<endl;
cout<<"			            | |  AI  | | "<<endl;
cout<<"			            | |______| |    "<<endl;
cout<<"			            |__________|"<<endl;
cout<<"				 SCHOOL,MAYUR VIHAR "<<endl;
delay(290);
cout<<"_______________________________________________________________________________"<<endl;
cout<<"                                    WELCOME TO "<<endl;
cout<<"                              AI SCHOOL MANAGEMENT SYSTEM " <<endl;
cout<<"_______________________________________________________________________________"<<endl;
cout<<endl;
delay(600);
cout<<"_______________________________________________________________________________"<<endl;
cout<<"                  :::The Database is divided in two parts:::"<<endl;
cout<<"                   1.TEACHERS                       2.STUDENTS                   "<<endl;
cout<<"_______________________________________________________________________________"<<endl;
cout<<endl;

 delay(1000);
G:
do{


     cout<<"                     Press 1: FOR TEACHER'S DATABASE"<<endl;
     cout<<"                     Press 2: FOR STUDENT'S DATABASE"<<endl;
     cout<<"                     Press 3: TO EXIT"<<endl;

  cout<<"Enter your choice:"<<" ";cin>>z;cout<<endl;
  if(z==1)
{
   do
{
clrscr();
cout<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"       			        TEACHERS:"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
cout<<"                   Please Press::  "<<endl;
cout<<"                   1 to add records"<<endl;
cout<<"                   2 to display all records"<<endl;
cout<<"                   3 to search a record"<<endl;
cout<<"                   4 to delete a record"<<endl;
cout<<"                   5 to update a record"<<endl;
cout<<"                   6 to diplay dept-wise teacher list and subject"<<endl;
cout<<"                   7 to display bus list based on teacher's name"<<endl;
cout<<"                   8 to display class list based on teacher's name"<<endl;
cout<<"                   9 to exit teacher's database"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;

cin>>a;

switch(a)
{


case 1:
clrscr();
	{


			assign_user();
			p=verify_password();
			if(p==0)
			{
			    cout<<endl;

			    cout<<"How many records do you wish to enter?"<<endl;
cin>>e;
for(i=1;i<=e;i++)
{
cout<<"                    Enter new information of teacher"<<i<<" to add"<<endl;
addrecord();
}
			}
			else
			{
				cout<<"\n\t You are Not a Valid User.";
				cout<<"\n\tYou do not have the Authority to add records.\n\n";
			}
			break;
			}

case 2:
clrscr();

displayrecord();
break;
case 3:
clrscr();
cout<<"================================================================================="<<endl;

cout<<"             To search a record based on your choice,Please press ::"<<endl;
cout<< "                         1 for Subject"<<endl;
cout<<"                          2 for salary"<<endl;
cout<<"                          3 for phoneno"<<endl;
cout<<"                          4 for Name"<<endl;
cout<<"                          5 for department"<<endl;
cout<<"================================================================================="<<endl;
cin>>b;
	switch(b)
	    {
		case 1:
		cout<<"Enter subject to search"<<endl;
		gets(s);
		cout<<"Processing............"<<endl;
		delay(600);
		searchrecord3(s);
		break;
		case 2:
		cout<<"Enter salary to search"<<endl;
		cin>>sal;
		cout<<"Processing............"<<endl;
		delay(600);

		searchrecord5(sal);
		break;
		case 3:
		cout<<"Enter phone number to search"<<endl;
		gets(pn);
		cout<<"Processing............"<<endl;
		delay(600);

		searchrecord4(pn);
		break;
		case 4:
		cout<<"Enter name to search"<<endl;
		gets(Na);
		cout<<"Processing............"<<endl;
		delay(600);

		searchrecord1(Na);
		break;
		case 5:
		cout<<"Enter department to search"<<endl;
		gets(d);
		cout<<"Processing............"<<endl;
		delay(600);

		searchrecord2(d);
		break;
	 }
break;
case 4:
clrscr();
clrscr();
assign_user();
			p=verify_password();
			if(p==0)
			{
cout<<"================================================================================="<<endl;
cout<<"             To delete a record based on your choice,Please press ::"<<endl;

   cout<<"                          1 for phoneno"<<endl;
   cout<<"                          2 for Name"<<endl;
cout<<"================================================================================="<<endl;
cin>>c;
	switch(c)
	    {
		case 1:
		cout<<"Enter phone no to be deleted"<<endl;
		gets(pn);
		cout<<"Processing............"<<endl;
		delay(600);
		deleterecord4(pn);
		break;
		case 2:
		cout<<"Enter Name to be deleted"<<endl;
		gets(Na);
		cout<<"Processing............"<<endl;
		delay(600);
		deleterecord1(Na);
		break;

		}
	     }		else
			{
				cout<<"\n\t You are Not a Valid User.";
				cout<<"\n\tYou do not have the authority to delete records.\n\n";
			}
break;

case 5:

clrscr();
assign_user();
			p=verify_password();
			if(p==0)
			{
cout<<"================================================================================="<<endl;
cout<<"             To update a record based on your choice,Please press ::"<<endl;
cout<< "                         1 for Subject"<<endl;
cout<<"                          2 for salary"<<endl;
cout<<"                          3 for phoneno"<<endl;
cout<<"                          4 for Name"<<endl;
cout<<"                          5 for department"<<endl;
cout<<"================================================================================="<<endl;
cin>>f;
	switch(f)
	    {
		case 1:
		cout<<"Enter subject to be updated"<<endl;
		gets(s);
		updaterecord3(s);
		break;
		case 2:
		cout<<"Enter salary to be updated"<<endl;
		cin>>sal;
		updaterecord5(sal);
		break;
		case 3:
		cout<<"Enter phone no to be updated"<<endl;
		gets(pn);
		updaterecord4(pn);
		break;
		case 4:
		cout<<"Enter Name to be updated"<<endl;
		gets(Na);
		updaterecord1(Na);
		break;
		case 5:
		cout<<"Enter department to be updated"<<endl;
		gets(d);
		updaterecord2(d);
		break;
	}


	}
	else
			{
				cout<<"\n\t You are Not a Valid User.";
				cout<<"\n\tYou do not have the authority to update records.\n\n";
			}
break;
case 6:char dep[10];cout<<"Enter Department:";gets(dep);
cout<<"Processing............"<<endl;
		delay(600);
		teachdept(dep);
break;
case 7:cout<<"enter teacher's name to display bus list"<<endl;
gets(N);
cout<<"Processing............"<<endl;
		delay(600);

buslist(N);
break;
case 8:cout<<"Enter teacher's name to display class list"<<endl;
gets(N);
cout<<"Processing............"<<endl;
		delay(600);
		classlist(N);
break;
case 9:
goto G;

default:
cout<<"Invalid number entered"<<endl;
}

cout<<"Do you wish to continue"<<endl;
cin>>ans;
}while(ans=='y'||ans=='Y');
}
  else if(z==2)
{
  do{
clrscr();
cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"                            STUDENTS:"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"			Press 1: Add records"<<endl;
	cout<<"			Press 2: Display all records"<<endl;
	cout<<"			Press 3: Search record"<<endl;
	cout<<"			Press 4: Update record"<<endl;
	cout<<"			Press 5: Delete record"<<endl;
	cout<<"			Press 6: view the student's classteacher's name"<<endl;
	cout<<"			Press 7: view the student's houseteacher's name"<<endl;
	cout<<"			Press 8 : Display  student list based on class"<<endl;
	cout<<"			Press 9 : Display  bus-wise student list"<<endl;
	cout<<"			Press 10: to exit student's database"<<endl;
cout<<"-------------------------------------------------------------------------------"<<endl;

	cout<<endl;
	cout<<"Enter your choice:"<<" ";cin>>cah;cout<<endl;
	switch(cah)
	{
		case 1:
		{


			assign_user();
			p=verify_password();
			if(p==0)
			{

				addMrecords();
			}
			else
			{
				cout<<"\n\t You are Not a Valid User.";
				cout<<"\n\tYou do not have the Authority to add records.\n\n";
			}
			break;
			}



		case 2: displays();
			break;

		case 3:
		{
cout<<"================================================================================="<<endl;

		  cout<<"Select one of the following options:"<<endl;
		  cout<<"press 1: Based on student's name"<<endl;
		  cout<<"press 2: Based on admission number"<<endl;
		  cout<<"press 3: Based on class"<<endl;
		  cout<<"press 4: Based on student's section"<<endl;
		  cout<<"press 5: Based on student's address"<<endl;
		  cout<<"press 6: Based on bus route"<<endl;
		  cout<<"press 7: Based on phone number"<<endl;
		  cout<<"press 8: Based on Father's name"<<endl;
		  cout<<"press 9: Based on sibling present or not"<<endl;
		  cout<<"press 10: Based on blood group"<<endl;
		  cout<<"press 11: Based on House"<<endl<<endl;
cout<<"================================================================================="<<endl;

		  cout<<"Enter your choice"<<endl;
		  cin>>choice;
		  switch(choice)
		  {
			case 1:cout<<"Enter student's name: ";gets(N);
			cout<<"Processing............"<<endl;
		delay(600);
		searchnames(N);
			break;
			case 2:cout<<"Enter admission number:";cin>>A;
			cout<<"Processing............"<<endl;
		delay(600);
		searchadmns(A);
			break;
			case 3:cout<<"Enter student's class: ";cin>>C;
			cout<<"Processing............"<<endl;
		delay(600);
		searchstds(C);break;
			case 4:cout<<"Enter student's section: ";cin>>S;
			cout<<"Processing............"<<endl;
		delay(600);
		searchsecs(S);break;
			case 5:cout<<"Enter student's address: ";gets(Ad);
			cout<<"Processing............"<<endl;
		delay(600);
		searchadds(Ad);break;
			case 6:cout<<"Enter student's bus route: ";cin>>B;
			cout<<"Processing............"<<endl;
		delay(600);
		searchbuss(B);break;
			case 7:cout<<"Enter phone number: ";gets(P);
			cout<<"Processing............"<<endl;
		delay(600);
		searchpnums(P);break;
			case 8:cout<<"Enter father's name: ";gets(F);
			cout<<"Processing............"<<endl;
		delay(600);
		searchfnames(F);break;
			case 9:cout<<"Enter 'y' or 'n' for sibling in this school: ";cin>>S;
			cout<<"Processing............"<<endl;
		delay(600);
		searchsibs(S);break;
			case 10:cout<<"Enter Blood group: ";gets(Bgp);
			cout<<"Processing............"<<endl;
		delay(600);
		searchb_gps(Bgp);break;
			case 11:cout<<"Enter House: ";cin>>h;
			cout<<"Processing............"<<endl;
		delay(600);
		searchhouses(h);break;
			default:cout<<"invalid number entered"<<endl;

		 }
		  } break;
		 case 4:

			assign_user();
			p=verify_password();
			if(p==0)
			{
			cout<<"================================================================================="<<endl;

			cout<<"press 1:based on student's name"<<endl;
			cout<<"press 2:based on admission number"<<endl;
			cout<<"press 3:based on phone number"<<endl;
			cout<<"press 4:based on Father's name"<<endl;
			cout<<"press 5: to update class"<<endl;
			cout<<"press 6: to updats bus route"<<endl;
			cout<<"================================================================================="<<endl;

			cout<<"Enter your choice: ";cin>>choice;cout<<endl;
			switch(choice)
			{
				case 1: cout<<"Enter name: "; gets(N); cout<<endl;
				updatens(N);break;
				case 2: cout<<"Enter admission number: ";cin>>A;cout<<endl;
				updateadmns(A);break;
				case 3: cout<<"Enter phone number: ";gets(P);cout<<endl;
				updatepnums(P);break;
				case 4: cout<<"Enter Father's name: ";gets(F);cout<<endl;
				updatefnames(F);break;
				case 5: cout<<"Enter class: ";cin>>C;cout<<endl;
				toupdatestds(C);break;
				case 6: cout<<"Enter Bus route: "; cin>>B;cout<<endl;
				toupdatebus(B);break;

				default: cout<<"Invalod number entered"<<endl;
			}


			}
			else
			{
				cout<<"\n\t You are Not a Valid User.";
				cout<<"\n\tYou do not have the authority to update records.\n\n";
			}
			break;
			case 5:

			assign_user();
			p=verify_password();
			if(p==0)
			{
			cout<<"================================================================================="<<endl;

			cout<<"press 1:based on student's name"<<endl;
			cout<<"press 2:based on admission number"<<endl;
			cout<<"press 3:based on phone number"<<endl;
			cout<<"press 4:based on Father's name"<<endl<<endl;
			cout<<"================================================================================="<<endl;

			cout<<"Enter your choice: ";cin>>choice;cout<<endl;
			switch(choice)
			{
				case 1: cout<<"Enter name: "; gets(N); cout<<endl;
				cout<<"Processing............"<<endl;
		delay(600);
		deletens(N);break;
				case 2: cout<<"Enter admission number: ";cin>>A;cout<<endl;
				cout<<"Processing............"<<endl;
		delay(600);
		deleteadmns(A);break;
				case 3: cout<<"Enter phone number: ";gets(P);cout<<endl;
				cout<<"Processing............"<<endl;
		delay(600);
		deletepnums(P);break;
				case 4: cout<<"Enter Father's name: ";gets(F);cout<<endl;
				cout<<"Processing............"<<endl;
		delay(600);
		deletefnames(F);break;
				default: cout<<"Invalid number entered"<<endl;
			}


			}
			else
			{
				cout<<"\n\t You are Not a Valid User.";
				cout<<"\n\tYou do not have the authority to delete records.\n\n";
			}
		case 6:cout<<"enter student's name to display classteacher's name"<<endl;
		gets(N);
		cout<<"Processing............"<<endl;
		delay(600);
		classteachername(N);
		break;
		case 7:cout<<"enter student's name to display houseteacher's name"<<endl;
		gets(N);
		cout<<"Processing............"<<endl;
		delay(600);
		houseteachername(N);
		break;

		case 8:
		int s;char section;cout<<"Enter standard"<<endl;
		cin>>s;
		cout<<"Enter section"<<endl;
		cin>>section;
		cout<<"Processing............"<<endl;
		delay(600);
		classlist1(s,section);
		break;

		case 9:
		int b;
		cout<<"Enter Bus Route:";
		cin>>b;
		cout<<endl;
		cout<<"Processing............"<<endl;
		delay(600);
		buslist1(b);
		break;

		case 10:
		goto G ;

			delault: cout<<"Invalid number entered"<<endl;

		} cout<<"do you wish to continue?"<<endl;
		cin>>ans;
	}while(ans=='y'||ans=='Y');
 }

 else if(z==3)
 {
 exit(0);
 }
 else
 {
 cout<<"invalid no entered"<<endl;
 }
} while(ans=='y'||ans=='Y');
getch();
}
void addrecord()
{
f3.open("SM1.dat",ios::out|ios::app|ios::binary);
t1.input();
f3.write((char *) &t1,sizeof(t1));
cout<<"Record added"<<endl;
f3.close();
}
void displayrecord()
{
f3.open("SM1.dat",ios::in|ios::binary);
f3.read((char *) &t1,sizeof(t1));
while(!f3.eof())
{
cout<<endl;
cout<<"                            ::THE RECORD IS::"<<endl;
t1.output();
f3.read((char *) &t1,sizeof(t1));
}
f3.close();
}
void searchrecord5(long sal)
{
flag=0;
f3.open("SM1.dat",ios::in|ios::binary);
f3.read((char *) &t1,sizeof(t1));
while(!f3.eof())
{
if(t1.getsal()==sal)
{
flag=1;
cout<<"salary exists! Old information is"<<endl;
t1.output();
break;
}
f3.read((char *) &t1,sizeof(t1));
}
f3.close();
if(flag==0)
{
cout<<"salary does not exists"<<endl;
}
}
void searchrecord1(char Na[])
{
	flag=0;
	f3.open("SM1.dat",ios::in|ios::binary);
	f3.read((char *) &t1,sizeof(t1));
	while(!f3.eof())
	{
		if(strcmp(t1.getname(),Na)==0)
		{
			flag=1;
			t1.output();
		}
		f3.read((char *) &t1,sizeof(t1));
	}
	f3.close();
	if(flag==0)
	{
		cout<<"Name does not exist"<<endl;
	}
}
void searchrecord2(char d[])
{
	flag=0;
	f3.open("SM1.dat",ios::in|ios::binary);
	f3.read((char *) &t1,sizeof(t1));
	while(!f3.eof())
	{
		if(strcmp(t1.getdept(),d)==0)
		{
			flag=1;
			t1.output();
		}
		f3.read((char *) &t1,sizeof(t1));
	}
	f3.close();
	if(flag==0)
	{
		cout<<"department does not exists"<<endl;
	}
}
void searchrecord3(char s[])
{
	flag=0;
	f3.open("SM1.dat",ios::in|ios::binary);
	f3.read((char *) &t1,sizeof(t1));
	while(!f3.eof())
	{
		if(strcmp(t1.getsub(),s)==0)
		{
			flag=1;
			t1.output();
		}
		f3.read((char *) &t1,sizeof(t1));
	}
	f3.close();
	if(flag==0)
	{
		cout<<"subject does not exists"<<endl;
	}
}
void searchrecord4(char pn[])
{
	flag=0;
	f3.open("SM1.dat",ios::in|ios::binary);
	f3.read((char *) &t1,sizeof(t1));
	while(!f3.eof())
	{
		if(strcmp(t1.getpn(),pn)==0)
		{
			flag=1;
			t1.output();
		}
		f3.read((char *) &t1,sizeof(t1));
	}
	f3.close();
	if(flag==0)
	{
		cout<<"phone no. does not exists"<<endl;
	}
}
void deleterecord4(char pn[])
{
	f3.open("SM1.dat",ios::in| ios::binary);
	f4.open("SM2.dat",ios::out|ios::app|ios::binary);
	flag=0;
	f3.read((char *)&t1,sizeof(t1));
	while(!f3.eof())
	{
		if(strcmp(t1.getpn(),pn)!=0)
		{
			f4.write((char *) &t1,sizeof(t1));
		}
		else
		{
			flag=1;
		}
		f3.read((char*)&t1,sizeof(t1));
	}
	f3.close();
	f4.close();
	remove("SM1.dat");
	rename("SM2.dat","SM1.dat");
	if(flag==0)
	{
		cout<<"phone no. does not exists to delete"<<endl;
	}
	else
	{
		cout<<"Information deleted"<<endl;
	}

}
void deleterecord1(char N[])
{
	f3.open("SM1.dat",ios::in| ios::binary);
	f4.open("SM2.dat",ios::out|ios::app|ios::binary);
	flag=0;
	f3.read((char *)&t1,sizeof(t1));
	while(!f3.eof())
	{
		if(strcmp(t1.getname(),N)!=0)
		{
			f4.write((char *) &t1,sizeof(t1));
		}
		else
		{
			flag=1;
		}
		f3.read((char*)&t1,sizeof(t1));
	}
	f3.close();
	f4.close();
	remove("SM1.dat");
	rename("SM2.dat","SM1.dat");
	if(flag==0)
	{
		cout<<"Name does not exists to delete"<<endl;
	}
	else
	{
		cout<<"Information deleted"<<endl;
	}
}

void updaterecord4(char pn[])
{
	f3.open("SM1.dat",ios::in|ios::out|ios::binary);
	f3.read((char *)&t1,sizeof(t1));
	while(!f3.eof())
	{
		if(strcmp(t1.getpn(),pn)==0)		{
			flag=1;
			pos=f3.tellg();
			f3.seekp(pos-sizeof(t1),ios::beg);
			cout<<"Enter new information to update"<<endl;
			t1.input();
			f3.write((char *) &t1,sizeof(t1));
			cout<<"Record updated"<<endl;
			break;
		}
		f3.read((char *)&t1,sizeof(t1));
	}
	f3.close();
	if(flag==0)
	{
		cout<<"Phone no. does not exist to update"<<endl;
	}
}
void updaterecord1(char Na[])
{
	f3.open("SM1.dat",ios::in|ios::out|ios::binary);
	f3.read((char *)&t1,sizeof(t1));
	while(!f3.eof())
	{
		if(strcmp(t1.getname(),Na)==0)
		{
			flag=1;
			pos=f3.tellg();
			f3.seekp(pos-sizeof(t1),ios::beg);

			cout<<"old Name is "<<t1.getname()<<" ";
			cout<<"do you wish to update it? ";
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new Name"<<endl;
				gets(Nm);
				t1.setname(Nm);
			}
			cout<<"old subject is "<<t1.getsub()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new subject"<<endl;
				gets(s);
				t1.setsub(s);
			}
			cout<<"old department is "<<t1.getdept()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new department"<<endl;
				gets(dept);
				t1.setdept(dept);
			}
			cout<<"old phone no is "<<t1.getsub()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new phone no"<<endl;
				gets(pn);
				t1.setpn(pn);
			}
			cout<<"old salary are "<<t1.getsal()<<" ";
			cout<<"do you wish to update it ? ";
			cin>>ans;
			if(ans=='y'|| ans== 'Y')
			{
				cout<<"Enter new salary"<<endl;
				cin>>sal;
				t1.setsal(sal);
			}
			f3.write((char *) &t1,sizeof(t1));
			cout<<"Record updated"<<endl;
			break;
		}
		f3.read((char *)&t1,sizeof(t1));
	}
	f3.close();
	if(flag==0)
	{
		cout<<"Name does not exist to update"<<endl;
	}
}
void updaterecord2(char d[])
{
	f3.open("SM1.dat",ios::in|ios::out|ios::binary);
	f3.read((char *)&t1,sizeof(t1));
	while(!f3.eof())
	{
		if(strcmp(t1.getdept(),d)==0)
		{
				flag=1;
			pos=f3.tellg();
			f3.seekp(pos-sizeof(t1),ios::beg);

			cout<<"old Name is "<<t1.getname()<<" ";
			cout<<"do you wish to update it? ";
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new Name"<<endl;
				gets(Nm);
				t1.setname(Nm);
			}
			cout<<"old subject is "<<t1.getsub()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new subject"<<endl;
				gets(s);
				t1.setsub(s);
			}
			cout<<"old department is "<<t1.getdept()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new department"<<endl;
				gets(dept);
				t1.setdept(dept);
			}
			cout<<"old phone no is "<<t1.getsub()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new phone no"<<endl;
				gets(pn);
				t1.setpn(pn);
			}
			cout<<"old salary are "<<t1.getsal()<<" ";
			cout<<"do you wish to update it ? ";
			cin>>ans;
			if(ans=='y'|| ans== 'Y')
			{
				cout<<"Enter new salary"<<endl;
				cin>>sal;
				t1.setsal(sal);
			}
			f3.write((char *) &t1,sizeof(t1));
			cout<<"Record updated"<<endl;
			break;
		}
		f3.read((char *)&t1,sizeof(t1));
	}
	f3.close();
	if(flag==0)
	{
		cout<<"department does not exist to update"<<endl;
	}
}
void updaterecord3(char sub[])
{
	f3.open("SM1.dat",ios::in|ios::out|ios::binary);
	f3.read((char *)&t1,sizeof(t1));
	while(!f3.eof())
	{
		if(strcmp(t1.getsub(),sub)==0)
		{
				flag=1;
			pos=f3.tellg();
			f3.seekp(pos-sizeof(t1),ios::beg);

			cout<<"old Name is "<<t1.getname()<<" ";
			cout<<"do you wish to update it? ";
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new Name"<<endl;
				gets(Nm);
				t1.setname(Nm);
			}
			cout<<"old subject is "<<t1.getsub()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new subject"<<endl;
				gets(s);
				t1.setsub(s);
			}
			cout<<"old department is "<<t1.getdept()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new department"<<endl;
				gets(dept);
				t1.setdept(dept);
			}
			cout<<"old phone no is "<<t1.getsub()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new phone no"<<endl;
				gets(pn);
				t1.setpn(pn);
			}
			cout<<"old salary are "<<t1.getsal()<<" ";
			cout<<"do you wish to update it ? ";
			cin>>ans;
			if(ans=='y'|| ans== 'Y')
			{
				cout<<"Enter new salary"<<endl;
				cin>>sal;
				t1.setsal(sal);
			}
			f3.write((char *) &t1,sizeof(t1));
			cout<<"Record updated"<<endl;
			break;
		}
		f3.read((char *)&t1,sizeof(t1));
	}
	f3.close();
	if(flag==0)
	{
		cout<<"subject does not exist to update"<<endl;
	}
}
void updaterecord5(long sal)
{
	f3.open("SM1.dat",ios::in|ios::out|ios::binary);
	f3.read((char *)&t1,sizeof(t1));
	while(!f3.eof())
	{
		if(t1.getsal()==sal)
		{
				flag=1;
			pos=f3.tellg();
			f3.seekp(pos-sizeof(t1),ios::beg);

			cout<<"old Name is "<<t1.getname()<<" ";
			cout<<"do you wish to update it? ";
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new Name"<<endl;
				gets(Nm);
				t1.setname(Nm);
			}
			cout<<"old subject is "<<t1.getsub()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new subject"<<endl;
				gets(s);
				t1.setsub(s);
			}
			cout<<"old department is "<<t1.getdept()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new department"<<endl;
				gets(dept);
				t1.setdept(dept);
			}
			cout<<"old phone no is "<<t1.getsub()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y'|| ans=='Y')
			{
				cout<<"Enter new phone no"<<endl;
				gets(pn);
				t1.setpn(pn);
			}
			cout<<"old salary are "<<t1.getsal()<<" ";
			cout<<"do you wish to update it ? ";
			cin>>ans;
			if(ans=='y'|| ans== 'Y')
			{
				cout<<"Enter new salary"<<endl;
				cin>>sal;
				t1.setsal(sal);
			}
			f3.write((char *) &t1,sizeof(t1));
			cout<<"Record updated"<<endl;
			break;
		}
		f3.read((char *)&t1,sizeof(t1));
	}
	f3.close();
	if(flag==0)
	{
		cout<<"salary does not exist to update"<<endl;
	}
}

void displays()
{
	f1.open("student.dat",ios::in|ios::binary);
	f1.read((char *) &s1,sizeof(s1));
	while(!f1.eof())
	{
		s1.output();
		cout<<endl;
		f1.read((char *) &s1,sizeof(s1));
	}
	f1.close();

}

void add1records()
{
f1.open("student.dat",ios::out|ios::app|ios::binary);
cout<<"Enter new information of student to add"<<endl;
s1.input();
f1.write((char *) &s1,sizeof(s1));
cout<<"Record added"<<endl;
f1.close();
}

void addMrecords()
{
int n;
cout<<"How many records do you wish to enter?"<<endl;
cin>>n;cout<<endl;
for(int i=1;i<=n;i++)
{
	add1records();
}
}

void searchnames(char N[])
{
	flag=0;
	f1.open("student.dat",ios::in|ios::binary);
	f1.read((char *) &s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(s1.getname(),N)==0)
		{
			flag=1;
			s1.output();
		}
		f1.read((char *) &s1,sizeof(s1));
	}
	f1.close();
	if(flag==0)
	{
		cout<<"Name does not exist"<<endl;
	}
}

void searchadmns(long a)
{
	flag=0;
f1.open("student.dat",ios::in|ios::binary);
f1.read((char *) &s1,sizeof(s1));
while(!f1.eof())
{
if(s1.getadmn()==a)
{
flag=1;
s1.output();
break;
}
f1.read((char *) &s1,sizeof(s1));
}
f1.close();
if(flag==0)
{
cout<<"Admission Number does not exist"<<endl;
}
}

void searchstds(int s)
{
	flag=0;
f1.open("student.dat",ios::in|ios::binary);
f1.read((char *) &s1,sizeof(s1));
while(!f1.eof())
{
if(s1.getstd()==s)
{
flag=1;
s1.output();
}
f1.read((char *) &s1,sizeof(s1));
}
f1.close();
if(flag==0)
{
cout<<"Standard does not exist"<<endl;
}
}

void searchsecs(char s)
{
flag=0;
f1.open("student.dat",ios::in|ios::binary);
f1.read((char *) &s1,sizeof(s1));
while(!f1.eof())
{
if(s1.getsec()==s)
{
flag=1;
s1.output();
}
f1.read((char *) &s1,sizeof(s1));
}
f1.close();
if(flag==0)
{
cout<<"section does not exist"<<endl;
}
}

void searchadds(char A[])
{
	flag=0;
	f1.open("student.dat",ios::in|ios::binary);
	f1.read((char *) &s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(s1.getadd(),A)==0)
		{
			flag=1;
			s1.output();
		}
		f1.read((char *) &s1,sizeof(s1));
	}
	f1.close();
	if(flag==0)
	{
		cout<<"Address does not exist"<<endl;
	}
}


void searchbuss(int b)
{
		flag=0;
f1.open("student.dat",ios::in|ios::binary);
f1.read((char *) &s1,sizeof(s1));
while(!f1.eof())
{
if(s1.getbus()==b)
{
flag=1;
s1.output();
}
f1.read((char *) &s1,sizeof(s1));
}
f1.close();
if(flag==0)
{
cout<<"Bus Route does not exist"<<endl;
}

}

void searchpnums(char P[])
{
	flag=0;
	f1.open("student.dat",ios::in|ios::binary);
	f1.read((char *) &s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(s1.getpnum(),P)==0)
		{
			flag=1;
			s1.output();
		}
		f1.read((char *) &s1,sizeof(s1));
	}
	f1.close();
	if(flag==0)
	{
		cout<<"Number does not exist"<<endl;
	}

}

void searchfnames(char F[])
{
	flag=0;
	f1.open("student.dat",ios::in|ios::binary);
	f1.read((char *) &s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(s1.getfname(),F)==0)
		{
			flag=1;
			s1.output();
		}
		f1.read((char *) &s1,sizeof(s1));
	}
	f1.close();
	if(flag==0)
	{
		cout<<"Name does not exist"<<endl;
	}

}

void searchsibs(char s)
{
	flag=0;
f1.open("student.dat",ios::in|ios::binary);
f1.read((char *) &s1,sizeof(s1));
while(!f1.eof())
{
if(s1.getsib()==s)
{
flag=1;
s1.output();
}
f1.read((char *) &s1,sizeof(s1));
}
f1.close();
if(flag==0)
{
cout<<"invalid entry"<<endl;
}

}

void searchb_gps(char B[])
{

	flag=0;
	f1.open("student.dat",ios::in|ios::binary);
	f1.read((char *) &s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(s1.getb_gp(),B)==0)
		{
			flag=1;
			s1.output();
		}
		f1.read((char *) &s1,sizeof(s1));
	}
	f1.close();
	if(flag==0)
	{
		cout<<" Does not exist"<<endl;
	}

}

void searchhouses(char h)
{
		flag=0;
f1.open("student.dat",ios::in|ios::binary);
f1.read((char *) &s1,sizeof(s1));
while(!f1.eof())
{
if(s1.gethouse()==h)
{
flag=1;
s1.output();
}
f1.read((char *) &s1,sizeof(s1));
}
f1.close();
if(flag==0)
{
cout<<"House does not exist"<<endl;
}

}

void updatens(char A[])
{
		f1.open("student.dat",ios::in|ios::out|ios::binary);
	f1.read((char *)&s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(s1.getname(),A)==0)
		{
			flag=1;
			pos=f1.tellg();
			f1.seekp(pos-sizeof(s1),ios::beg);
			cout<<"old Name:"<<s1.getname()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new Name"<<endl;
				gets(Ns);
				s1.setname(Ns);
			}
	cout<<"old Admission number: "<<s1.getadmn()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new Admission number"<<endl;
				cin>>As;
				s1.setadmn(As);
			}cout<<"old class: "<<s1.getstd()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new class"<<endl;
				cin>>C;
				s1.setstd(C);
			}cout<<"old section: "<<s1.getsec()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new section"<<endl;
				cin>>S;
				s1.setsec(S);
			}
			cout<<"old Address: "<<s1.getadd()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new address"<<endl;
				gets(Ad);
				s1.setadd(Ad);
			}cout<<"old bus route: "<<s1.getbus()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new bus route"<<endl;
				cin>>B;
				s1.setbus(B);
			}cout<<"old Phone number: "<<s1.getpnum()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new phone number"<<endl;
				gets(P);
				s1.setpnum(P);
			}cout<<"old Father's Name: "<<s1.getfname()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new Name"<<endl;
				gets(F);
				s1.setfname(F);
			}cout<<"sibling studying in this school: "<<s1.getsib()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new choice"<<endl;
				cin>>si;
				s1.setsib(si);
			}cout<<"old Blood Group: "<<s1.getb_gp()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new Blood group"<<endl;
				gets(Bgp);
				s1.setb_gp(Bgp);
			}cout<<"old House: "<<s1.gethouse()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new house"<<endl;
				cin>>h;
				s1.sethouse(h);
			}
			f1.write((char *) &s1,sizeof(s1));
			cout<<"Record updated"<<endl;
			break;
		}
		f1.read((char *)&s1,sizeof(s1));
	}
	f1.close();
	if(flag==0)
	{
		cout<<"Name does not exist to update"<<endl;
	}
}

void updateadmns(long a)
{

	f1.open("student.dat",ios::in|ios::out|ios::binary);
	f1.read((char *)&s1,sizeof(s1));
	while(!f1.eof())
	{
		if(s1.getadmn()==a)
		{
			flag=1;
			pos=f1.tellg();
			f1.seekp(pos-sizeof(s1),ios::beg);
			cout<<"old Name:"<<s1.getname()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new Name"<<endl;
				gets(Ns);
				s1.setname(Ns);
			}
	cout<<"old Admission number: "<<s1.getadmn()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new Admission number"<<endl;
				cin>>As;
				s1.setadmn(As);
			}cout<<"old class: "<<s1.getstd()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new class"<<endl;
				cin>>C;
				s1.setstd(C);
			}cout<<"old section: "<<s1.getsec()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new section"<<endl;
				cin>>S;
				s1.setsec(S);
			}
			cout<<"old Address: "<<s1.getadd()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new address"<<endl;
				gets(Ad);
				s1.setadd(Ad);
			}cout<<"old bus route: "<<s1.getbus()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new bus route"<<endl;
				cin>>B;
				s1.setbus(B);
			}cout<<"old Phone number: "<<s1.getpnum()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new phone number"<<endl;
				gets(P);
				s1.setpnum(P);
			}cout<<"old Father's Name: "<<s1.getfname()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new Name"<<endl;
				gets(F);
				s1.setfname(F);
			}cout<<"sibling studying in this school: "<<s1.getsib()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new choice"<<endl;
				cin>>si;
				s1.setsib(si);
			}cout<<"old Blood Group: "<<s1.getb_gp()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new Blood group"<<endl;
				gets(Bgp);
				s1.setb_gp(Bgp);
			}cout<<"old House: "<<s1.gethouse()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new house"<<endl;
				cin>>h;
				s1.sethouse(h);
			}
			f1.write((char *) &s1,sizeof(s1));
			cout<<"Record updated"<<endl;
			break;
		}
		f1.read((char *)&s1,sizeof(s1));
	}
	f1.close();
	if(flag==0)
	{
		cout<<"Admission Number does not exist to update"<<endl;
	}
}




void updatepnums(char Pn[])
{
			f1.open("student.dat",ios::in|ios::out|ios::binary);
	f1.read((char *)&s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(s1.getpnum(),Pn)==0)
		{
			flag=1;
			pos=f1.tellg();
			f1.seekp(pos-sizeof(s1),ios::beg);
			cout<<"old Name:"<<s1.getname()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new Name"<<endl;
				gets(N);
				s1.setname(N);
			}
	cout<<"old Admission number: "<<s1.getadmn()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new Admission number"<<endl;
				cin>>As;
				s1.setadmn(As);
			}cout<<"old class: "<<s1.getstd()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new class"<<endl;
				cin>>C;
				s1.setstd(C);
			}cout<<"old section: "<<s1.getsec()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new section"<<endl;
				cin>>S;
				s1.setsec(S);
			}
			cout<<"old Address: "<<s1.getadd()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new address"<<endl;
				gets(Ad);
				s1.setadd(Ad);
			}cout<<"old bus route: "<<s1.getbus()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new bus route"<<endl;
				cin>>B;
				s1.setbus(B);
			}cout<<"old Phone number: "<<s1.getpnum()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new phone number"<<endl;
				gets(P);
				s1.setpnum(P);
			}cout<<"old Father's Name: "<<s1.getfname()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new Name"<<endl;
				gets(F);
				s1.setfname(F);
			}cout<<"sibling studying in this school: "<<s1.getsib()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new choice"<<endl;
				cin>>si;
				s1.setsib(si);
			}cout<<"old Blood Group: "<<s1.getb_gp()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new Blood group"<<endl;
				gets(Bgp);
				s1.setb_gp(Bgp);
			}cout<<"old House: "<<s1.gethouse()<<" "<<endl;
			cout<<"do you wish to update it? "<<endl;
			cin>>ans;
			if(ans=='y')
			{
				cout<<"Enter new house"<<endl;
				cin>>h;
				s1.sethouse(h);
			}
			f1.write((char *) &s1,sizeof(s1));
			cout<<"Record updated"<<endl;
			break;
		}
		f1.read((char *)&s1,sizeof(s1));
	}
	f1.close();
	if(flag==0)
	{
		cout<<"Phone number does not exist to update"<<endl;
	}

}

void updatefnames(char F[])
{
	f1.open("student.dat",ios::in|ios::out|ios::binary);
	f1.read((char *)&s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(s1.getfname(),F)==0)
		{
			flag=1;
			pos=f1.tellg();
			f1.seekp(pos-sizeof(s1),ios::beg);
			cout<<"Enter new info to update"<<endl;
			s1.input();
			f1.write((char *) &s1,sizeof(s1));
			cout<<"Record updated"<<endl;
			break;
		}
		f1.read((char *)&s1,sizeof(s1));
	}
	f1.close();
	if(flag==0)
	{
		cout<<"Name does not exist to update"<<endl;
	}
}


void deletens(char N[])
{
	f1.open("student.dat",ios::in| ios::binary);
	f2.open("temp.dat",ios::out|ios::app|ios::binary);
	flag=0;
	f1.read((char *)&s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(s1.getname(),N)!=0)
		{
			f2.write((char *) &s1,sizeof(s1));
		}
		else
		{
			flag=1;
		}
		f1.read((char*)&s1,sizeof(s1));
	}
	f1.close();
	f2.close();
	remove("student.dat");
	rename("temp.dat","student.dat");
	if(flag==0)
	{
		cout<<"Name does not exists to delete"<<endl;
	}
	else
	{
		cout<<"Information deleted"<<endl;
	}
}



void deleteadmns(long a)
{
	f1.open("student.dat",ios::in| ios::binary);
	f2.open("temp.dat",ios::out|ios::app|ios::binary);
	flag=0;
	f1.read((char *)&s1,sizeof(s1));
	while(!f1.eof())
	{
		if(s1.getadmn()!=a)
		{
			f2.write((char *) &s1,sizeof(s1));
		}
		else
		{
			flag=1;
		}
		f1.read((char*)&s1,sizeof(s1));
	}
	f1.close();
	f2.close();
	remove("student.dat");
	rename("temp.dat","student.dat");
	if(flag==0)
	{
		cout<<"Admission Number does not exists to delete"<<endl;
	}
	else
	{
		cout<<"Information deleted"<<endl;
	}
}


void deletepnums(char P[])
{
	f1.open("student.dat",ios::in| ios::binary);
	f2.open("temp.dat",ios::out|ios::app|ios::binary);
	flag=0;
	f1.read((char *)&s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(s1.getpnum(),P)!=0)
		{
			f2.write((char *) &s1,sizeof(s1));
		}
		else
		{
			flag=1;
		}
		f1.read((char*)&s1,sizeof(s1));
	}
	f1.close();
	f2.close();
	remove("student.dat");
	rename("temp.dat","student.dat");
	if(flag==0)
	{
		cout<<"Number does not exists to delete"<<endl;
	}
	else
	{
		cout<<"Information deleted"<<endl;
	}

}


void deletefnames(char F[])
{
		f1.open("student.dat",ios::in| ios::binary);
	f2.open("temp.dat",ios::out|ios::app|ios::binary);
	flag=0;
	f1.read((char *)&s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(s1.getfname(),F)!=0)
		{
			f2.write((char *) &s1,sizeof(s1));
		}
		else
		{
			flag=1;
		}
		f1.read((char*)&s1,sizeof(s1));
	}
	f1.close();
	f2.close();
	remove("student.dat");
	rename("temp.dat","student.dat");
	if(flag==0)
	{
		cout<<"Name does not exists to delete"<<endl;
	}
	else
	{
		cout<<"Information deleted"<<endl;
	}

}





void toupdatestds(int x)
{
int b;
cout<<"Enter new class"<<endl;cin>>b;
	f1.open("student.dat",ios::in|ios::out|ios::binary);
	f1.read((char *)&s1,sizeof(s1));
	while(!f1.eof())
	{
		if(s1.getstd()==x)
		{
			flag=1;
			s1.setstd(b);
			f1.write((char *) &s1,sizeof(s1));
		}
		f1.read((char *)&s1,sizeof(s1));
	}
	if(flag==1)
	{
		cout<<"class updated"<<endl;
	}
	f1.close();
	if(flag==0)
	{
		cout<<"class does not exist to update"<<endl;
	}


}
void toupdatebus(int x)
{
int c;
cout<<"Enter new bus route"<<endl;cin>>c;
	f1.open("student.dat",ios::in|ios::out|ios::binary);
	f1.read((char *)&s1,sizeof(s1));
	while(!f1.eof())
	{
		if(s1.getbus()==x)
		{
			flag=1;
			s1.setbus(c);
			f1.write((char *) &s1,sizeof(s1));
		}
		f1.read((char *)&s1,sizeof(s1));
	}
	if(flag==1)
	{
		cout<<"bus route updated"<<endl;
	}
	f1.close();
	if(flag==0)
	{
		cout<<"bus route does not exist to update"<<endl;
	}


}


void	 assign_user()
{

	strcpy(admin.user_name, "aip");
	strcpy(admin.password, "aip");


}
int verify_password()
{
	char u_name[3];
	char u_pwd[3];int g=0;char a;
	cout<<"\n\n   Enter user name : ";
	cin>>u_name;
	if(strcmp(u_name,admin.user_name)==0)
	{
	cout<<"\n\n   Enter Password : ";
	for(g=0;;)
	{
	a=getch();
	  if((a>='a' && a<='z')||(a>='A'&& a<='Z')||(a>=0 && a<=9))
	       {
	       u_pwd[g]=a;
	       ++g;
	       cout<<"*";
	       }
	  if(a=='\r')
	  {
	  u_pwd[g]='\0';
	  break;
	  }
	}
	if(strcmp(u_pwd,admin.password)==0)
	{
	cout<<endl;
	return 0;
	}
	}
	else
	{
	return 1;
	}

}
void buslist(char Na[])
{
	      int	flag1=0,flag2=0,br;


	f1.open("SM1.dat",ios::in|ios::binary);
	f1.read((char *) &t1,sizeof(t1));
	f2.open("student.dat",ios::in|ios::binary);
	f2.read((char *) &s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(t1.getname(),Na)==0)
		{



flag1=1;
br=t1.getb();
cout<<"Bus Route: "<<br;
cout<<endl<<endl<<endl;
while(!f2.eof())
{
if(br==s1.getbus())
{
	cout<<s1.getname()<<"       "<<s1.getstd()<<" "<<s1.getsec()<<endl;
	flag2=1;
}
f2.read((char *) &s1,sizeof(s1));

}

}
f1.read((char *) &t1,sizeof(t1));
}
f1.close();   f2.close();
if(flag1==0)
{
cout<<"Teacher record unavailable"<<endl;
}
else if(flag2==0)
{
cout<<"No student with this bus route"<<endl;
}
}


void classlist(char Na[])
{
	      int   	flag1=0,flag2=0,br;  char bt;


	f1.open("SM1.dat",ios::in|ios::binary);
	f1.read((char *) &t1,sizeof(t1));
	f2.open("student.dat",ios::in|ios::binary);
	f2.read((char *) &s1,sizeof(s1));
	while(!f1.eof())
	{
		if(strcmp(t1.getname(),Na)==0)
		{



flag1=1;
br=t1.getstd(); bt=t1.getsec();
cout<<"Class: "<<br<<" "<<bt;
cout<<endl<<endl<<endl;
while(!f2.eof())
{
if(br==s1.getstd() && bt==s1.getsec())
{
	cout<<s1.getname()<<endl;
	flag2=1;
}
f2.read((char *) &s1,sizeof(s1));

}

}
f1.read((char *) &t1,sizeof(t1));
}
f1.close();   f2.close();
if(flag1==0)
{
cout<<"Teacher record unavailable"<<endl;
}
else if(flag2==0)
{
cout<<"class list unavailable"<<endl;
}
}
void houseteachername(char naam[])
{
int flag1=0,flag2=0;
char hs;


	f2.open("student.dat",ios::in|ios::binary);
	f2.read((char *) &s1,sizeof(s1));
	f1.open("SM1.dat",ios::in|ios::binary);
	f1.read((char *) &t1,sizeof(t1));

	while(!f2.eof())
	{
		if(strcmp(s1.getname(),naam)==0)
		{
		     flag1=1;
			hs=s1.gethouse();
			cout<<"House: "<<hs;
			cout<<endl<<"Teachers is/are                    ";
			while(!f1.eof())
				{
					if(hs==t1.gethouse())
					{
					cout<<t1.getname()<<endl;
					flag2=1;
					}
				f2.read((char *) &t1,sizeof(t1));

				}

		}
		f1.read((char *) &s1,sizeof(s1));
	}
f1.close();
f2.close();
if(flag1==0)
{
cout<<"Student record does not exist"<<endl;
}
else if(flag2==0)
{
cout<<"Sorry!Teacher's name is unavailable"<<endl;
}
}
void classteachername(char naam[])
{
int flag1=0,flag2=0,sc;
char ss;


	f2.open("student.dat",ios::in|ios::binary);
	f2.read((char *) &s1,sizeof(s1));
	f1.open("SM1.dat",ios::in|ios::binary);
	f1.read((char *) &t1,sizeof(t1));

	while(!f2.eof())
	{
		if(strcmp(s1.getname(),naam)==0)
		{
			flag1=1;
			sc=s1.getstd(); ss=s1.getsec();
			cout<<"Class: "<<sc<<" "<<ss;
			cout<<endl<<"                    ";
			while(!f1.eof())
				{
				if(sc==t1.getstd() && ss==t1.getsec())
					{
					cout<<t1.getname()<<endl;
					flag2=1;
					}
					f2.read((char *) &t1,sizeof(t1));

				}

		}
		f1.read((char *) &s1,sizeof(s1));
	}
f1.close();
f2.close();
if(flag1==0)
{
cout<<"Student record does not exist"<<endl;
}
else if(flag2==0)
{
cout<<"Sorry!Teacher's name is unavailable"<<endl;
}
}
void teachdept(char dep[])
{
	flag=0,i=1;
	f1.open("SM1.dat",ios::in|ios::binary);
	f1.read((char*)&t1,sizeof(t1));
	while(!f1.eof())
	{
		if(strcmpi(t1.getdept(),dep)==0)
		{
			cout<<i<<". "<<t1.getname()<<"     "<<t1.getsub()<<endl;
			flag=1;
			i++;
		}
		f1.read((char*)&t1,sizeof(t1));
	}
	f1.close();
	if(flag==0)
	{
		cout<<"Teacher record unavailable"<<endl;
	}
}
void classlist1(int s,char section)
{
	int flag1=0,flag2=0,i;
	f1.open("student.dat",ios::in|ios::binary);
	f2.open("SM1.dat",ios::in|ios::binary);
	f2.read((char*)&t1,sizeof(t1));
	while(!f2.eof())
	{
		if(t1.getstd()==s && t1.getsec()==section)
		{
			cout<<"     "<< "Class Teacher: " <<t1.getname()<<endl;
			cout<<endl<<endl;

			flag1=1;
			break;
		}
		f2.read((char*)&t1,sizeof(t1));
	}

	if(flag1==0)
	{
	cout<<"Class teacher record unavailable"<<endl;
	}

	i=1;
	f1.read((char*)&s1,sizeof(s1));
	while(!f1.eof())
	{
	if(s1.getstd()==s && s1.getsec()==section)
	{
		cout<<i<<". "<<s1.getname()<<"      "<<s1.getadmn()<<endl;
		i++;
		flag2=1;
	}
		f1.read((char*)&s1,sizeof(s1));
	}
	if(flag2==0)
	{
	cout<<"Student record unavailable"<<endl;
	}
	f1.close();
	f2.close();



}


void buslist1(int b)
{
	int flag1=0,flag2=0,i;
	f1.open("student.dat",ios::in|ios::binary);
	f2.open("SM1.dat",ios::in|ios::binary);
	f2.read((char*)&t1,sizeof(t1));
	while(!f2.eof())
	{
		if(t1.getb()==b)
		{
			cout<<"     "<< "Bus Incharge: " <<t1.getname()<<endl;
			cout<<endl<<endl;

			flag1=1;
			break;
		}
		f2.read((char*)&t1,sizeof(t1));
	}

	if(flag1==0)
	{
	cout<<"Bus incharge record unavailable"<<endl;
	}

	i=1;
	f1.read((char*)&s1,sizeof(s1));
	while(!f1.eof())
	{
	if(s1.getbus()==b)
	{
		cout<<i<<". "<<s1.getname()<<"      "<<s1.getadmn()<<endl;
		i++;
		flag2=1;
	}
		f1.read((char*)&s1,sizeof(s1));
	}
	if(flag2==0)
	{
	cout<<"Student record unavailable"<<endl;
	}
	f1.close();
	f2.close();



}








