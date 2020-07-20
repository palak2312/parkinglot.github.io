#include<bits/stdc++.h>
#include<conio.h>
#include<fstream>
using namespace std;
int choice,j,pp;
bool p;
char response;

int i;
int count=0,counts=0,countc=0,countb=0,countt=0,amountcoll=0;
string drivername;
string vn;
string sk;
string parkingtime;
ofstream fout;
ifstream fin;
void rr();
void first();
void display();
void small();
bool medium (bool find);
bool big(bool find);
bool vbig(bool find);
struct test
{
	string name;
	string no;
	string key;
	string pt;
};
vector<test> s1,s2,s3,c1,c2,c3,b1,b2,b3,t1,t2,t3;

void rr()
{
for(i=0;i<10;i++)
{
	s1.push_back({"","free","",""});
	s2.push_back({"","free","",""});
	s3.push_back({"","free","",""});
	c1.push_back({"","free","",""});
	c2.push_back({"","free","",""});
	c3.push_back({"","free","",""});
	b1.push_back({"","free","",""});
	b2.push_back({"","free","",""});
	b3.push_back({"","free","",""});
	t1.push_back({"","free","",""});
	t2.push_back({"","free","",""});
	t3.push_back({"","free","",""});

	//fout.open("s11no.txt",ios::ate);
    //fout << "free";
    //fout.close();
//    fout.open("s12no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s13no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s14no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s15no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s16no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s17no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s18no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s19no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s10no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//
//    fout.open("s21no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s22no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s23no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s24no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s25no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s26no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s27no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s28no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s29no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s20no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//
//    fout.open("s31no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s32no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s33no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s34no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s35no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s36no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s37no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s38no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s39no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("s30no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//
//    fout.open("c31no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c32no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c33no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c34no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c35no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c36no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c37no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c38no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c39no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c30no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//
//    fout.open("c21no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c22no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c23no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c24no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c25no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c26no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c27no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c28no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c29no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c20no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//
//    fout.open("c11no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c12no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c13no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c14no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c15no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c16no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c17no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c18no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c19no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("c10no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//
//    fout.open("b11no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b12no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b13no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b14no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b15no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b16no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b17no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b18no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b19no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b10no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//
//    fout.open("b21no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b22no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b23no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b24no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b25no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b26no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b27no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b28no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b29no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b20no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//
//    fout.open("b31no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b32no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b33no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b34no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b35no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b36no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b37no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b38no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b39no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("b30no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//
//    fout.open("t31no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t32no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t33no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t34no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t35no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t36no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t37no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t38no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t39no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t30no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//
//    fout.open("t21no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t22no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t23no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t24no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t25no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t26no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t27no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t28no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t29no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t20no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//
//    fout.open("t11no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t12no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t13no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t14no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t15no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t16no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t17no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t18no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t19no.txt",ios::ate);
//    fout << "free";
//    fout.close();
//    fout.open("t10no.txt",ios::ate);
//    fout << "free";
//    fout.close();





}
return;
}


void first()
{
	cout<<  "\n                  \t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n";
	cout << "                    \t\t\xdb                                               \xdb\n";
	cout <<("                    \t\t\xdb       =============================           \xdb\n");
	cout <<("                    \t\t\xdb                  WELCOME                      \xdb\n");
cout <<    ("                    \t\t\xdb                  TO THE                       \xdb\n");
	cout <<("                    \t\t\xdb          PARKING MANAGEMENT SYSTEM            \xdb\n");
	cout <<("                    \t\t\xdb        =============================          \xdb\n");
	cout <<("                    \t\t\xdb                                               \xdb\n");
	cout <<("                    \t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");
	cout <<(" \n\t Press Any Key To Continue:");

	getch();
    system("cls");
}

void display()
{
	   cout<<" \n\t\t\t ====================================================";
     cout << "\n\n\t\t\t      1. Arrival of a Car";
     cout << "\n\n\t\t\t      2. No. of vehicles parked";
     cout << "\n\n\t\t\t      3. Display order in which vehicles are parked";
     cout << "\n\n\t\t\t      4. Parking price for each type of vehicle";
     cout << "\n\n\t\t\t      5. Total amount collected";
      cout <<"\n\n\t\t\t      6. Departure of vehicle";
    cout <<  "\n\n\t\t\t      7. Exit program";
       cout<<" \n\t\t\t ====================================================";
     cout << "\n\n";
     cout << "\t\t\t Select Your Choice ::";

}

void small()
{


response='y';
	 p=false;
	 bool find=false;
     					 j=0;

     					 fin.open("s11no.txt");
     						    fin >> s1[1].no;
     						    fin.close();
     						    fin.open("s12no.txt");
     						    fin >> s1[2].no;
     						    fin.close();
     						    fin.open("s13no.txt");
     						    fin >> s1[3].no;
     						    fin.close();
     						    fin.open("s14no.txt");
     						    fin >> s1[4].no;
     						    fin.close();
     						    fin.open("s15no.txt");
     						    fin >> s1[5].no;
     						    fin.close();
     						    fin.open("s16no.txt");
     						    fin >> s1[6].no;
     						    fin.close();
     						    fin.open("s17no.txt");
     						    fin >> s1[7].no;
     						    fin.close();
     						    fin.open("s18no.txt");
     						    fin >> s1[8].no;
     						    fin.close();
     						    fin.open("s19no.txt");
     						    fin >> s1[9].no;
     						    fin.close();
     						    fin.open("s10no.txt");
     						    fin >> s1[0].no;
     						    fin.close();

     						for(i=0;i<10;i++)
     						{

     							if(s1[i].no=="free")
     							{
     								j=1;
     								p=true;
     								find=true;
     							    break;
								}
							}

							if(p!=true)
							{
							    fin.open("s21no.txt");
     						    fin >> s2[1].no;
     						    fin.close();
     						    fin.open("s22no.txt");
     						    fin >> s2[2].no;
     						    fin.close();
     						    fin.open("s23no.txt");
     						    fin >> s2[3].no;
     						    fin.close();
     						    fin.open("s24no.txt");
     						    fin >> s2[4].no;
     						    fin.close();
     						    fin.open("s25no.txt");
     						    fin >> s2[5].no;
     						    fin.close();
     						    fin.open("s26no.txt");
     						    fin >> s2[6].no;
     						    fin.close();
     						    fin.open("s27no.txt");
     						    fin >> s2[7].no;
     						    fin.close();
     						    fin.open("s28no.txt");
     						    fin >> s2[8].no;
     						    fin.close();
     						    fin.open("s29no.txt");
     						    fin >> s2[9].no;
     						    fin.close();
     						    fin.open("s20no.txt");
     						    fin >> s2[0].no;
     						    fin.close();

								for(i=0;i<10;i++)
     					     	{
     							  if(s2[i].no=="free")
     							  {
     							  	j=2;
     								p=true;
     								find =true;

     							    break;
								  }
							   }

							}
						    if(p!=true)
							{
							    fin.open("s31no.txt");
     						    fin >> s3[1].no;
     						    fin.close();
     						    fin.open("s32no.txt");
     						    fin >> s3[2].no;
     						    fin.close();
     						    fin.open("s33no.txt");
     						    fin >> s3[3].no;
     						    fin.close();
     						    fin.open("s34no.txt");
     						    fin >> s3[4].no;
     						    fin.close();
     						    fin.open("s35no.txt");
     						    fin >> s3[5].no;
     						    fin.close();
     						    fin.open("s36no.txt");
     						    fin >> s3[6].no;
     						    fin.close();
     						    fin.open("s37no.txt");
     						    fin >> s3[7].no;
     						    fin.close();
     						    fin.open("s38no.txt");
     						    fin >> s3[8].no;
     						    fin.close();
     						    fin.open("s39no.txt");
     						    fin >> s3[9].no;
     						    fin.close();
     						    fin.open("s30no.txt");
     						    fin >> s3[0].no;
     						    fin.close();

								for(i=0;i<10;i++)
     					     	{
     							  if(s3[i].no=="free")
     							  {
     							  	j=3;
     								p=true;
     								find =true;
     							    break;
								  }
							   }

							}
							if(p==true)
							{


								cout << "FREE PARKING LOT FOUND\n";

								cout << "ENTER DRIVER'S NAME\n";
								cin >> drivername;
								cout << "ENTER VEHICLE NUMBER\n";
								cin >> vn;
								cout << "MAKE YOUR SECURITY KEY \n";
								cin >> sk;


								cout << "ENTER PARKING TIME IN FORMAT(0013) MEANS 0 days 13 HR \n";
								cin >> parkingtime;
									while(1)
							   {
									bool py=false;
								if((( parkingtime[2]=='1' || parkingtime[2]=='0')&& (parkingtime[3]>='0' && parkingtime[3]<='9'))||(parkingtime[2]=='2' && parkingtime[3]>='0' && parkingtime[3]<='4'))
								{
								py=true;
								break;}
								if(py==false)
								cout << "ENTER VALID NUMBER\n";
								cin >> parkingtime;
								}

								if(j==1)
								{
									s1[i].name=drivername;
									s1[i].no=vn;
									s1[i].key=sk;
									s1[i].pt=parkingtime;
									if(i==1)
									{

									fout.open("s11name.txt",ios::ate);
									fout << s1[i].name;
									fout.close();
									fout.open("s11no.txt",ios::ate);
									fout << s1[i].no;
									fout.close();
									fout.open("s11key.txt",ios::ate);
									fout << s1[i].key;
									fout.close();
									fout.open("s11pt.txt",ios::ate);
									fout << s1[i].pt;
									fout.close();


									}
									if(i==2)
									{

									fout.open("s12name.txt",ios::ate);
									fout << s1[i].name;
									fout.close();
									fout.open("s12no.txt",ios::ate);
									fout << s1[i].no;
									fout.close();
									fout.open("s12key.txt",ios::ate);
									fout << s1[i].key;
									fout.close();
									fout.open("s12pt.txt",ios::ate);
									fout << s1[i].pt;
									fout.close();


									}
									if(i==3)
									{

									fout.open("s13name.txt",ios::ate);
									fout << s1[i].name;
									fout.close();
									fout.open("s13no.txt",ios::ate);
									fout << s1[i].no;
									fout.close();
									fout.open("s13key.txt",ios::ate);
									fout << s1[i].key;
									fout.close();
									fout.open("s13pt.txt",ios::ate);
									fout << s1[i].pt;
									fout.close();


									}
									if(i==4)
									{

									fout.open("s14name.txt",ios::ate);
									fout << s1[i].name;
									fout.close();
									fout.open("s14no.txt",ios::ate);
									fout << s1[i].no;
									fout.close();
									fout.open("s14key.txt",ios::ate);
									fout << s1[i].key;
									fout.close();
									fout.open("s14pt.txt",ios::ate);
									fout << s1[i].pt;fout.close();


									}
									if(i==5)
									{

									fout.open("s15name.txt",ios::ate);
									fout << s1[i].name;
									fout.close();
									fout.open("s15no.txt",ios::ate);
									fout << s1[i].no;fout.close();
									fout.open("s15key.txt",ios::ate);
									fout << s1[i].key;fout.close();
									fout.open("s15pt.txt",ios::ate);
									fout << s1[i].pt;fout.close();


									}
									if(i==6)
									{

									fout.open("s16name.txt",ios::ate);
									fout << s1[i].name;
									fout.close();
									fout.open("s16no.txt",ios::ate);
									fout << s1[i].no;fout.close();
									fout.open("s16key.txt",ios::ate);
									fout << s1[i].key;fout.close();
									fout.open("s16pt.txt",ios::ate);
									fout << s1[i].pt;fout.close();


									}
									if(i==7)
									{

									fout.open("s17name.txt",ios::ate);
									fout << s1[i].name;
									fout.close();
									fout.open("s17no.txt",ios::ate);
									fout << s1[i].no;fout.close();
									fout.open("s17key.txt",ios::ate);
									fout << s1[i].key;fout.close();
									fout.open("s17pt.txt",ios::ate);
									fout << s1[i].pt;fout.close();


									}
									if(i==8)
									{

									fout.open("s18name.txt",ios::ate);
									fout << s1[i].name;
									fout.close();
									fout.open("s18no.txt",ios::ate);
									fout << s1[i].no;fout.close();
									fout.open("s18key.txt",ios::ate);
									fout << s1[i].key;fout.close();
									fout.open("s18pt.txt",ios::ate);
									fout << s1[i].pt;fout.close();


									}
									if(i==9)
									{

									fout.open("s19name.txt",ios::ate);
									fout << s1[i].name;
									fout.close();
									fout.open("s19no.txt",ios::ate);
									fout << s1[i].no;fout.close();
									fout.open("s19key.txt",ios::ate);
									fout << s1[i].key;fout.close();
									fout.open("s19pt.txt",ios::ate);
									fout << s1[i].pt;fout.close();


									}
									if(i==0)
									{

									fout.open("s10name.txt",ios::ate);
									fout << s1[i].name;
									fout.close();
									fout.open("s10no.txt",ios::ate);
									fout << s1[i].no;
									fout.close();
									fout.open("s10key.txt",ios::ate);
									fout << s1[i].key;
									fout.close();
									fout.open("s10pt.txt",ios::ate);
									fout << s1[i].pt;
									fout.close();


									}




								}
								if(j==2)
								{
									s2[i].name=drivername;
									s2[i].no=vn;
									s2[i].key=sk;
									s2[i].pt=parkingtime;
									if(i==1)
									{

									fout.open("s21name.txt",ios::ate);
									fout << s2[i].name;
									fout.close();
									fout.open("s21no.txt",ios::ate);
									fout << s2[i].no;fout.close();
									fout.open("s21key.txt",ios::ate);
									fout << s2[i].key;fout.close();
									fout.open("s21pt.txt",ios::ate);
									fout << s2[i].pt;fout.close();


									}
									if(i==2)
									{

									fout.open("s22name.txt",ios::ate);
									fout << s2[i].name;
									fout.close();
									fout.open("s22no.txt",ios::ate);
									fout << s2[i].no;fout.close();
									fout.open("s22key.txt",ios::ate);
									fout << s2[i].key;fout.close();
									fout.open("s22pt.txt",ios::ate);
									fout << s2[i].pt;fout.close();


									}
									if(i==3)
									{

									fout.open("s23name.txt",ios::ate);
									fout << s2[i].name;
									fout.close();
									fout.open("s23no.txt",ios::ate);
									fout << s2[i].no;fout.close();
									fout.open("s23key.txt",ios::ate);
									fout << s2[i].key;fout.close();
									fout.open("s23pt.txt",ios::ate);
									fout << s2[i].pt;fout.close();


									}
									if(i==4)
									{

									fout.open("s24name.txt",ios::ate);
									fout << s2[i].name;
									fout.close();
									fout.open("s24no.txt",ios::ate);
									fout << s2[i].no;fout.close();
									fout.open("s24key.txt",ios::ate);
									fout << s2[i].key;fout.close();
									fout.open("s24pt.txt",ios::ate);
									fout << s2[i].pt;fout.close();


									}
									if(i==5)
									{

									fout.open("s25name.txt",ios::ate);
									fout << s2[i].name;
									fout.close();
									fout.open("s25no.txt",ios::ate);
									fout << s2[i].no;fout.close();
									fout.open("s25key.txt",ios::ate);
									fout << s2[i].key;fout.close();
									fout.open("s25pt.txt",ios::ate);
									fout << s2[i].pt;fout.close();


									}
									if(i==6)
									{

									fout.open("s26name.txt",ios::ate);
									fout << s2[i].name;
									fout.close();
									fout.open("s26no.txt",ios::ate);
									fout << s2[i].no;fout.close();
									fout.open("s26key.txt",ios::ate);
									fout << s2[i].key;fout.close();
									fout.open("s26pt.txt",ios::ate);
									fout << s2[i].pt;fout.close();


									}
									if(i==7)
									{

									fout.open("s27name.txt",ios::ate);
									fout << s2[i].name;
									fout.close();
									fout.open("s27no.txt",ios::ate);
									fout << s2[i].no;fout.close();
									fout.open("s27key.txt",ios::ate);
									fout << s2[i].key;fout.close();
									fout.open("s27pt.txt",ios::ate);
									fout << s2[i].pt;fout.close();


									}
									if(i==8)
									{

									fout.open("s28name.txt",ios::ate);
									fout << s2[i].name;
									fout.close();
									fout.open("s28no.txt",ios::ate);
									fout << s2[i].no;fout.close();
									fout.open("s28key.txt",ios::ate);
									fout << s2[i].key;fout.close();
									fout.open("s28pt.txt",ios::ate);
									fout << s2[i].pt;fout.close();


									}
									if(i==9)
									{

									fout.open("s29name.txt",ios::ate);
									fout << s2[i].name;
									fout.close();
									fout.open("s29no.txt",ios::ate);
									fout << s2[i].no;fout.close();
									fout.open("s29key.txt",ios::ate);
									fout << s2[i].key;fout.close();
									fout.open("s29pt.txt",ios::ate);
									fout << s2[i].pt;fout.close();


									}
									if(i==0)
									{

									fout.open("s20name.txt",ios::ate);
									fout << s2[i].name;
									fout.close();
									fout.open("s20no.txt",ios::ate);
									fout << s2[i].no;fout.close();
									fout.open("s20key.txt",ios::ate);
									fout << s2[i].key;fout.close();
									fout.open("s20pt.txt",ios::ate);
									fout << s2[i].pt;fout.close();


									}

								}
								if(j==3)
								{
									s3[i].name=drivername;
									s3[i].no=vn;
									s3[i].key=sk;
									s3[i].pt=parkingtime;

									if(i==1)
									{

									fout.open("s31name.txt",ios::ate);
									fout << s3[i].name;
									fout.close();
									fout.open("s31no.txt",ios::ate);
									fout << s3[i].no;fout.close();
									fout.open("s31key.txt",ios::ate);
									fout << s3[i].key;fout.close();
									fout.open("s31pt.txt",ios::ate);
									fout << s3[i].pt;fout.close();


									}
									if(i==2)
									{

									fout.open("s32name.txt",ios::ate);
									fout << s3[i].name;
									fout.close();
									fout.open("s32no.txt",ios::ate);
									fout << s3[i].no;fout.close();
									fout.open("s32key.txt",ios::ate);
									fout << s3[i].key;fout.close();
									fout.open("s32pt.txt",ios::ate);
									fout << s3[i].pt;fout.close();


									}
									if(i==3)
									{

									fout.open("s33name.txt",ios::ate);
									fout << s3[i].name;
									fout.close();
									fout.open("s33no.txt",ios::ate);
									fout << s3[i].no;fout.close();
									fout.open("s33key.txt",ios::ate);
									fout << s3[i].key;fout.close();
									fout.open("s33pt.txt",ios::ate);
									fout << s3[i].pt;fout.close();


									}
									if(i==4)
									{

									fout.open("s34name.txt",ios::ate);
									fout << s3[i].name;
									fout.close();
									fout.open("s34no.txt",ios::ate);
									fout << s3[i].no;fout.close();
									fout.open("s34key.txt",ios::ate);
									fout << s3[i].key;fout.close();
									fout.open("s34pt.txt",ios::ate);
									fout << s3[i].pt;fout.close();


									}
									if(i==5)
									{

									fout.open("s35name.txt",ios::ate);
									fout << s3[i].name;
									fout.close();
									fout.open("s35no.txt",ios::ate);
									fout << s3[i].no;fout.close();
									fout.open("s35key.txt",ios::ate);
									fout << s3[i].key;fout.close();
									fout.open("s35pt.txt",ios::ate);
									fout << s3[i].pt;fout.close();


									}
									if(i==6)
									{

									fout.open("s36name.txt",ios::ate);
									fout << s3[i].name;
									fout.close();
									fout.open("s36no.txt",ios::ate);
									fout << s3[i].no;fout.close();
									fout.open("s36key.txt",ios::ate);
									fout << s3[i].key;fout.close();
									fout.open("s36pt.txt",ios::ate);
									fout << s3[i].pt;fout.close();


									}
									if(i==7)
									{

									fout.open("s37name.txt",ios::ate);
									fout << s3[i].name;
									fout.close();
									fout.open("s37no.txt",ios::ate);
									fout << s3[i].no;fout.close();
									fout.open("s37key.txt",ios::ate);
									fout << s3[i].key;fout.close();
									fout.open("s37pt.txt",ios::ate);
									fout << s3[i].pt;fout.close();


									}
									if(i==8)
									{

									fout.open("s38name.txt",ios::ate);
									fout << s3[i].name;
									fout.close();
									fout.open("s38no.txt",ios::ate);
									fout << s3[i].no;fout.close();
									fout.open("s38key.txt",ios::ate);
									fout << s3[i].key;fout.close();
									fout.open("s38pt.txt",ios::ate);
									fout << s3[i].pt;fout.close();


									}
									if(i==9)
									{

									fout.open("s39name.txt",ios::ate);
									fout << s3[i].name;
									fout.close();
									fout.open("s39no.txt",ios::ate);
									fout << s3[i].no;fout.close();
									fout.open("s39key.txt",ios::ate);
									fout << s3[i].key;fout.close();
									fout.open("s39pt.txt",ios::ate);
									fout << s3[i].pt;fout.close();


									}
									if(i==0)
									{

									fout.open("s30name.txt",ios::ate);
									fout << s3[i].name;
									fout.close();
									fout.open("s30no.txt",ios::ate);
									fout << s3[i].no;fout.close();
									fout.open("s30key.txt",ios::ate);
									fout << s3[i].key;fout.close();
									fout.open("s30pt.txt",ios::ate);
									fout << s3[i].pt;fout.close();


									}

								}

								system("cls");

								fin.open("counts.txt");
                                 fin >> counts;fout.close();
								counts++;
								fout.open("counts.txt",ios::ate);
								fout<< counts;
								fout.close();





								cout << "\n\n\n\n\n\nVEHICLE PARKED! on "<<j<<" floor and " << i <<" position\n\n\n\n\n\n\n";
								cout << "KINDLY REMEMBER YOUR FLOOR NUMBER AND POSITION NUMBER,OTHERWISE YOU ARE NOT ABLE TO GET YOUR VEHICLE\n";

								cout << "ENTER ANY KEY TO CONTINUE";
								getch();
								return;
							}
							if(p==false)
							{
								medium(find);

									return;



							}



}

bool medium(bool find)
{
	response='y';
	p=false;
     					 j=0;

                            fin.open("c11no.txt");
     						    fin >> c1[1].no;
     						    fin.close();
     						    fin.open("c12no.txt");
     						    fin >> c1[2].no;
     						    fin.close();
     						    fin.open("c13no.txt");
     						    fin >> c1[3].no;
     						    fin.close();
     						    fin.open("c14no.txt");
     						    fin >> c1[4].no;
     						    fin.close();
     						    fin.open("c15no.txt");
     						    fin >> c1[5].no;
     						    fin.close();
     						    fin.open("c16no.txt");
     						    fin >> c1[6].no;
     						    fin.close();
     						    fin.open("c17no.txt");
     						    fin >> c1[7].no;
     						    fin.close();
     						    fin.open("c18no.txt");
     						    fin >> c1[8].no;
     						    fin.close();
     						    fin.open("c19no.txt");
     						    fin >> c1[9].no;
     						    fin.close();
     						    fin.open("c10no.txt");
     						    fin >> c1[0].no;
     						    fin.close();

     						for(i=0;i<10;i++)
     						{
     							if(c1[i].no=="free")
     							{
     								j=1;
     								p=true;
     								find=!find;
     							    break;
								}
							}

							if(p!=true)
							{
							    fin.open("c21no.txt");
     						    fin >> c2[1].no;
     						    fin.close();
     						    fin.open("c22no.txt");
     						    fin >> c2[2].no;
     						    fin.close();
     						    fin.open("c23no.txt");
     						    fin >> c2[3].no;
     						    fin.close();
     						    fin.open("c24no.txt");
     						    fin >> c2[4].no;
     						    fin.close();
     						    fin.open("c25no.txt");
     						    fin >> c2[5].no;
     						    fin.close();
     						    fin.open("c26no.txt");
     						    fin >> c2[6].no;
     						    fin.close();
     						    fin.open("c27no.txt");
     						    fin >> c2[7].no;
     						    fin.close();
     						    fin.open("c28no.txt");
     						    fin >> c2[8].no;
     						    fin.close();
     						    fin.open("c29no.txt");
     						    fin >> c2[9].no;
     						    fin.close();
     						    fin.open("c20no.txt");
     						    fin >> c2[0].no;
     						    fin.close();

								for(i=0;i<10;i++)
     					     	{
     							  if(c2[i].no=="free")
     							  {
     							  	j=2;
     								p=true;
     								find=!find;
     							    break;
								  }
							   }

							}
						    if(p!=true)
							{
							    fin.open("c31no.txt");
     						    fin >> c3[1].no;
     						    fin.close();
     						    fin.open("c32no.txt");
     						    fin >> c3[2].no;
     						    fin.close();
     						    fin.open("c33no.txt");
     						    fin >> c3[3].no;
     						    fin.close();
     						    fin.open("c34no.txt");
     						    fin >> c3[4].no;
     						    fin.close();
     						    fin.open("c35no.txt");
     						    fin >> c3[5].no;
     						    fin.close();
     						    fin.open("c36no.txt");
     						    fin >> c3[6].no;
     						    fin.close();
     						    fin.open("c37no.txt");
     						    fin >> c3[7].no;
     						    fin.close();
     						    fin.open("c38no.txt");
     						    fin >> c3[8].no;
     						    fin.close();
     						    fin.open("c39no.txt");
     						    fin >> c3[9].no;
     						    fin.close();
     						    fin.open("c30no.txt");
     						    fin >> c3[0].no;
     						    fin.close();

								for(i=0;i<10;i++)
     					     	{
     							  if(c3[i].no=="free")
     							  {
     							  	j=3;
     								p=true;
     								find=!find;
     							    break;
								  }
							   }

							}


							if(find==true && p==true)
							{
								cout << "SORRY ! SPACE IN YOUR LOT IS NOT FREE BUT SPACE IN CAR LOT IS FREE BUT THE CHARGES WOULD BE RS 20 PER HR. DO YOU WANT TO CONTINUE. y/n\n";

								cin >> response;
								if(response!='y')
								{
									return(false);
									system("cls");
								}
							}
							if(p==true)
							{
								cout << "FREE PARKING LOT FOUND\n";

								cout << "ENTER DRIVER'S NAME\n";
								cin >> drivername;
								cout << "ENTER VEHICLE NUMBER\n";
							cin >> vn;
								cout << "MAKE YOUR SECURITY KEY \n";
								cin >> sk;
								cout << "ENTER PARKING TIME IN FORMAT(0013) MEANS 0 days 13 HR \n";
								cin >> parkingtime;
									while(1)
							   {
									bool py=false;
								if((( parkingtime[2]=='1' || parkingtime[2]=='0')&& (parkingtime[3]>='0' && parkingtime[3]<='9'))||(parkingtime[2]=='2' && parkingtime[3]>='0' && parkingtime[3]<='4'))
								{
								py=true;
								break;}
								if(py==false)
								cout << "ENTER VALID NUMBER\n";
								cin >> parkingtime;
								}
								if(j==1)
								{
									c1[i].name=drivername;
									c1[i].no=vn;
									c1[i].key=sk;
									c1[i].pt=parkingtime;
									if(i==1)
									{

									fout.open("c11name.txt",ios::ate);
									fout << c1[i].name;
									fout.close();
									fout.open("c11no.txt",ios::ate);
									fout << c1[i].no;fout.close();
									fout.open("c11key.txt",ios::ate);
									fout << c1[i].key;fout.close();
									fout.open("c11pt.txt",ios::ate);
									fout << c1[i].pt;fout.close();


									}
									if(i==2)
									{

									fout.open("c12name.txt",ios::ate);
									fout << c1[i].name;
									fout.close();
									fout.open("c12no.txt",ios::ate);
									fout << c1[i].no;fout.close();
									fout.open("c12key.txt",ios::ate);
									fout << c1[i].key;fout.close();
									fout.open("c12pt.txt",ios::ate);
									fout << c1[i].pt;fout.close();


									}
									if(i==3)
									{

									fout.open("c13name.txt",ios::ate);
									fout << c1[i].name;
									fout.close();
									fout.open("c13no.txt",ios::ate);
									fout << c1[i].no;fout.close();
									fout.open("c13key.txt",ios::ate);
									fout << c1[i].key;fout.close();
									fout.open("c13pt.txt",ios::ate);
									fout << c1[i].pt;fout.close();


									}
									if(i==4)
									{

									fout.open("c14name.txt",ios::ate);
									fout << c1[i].name;
									fout.close();
									fout.open("c14no.txt",ios::ate);
									fout << c1[i].no;fout.close();
									fout.open("c14key.txt",ios::ate);
									fout << c1[i].key;fout.close();
									fout.open("c14pt.txt",ios::ate);
									fout << c1[i].pt;fout.close();


									}
									if(i==5)
									{

									fout.open("c15name.txt",ios::ate);
									fout << c1[i].name;
									fout.close();
									fout.open("c15no.txt",ios::ate);
									fout << c1[i].no;fout.close();
									fout.open("c15key.txt",ios::ate);
									fout << c1[i].key;fout.close();
									fout.open("c15pt.txt",ios::ate);
									fout << c1[i].pt;fout.close();


									}
									if(i==6)
									{

									fout.open("c16name.txt",ios::ate);
									fout << c1[i].name;
									fout.close();
									fout.open("c16no.txt",ios::ate);
									fout << c1[i].no;fout.close();
									fout.open("c16key.txt",ios::ate);
									fout << c1[i].key;fout.close();
									fout.open("c16pt.txt",ios::ate);
									fout << c1[i].pt;fout.close();


									}
									if(i==7)
									{

									fout.open("c17name.txt",ios::ate);
									fout << c1[i].name;
									fout.close();
									fout.open("c17no.txt",ios::ate);
									fout << c1[i].no;fout.close();
									fout.open("c17key.txt",ios::ate);
									fout << c1[i].key;fout.close();
									fout.open("c17pt.txt",ios::ate);
									fout << c1[i].pt;fout.close();


									}
									if(i==8)
									{

									fout.open("c18name.txt",ios::ate);
									fout << c1[i].name;
									fout.close();
									fout.open("c18no.txt",ios::ate);
									fout << c1[i].no;fout.close();
									fout.open("c18key.txt",ios::ate);
									fout << c1[i].key;fout.close();
									fout.open("c18pt.txt",ios::ate);
									fout << c1[i].pt;fout.close();


									}
									if(i==9)
									{

									fout.open("c19name.txt",ios::ate);
									fout << c1[i].name;
									fout.close();
									fout.open("c19no.txt",ios::ate);
									fout << c1[i].no;fout.close();
									fout.open("c19key.txt",ios::ate);
									fout << c1[i].key;fout.close();
									fout.open("c19pt.txt",ios::ate);
									fout << c1[i].pt;fout.close();


									}
									if(i==0)
									{

									fout.open("c10name.txt",ios::ate);
									fout << c1[i].name;
									fout.close();
									fout.open("c10no.txt",ios::ate);
									fout << c1[i].no;
									fout.close();
									fout.open("c10key.txt",ios::ate);
									fout << c1[i].key;
									fout.close();
									fout.open("c10pt.txt",ios::ate);
									fout << c1[i].pt;
									fout.close();


									}




								}
								if(j==2)
								{
									c2[i].name=drivername;
									c2[i].no=vn;
									c2[i].key=sk;
									c2[i].pt=parkingtime;
									if(i==1)
									{

									fout.open("c21name.txt",ios::ate);
									fout << c2[i].name;
									fout.close();
									fout.open("c21no.txt",ios::ate);
									fout << c2[i].no;fout.close();
									fout.open("c21key.txt",ios::ate);
									fout << c2[i].key;fout.close();
									fout.open("c21pt.txt",ios::ate);
									fout << c2[i].pt;fout.close();


									}
									if(i==2)
									{

									fout.open("c22name.txt",ios::ate);
									fout << c2[i].name;
									fout.close();
									fout.open("c22no.txt",ios::ate);
									fout << c2[i].no;fout.close();
									fout.open("c22key.txt",ios::ate);
									fout << c2[i].key;fout.close();
									fout.open("c22pt.txt",ios::ate);
									fout << c2[i].pt;fout.close();


									}
									if(i==3)
									{

									fout.open("c23name.txt",ios::ate);
									fout << c2[i].name;
									fout.close();
									fout.open("c23no.txt",ios::ate);
									fout << c2[i].no;fout.close();
									fout.open("c23key.txt",ios::ate);
									fout << c2[i].key;fout.close();
									fout.open("c23pt.txt",ios::ate);
									fout << c2[i].pt;fout.close();


									}
									if(i==4)
									{

									fout.open("c24name.txt",ios::ate);
									fout << c2[i].name;
									fout.close();
									fout.open("c24no.txt",ios::ate);
									fout << c2[i].no;fout.close();
									fout.open("c24key.txt",ios::ate);
									fout << c2[i].key;fout.close();
									fout.open("c24pt.txt",ios::ate);
									fout << c2[i].pt;fout.close();


									}
									if(i==5)
									{

									fout.open("c25name.txt",ios::ate);
									fout << c2[i].name;
									fout.close();
									fout.open("c25no.txt",ios::ate);
									fout << c2[i].no;fout.close();
									fout.open("c25key.txt",ios::ate);
									fout << c2[i].key;fout.close();
									fout.open("c25pt.txt",ios::ate);
									fout << c2[i].pt;fout.close();


									}
									if(i==6)
									{

									fout.open("c26name.txt",ios::ate);
									fout << c2[i].name;
									fout.close();
									fout.open("c26no.txt",ios::ate);
									fout << c2[i].no;fout.close();
									fout.open("c26key.txt",ios::ate);
									fout << c2[i].key;fout.close();
									fout.open("c26pt.txt",ios::ate);
									fout << c2[i].pt;fout.close();


									}
									if(i==7)
									{

									fout.open("c27name.txt",ios::ate);
									fout << c2[i].name;
									fout.close();
									fout.open("c27no.txt",ios::ate);
									fout << c2[i].no;fout.close();
									fout.open("c27key.txt",ios::ate);
									fout << c2[i].key;fout.close();
									fout.open("c27pt.txt",ios::ate);
									fout << c2[i].pt;fout.close();


									}
									if(i==8)
									{

									fout.open("c28name.txt",ios::ate);
									fout << c2[i].name;
									fout.close();
									fout.open("c28no.txt",ios::ate);
									fout << c2[i].no;fout.close();
									fout.open("c28key.txt",ios::ate);
									fout << c2[i].key;fout.close();
									fout.open("c28pt.txt",ios::ate);
									fout << c2[i].pt;fout.close();


									}
									if(i==9)
									{

									fout.open("c29name.txt",ios::ate);
									fout << c2[i].name;
									fout.close();
									fout.open("c29no.txt",ios::ate);
									fout << c2[i].no;fout.close();
									fout.open("c29key.txt",ios::ate);
									fout << c2[i].key;fout.close();
									fout.open("c29pt.txt",ios::ate);
									fout << c2[i].pt;fout.close();


									}
									if(i==0)
									{

									fout.open("c20name.txt",ios::ate);
									fout << c2[i].name;
									fout.close();
									fout.open("c20no.txt",ios::ate);
									fout << c2[i].no;fout.close();
									fout.open("c20key.txt",ios::ate);
									fout << c2[i].key;fout.close();
									fout.open("c20pt.txt",ios::ate);
									fout << c2[i].pt;fout.close();


									}

								}
								if(j==3)
								{
									c3[i].name=drivername;
									c3[i].no=vn;
									c3[i].key=sk;
									c3[i].pt=parkingtime;

									if(i==1)
									{

									fout.open("c31name.txt",ios::ate);
									fout << c3[i].name;
									fout.close();
									fout.open("c31no.txt",ios::ate);
									fout << c3[i].no;fout.close();
									fout.open("c31key.txt",ios::ate);
									fout << c3[i].key;fout.close();
									fout.open("c31pt.txt",ios::ate);
									fout << c3[i].pt;fout.close();


									}
									if(i==2)
									{

									fout.open("c32name.txt",ios::ate);
									fout << c3[i].name;
									fout.close();
									fout.open("c32no.txt",ios::ate);
									fout << c3[i].no;fout.close();
									fout.open("c32key.txt",ios::ate);
									fout << c3[i].key;fout.close();
									fout.open("c32pt.txt",ios::ate);
									fout << c3[i].pt;fout.close();


									}
									if(i==3)
									{

									fout.open("c33name.txt",ios::ate);
									fout << c3[i].name;
									fout.close();
									fout.open("c33no.txt",ios::ate);
									fout << c3[i].no;fout.close();
									fout.open("c33key.txt",ios::ate);
									fout << c3[i].key;fout.close();
									fout.open("c33pt.txt",ios::ate);
									fout << c3[i].pt;fout.close();


									}
									if(i==4)
									{

									fout.open("c34name.txt",ios::ate);
									fout << c3[i].name;
									fout.close();
									fout.open("c34no.txt",ios::ate);
									fout << c3[i].no;fout.close();
									fout.open("c34key.txt",ios::ate);
									fout << c3[i].key;fout.close();
									fout.open("c34pt.txt",ios::ate);
									fout << c3[i].pt;fout.close();


									}
									if(i==5)
									{

									fout.open("c35name.txt",ios::ate);
									fout << c3[i].name;
									fout.close();
									fout.open("c35no.txt",ios::ate);
									fout << c3[i].no;fout.close();
									fout.open("c35key.txt",ios::ate);
									fout << c3[i].key;fout.close();
									fout.open("c35pt.txt",ios::ate);
									fout << c3[i].pt;fout.close();


									}
									if(i==6)
									{

									fout.open("c36name.txt",ios::ate);
									fout << c3[i].name;
									fout.close();
									fout.open("c36no.txt",ios::ate);
									fout << c3[i].no;fout.close();
									fout.open("c36key.txt",ios::ate);
									fout << c3[i].key;fout.close();
									fout.open("c36pt.txt",ios::ate);
									fout << c3[i].pt;fout.close();


									}
									if(i==7)
									{

									fout.open("c37name.txt",ios::ate);
									fout << c3[i].name;
									fout.close();
									fout.open("c37no.txt",ios::ate);
									fout << c3[i].no;fout.close();
									fout.open("c37key.txt",ios::ate);
									fout << c3[i].key;fout.close();
									fout.open("c37pt.txt",ios::ate);
									fout << c3[i].pt;fout.close();


									}
									if(i==8)
									{

									fout.open("c38name.txt",ios::ate);
									fout << c3[i].name;
									fout.close();
									fout.open("c38no.txt",ios::ate);
									fout << c3[i].no;fout.close();
									fout.open("c38key.txt",ios::ate);
									fout << c3[i].key;fout.close();
									fout.open("c38pt.txt",ios::ate);
									fout << c3[i].pt;fout.close();


									}
									if(i==9)
									{

									fout.open("c39name.txt",ios::ate);
									fout << c3[i].name;
									fout.close();
									fout.open("c39no.txt",ios::ate);
									fout << c3[i].no;fout.close();
									fout.open("c39key.txt",ios::ate);
									fout << c3[i].key;fout.close();
									fout.open("c39pt.txt",ios::ate);
									fout << c3[i].pt;fout.close();


									}
									if(i==0)
									{

									fout.open("c30name.txt",ios::ate);
									fout << c3[i].name;
									fout.close();
									fout.open("c30no.txt",ios::ate);
									fout << c3[i].no;fout.close();
									fout.open("c30key.txt",ios::ate);
									fout << c3[i].key;fout.close();
									fout.open("c30pt.txt",ios::ate);
									fout << c3[i].pt;fout.close();


									}

								}
								system("cls");
                                 fin.open("countc.txt");
                                 fin >> countc;fout.close();
								countc++;
								fout.open("countc.txt",ios::ate);
								fout<< countc;
								fout.close();

								cout << "\n\n\n\n\n\nVEHICLE PARKED! on "<<j<<" floor and " << i <<" position\n\n\n\n\n\n\n";
								cout << "KINDLY REMEMBER YOUR FLOOR NUMBER AND POSITION NUMBER,OTHERWISE YOU ARE NOT ABLE TO GET YOUR VEHICLE\n";

								cout << "ENTER ANY KEY TO CONTINUE";
								getch();

								return(true);
							}
							if(p==false)
							{
								big(find);

									return(false);



							}

}
bool big(bool find)
{
	response='y';
	p=false;
     					 j=0;

                             fin.open("b11no.txt");
     						    fin >> b1[1].no;
     						    fin.close();
     						    fin.open("b12no.txt");
     						    fin >> b1[2].no;
     						    fin.close();
     						    fin.open("b13no.txt");
     						    fin >> b1[3].no;
     						    fin.close();
     						    fin.open("b14no.txt");
     						    fin >> b1[4].no;
     						    fin.close();
     						    fin.open("b15no.txt");
     						    fin >> b1[5].no;
     						    fin.close();
     						    fin.open("b16no.txt");
     						    fin >> b1[6].no;
     						    fin.close();
     						    fin.open("b17no.txt");
     						    fin >> b1[7].no;
     						    fin.close();
     						    fin.open("b18no.txt");
     						    fin >> b1[8].no;
     						    fin.close();
     						    fin.open("b19no.txt");
     						    fin >> b1[9].no;
     						    fin.close();
     						    fin.open("b10no.txt");
     						    fin >> b1[0].no;
     						    fin.close();

     						for(i=0;i<10;i++)
     						{
     							if(b1[i].no=="free")
     							{
     								j=1;
     								p=true;
     								find=!find;
     							    break;
								}
							}

							if(p!=true)
							{
							    fin.open("b21no.txt");
     						    fin >> b2[1].no;
     						    fin.close();
     						    fin.open("b22no.txt");
     						    fin >> b2[2].no;
     						    fin.close();
     						    fin.open("b23no.txt");
     						    fin >> b2[3].no;
     						    fin.close();
     						    fin.open("b24no.txt");
     						    fin >> b2[4].no;
     						    fin.close();
     						    fin.open("b25no.txt");
     						    fin >> b2[5].no;
     						    fin.close();
     						    fin.open("b26no.txt");
     						    fin >> b2[6].no;
     						    fin.close();
     						    fin.open("b27no.txt");
     						    fin >> b2[7].no;
     						    fin.close();
     						    fin.open("b28no.txt");
     						    fin >> b2[8].no;
     						    fin.close();
     						    fin.open("b29no.txt");
     						    fin >> b2[9].no;
     						    fin.close();
     						    fin.open("b20no.txt");
     						    fin >> b2[0].no;
     						    fin.close();

								for(i=0;i<10;i++)
     					     	{
     							  if(b2[i].no=="free")
     							  {
     							  	j=2;
     								p=true;
     								find=!find;
     							    break;
								  }
							   }

							}
						    if(p!=true)
							{
							    fin.open("b31no.txt");
     						    fin >> b3[1].no;
     						    fin.close();
     						    fin.open("b32no.txt");
     						    fin >> b3[2].no;
     						    fin.close();
     						    fin.open("b33no.txt");
     						    fin >> b3[3].no;
     						    fin.close();
     						    fin.open("b34no.txt");
     						    fin >> b3[4].no;
     						    fin.close();
     						    fin.open("b35no.txt");
     						    fin >> b3[5].no;
     						    fin.close();
     						    fin.open("b36no.txt");
     						    fin >> b3[6].no;
     						    fin.close();
     						    fin.open("b37no.txt");
     						    fin >> b3[7].no;
     						    fin.close();
     						    fin.open("b38no.txt");
     						    fin >> b3[8].no;
     						    fin.close();
     						    fin.open("b39no.txt");
     						    fin >> b3[9].no;
     						    fin.close();
     						    fin.open("b30no.txt");
     						    fin >> b3[0].no;
     						    fin.close();

								for(i=0;i<10;i++)
     					     	{
     							  if(b3[i].no=="free")
     							  {
     							  	j=3;
     								p=true;
     								find=!find;
     							    break;
								  }
							   }

							}
							if(find==true && p==true)
							{
								cout << "SORRY ! SPACE IN YOUR LOT IS NOT FREE BUT SPACE IN BUS LOT IS FREE BUT THE CHARGES WOULD BE RS 40 PER HR. DO YOU WANT TO CONTINUE. y/n\n";

								cin >> response;
								if(response!='y')
								{
									return(false);
									system("cls");
								}
							}
							if(p==true)
							{
								cout << "FREE PARKING LOT FOUND\n";

								cout << "ENTER DRIVER'S NAME\n";
								cin >>drivername;
								cout << "ENTER VEHICLE NUMBER\n";
								cin>>vn;
								cout << "MAKE YOUR SECURITY KEY\n";
								cin >> sk;
								cout << "ENTER PARKING TIME IN FORMAT(0013) MEANS 0 days 13 HR \n";
								cin >> parkingtime;
									while(1)
							   {
									bool py=false;
								if((( parkingtime[2]=='1' || parkingtime[2]=='0')&& (parkingtime[3]>='0' && parkingtime[3]<='9'))||(parkingtime[2]=='2' && parkingtime[3]>='0' && parkingtime[3]<='4'))
								{
								py=true;
								break;}
								if(py==false)
								cout << "ENTER VALID NUMBER\n";
								cin >> parkingtime;
								}
								if(j==1)
								{
									b1[i].name=drivername;
									b1[i].no=vn;
									b1[i].key=sk;
									b1[i].pt=parkingtime;
									if(i==1)
									{

									fout.open("b11name.txt",ios::ate);
									fout << b1[i].name;
									fout.close();
									fout.open("b11no.txt",ios::ate);
									fout << b1[i].no;fout.close();
									fout.open("b11key.txt",ios::ate);
									fout << b1[i].key;fout.close();
									fout.open("b11pt.txt",ios::ate);
									fout << b1[i].pt;fout.close();


									}
									if(i==2)
									{

									fout.open("b12name.txt",ios::ate);
									fout << b1[i].name;
									fout.close();
									fout.open("b12no.txt",ios::ate);
									fout << b1[i].no;fout.close();
									fout.open("b12key.txt",ios::ate);
									fout << b1[i].key;fout.close();
									fout.open("b12pt.txt",ios::ate);
									fout << b1[i].pt;fout.close();


									}
									if(i==3)
									{

									fout.open("b13name.txt",ios::ate);
									fout << b1[i].name;
									fout.close();
									fout.open("b13no.txt",ios::ate);
									fout << b1[i].no;fout.close();
									fout.open("b13key.txt",ios::ate);
									fout << b1[i].key;fout.close();
									fout.open("b13pt.txt",ios::ate);
									fout << b1[i].pt;fout.close();


									}
									if(i==4)
									{

									fout.open("b14name.txt",ios::ate);
									fout << b1[i].name;
									fout.close();
									fout.open("b14no.txt",ios::ate);
									fout << b1[i].no;fout.close();
									fout.open("b14key.txt",ios::ate);
									fout << b1[i].key;fout.close();
									fout.open("b14pt.txt",ios::ate);
									fout << b1[i].pt;fout.close();


									}
									if(i==5)
									{

									fout.open("b15name.txt",ios::ate);
									fout << b1[i].name;
									fout.close();
									fout.open("b15no.txt",ios::ate);
									fout << b1[i].no;fout.close();
									fout.open("b15key.txt",ios::ate);
									fout << b1[i].key;fout.close();
									fout.open("b15pt.txt",ios::ate);
									fout << b1[i].pt;fout.close();


									}
									if(i==6)
									{

									fout.open("b16name.txt",ios::ate);
									fout << b1[i].name;
									fout.close();
									fout.open("b16no.txt",ios::ate);
									fout << b1[i].no;fout.close();
									fout.open("b16key.txt",ios::ate);
									fout << b1[i].key;fout.close();
									fout.open("b16pt.txt",ios::ate);
									fout << b1[i].pt;fout.close();


									}
									if(i==7)
									{

									fout.open("b17name.txt",ios::ate);
									fout << b1[i].name;
									fout.close();
									fout.open("b17no.txt",ios::ate);
									fout << b1[i].no;fout.close();
									fout.open("b17key.txt",ios::ate);
									fout << b1[i].key;fout.close();
									fout.open("b17pt.txt",ios::ate);
									fout << b1[i].pt;fout.close();


									}
									if(i==8)
									{

									fout.open("b18name.txt",ios::ate);
									fout << b1[i].name;
									fout.close();
									fout.open("b18no.txt",ios::ate);
									fout << b1[i].no;fout.close();
									fout.open("b18key.txt",ios::ate);
									fout << b1[i].key;fout.close();
									fout.open("b18pt.txt",ios::ate);
									fout << b1[i].pt;fout.close();


									}
									if(i==9)
									{

									fout.open("b19name.txt",ios::ate);
									fout << b1[i].name;
									fout.close();
									fout.open("b19no.txt",ios::ate);
									fout << b1[i].no;fout.close();
									fout.open("b19key.txt",ios::ate);
									fout << b1[i].key;fout.close();
									fout.open("b19pt.txt",ios::ate);
									fout << b1[i].pt;fout.close();


									}
									if(i==0)
									{

									fout.open("b10name.txt",ios::ate);
									fout << b1[i].name;
									fout.close();
									fout.open("b10no.txt",ios::ate);
									fout << b1[i].no;fout.close();
									fout.open("b10key.txt",ios::ate);
									fout << b1[i].key;fout.close();
									fout.open("b10pt.txt",ios::ate);
									fout << b1[i].pt;fout.close();


									}




								}
								if(j==2)
								{
									b2[i].name=drivername;
									b2[i].no=vn;
									b2[i].key=sk;
									b2[i].pt=parkingtime;
									if(i==1)
									{

									fout.open("b21name.txt",ios::ate);
									fout << b2[i].name;
									fout.close();
									fout.open("b21no.txt",ios::ate);
									fout << b2[i].no;fout.close();
									fout.open("b21key.txt",ios::ate);
									fout << b2[i].key;fout.close();
									fout.open("b21pt.txt",ios::ate);
									fout << b2[i].pt;fout.close();


									}
									if(i==2)
									{

									fout.open("b22name.txt",ios::ate);
									fout << b2[i].name;
									fout.close();
									fout.open("b22no.txt",ios::ate);
									fout << b2[i].no;fout.close();
									fout.open("b22key.txt",ios::ate);
									fout << b2[i].key;fout.close();
									fout.open("b22pt.txt",ios::ate);
									fout << b2[i].pt;fout.close();


									}
									if(i==3)
									{

									fout.open("b23name.txt",ios::ate);
									fout << b2[i].name;
									fout.close();
									fout.open("b23no.txt",ios::ate);
									fout << b2[i].no;fout.close();
									fout.open("b23key.txt",ios::ate);
									fout << b2[i].key;fout.close();
									fout.open("b23pt.txt",ios::ate);
									fout << b2[i].pt;fout.close();


									}
									if(i==4)
									{

									fout.open("b24name.txt",ios::ate);
									fout << b2[i].name;
									fout.close();
									fout.open("b24no.txt",ios::ate);
									fout << b2[i].no;fout.close();
									fout.open("b24key.txt",ios::ate);
									fout << b2[i].key;fout.close();
									fout.open("b24pt.txt",ios::ate);
									fout << b2[i].pt;fout.close();


									}
									if(i==5)
									{

									fout.open("b25name.txt",ios::ate);
									fout << b2[i].name;
									fout.close();
									fout.open("b25no.txt",ios::ate);
									fout << b2[i].no;fout.close();
									fout.open("b25key.txt",ios::ate);
									fout << b2[i].key;fout.close();
									fout.open("b25pt.txt",ios::ate);
									fout << b2[i].pt;fout.close();


									}
									if(i==6)
									{

									fout.open("b26name.txt",ios::ate);
									fout << b2[i].name;
									fout.close();
									fout.open("b26no.txt",ios::ate);
									fout << b2[i].no;fout.close();
									fout.open("b26key.txt",ios::ate);
									fout << b2[i].key;fout.close();
									fout.open("b26pt.txt",ios::ate);
									fout << b2[i].pt;fout.close();


									}
									if(i==7)
									{

									fout.open("b27name.txt",ios::ate);
									fout << b2[i].name;
									fout.close();
									fout.open("b27no.txt",ios::ate);
									fout << b2[i].no;fout.close();
									fout.open("b27key.txt",ios::ate);
									fout << b2[i].key;fout.close();
									fout.open("b27pt.txt",ios::ate);
									fout << b2[i].pt;fout.close();


									}
									if(i==8)
									{

									fout.open("b28name.txt",ios::ate);
									fout << b2[i].name;
									fout.close();
									fout.open("b28no.txt",ios::ate);
									fout << b2[i].no;fout.close();
									fout.open("b28key.txt",ios::ate);
									fout << b2[i].key;fout.close();
									fout.open("b28pt.txt",ios::ate);
									fout << b2[i].pt;fout.close();


									}
									if(i==9)
									{

									fout.open("b29name.txt",ios::ate);
									fout << b2[i].name;
									fout.close();
									fout.open("b29no.txt",ios::ate);
									fout << b2[i].no;fout.close();
									fout.open("b29key.txt",ios::ate);
									fout << b2[i].key;fout.close();
									fout.open("b29pt.txt",ios::ate);
									fout << b2[i].pt;fout.close();


									}
									if(i==0)
									{

									fout.open("b20name.txt",ios::ate);
									fout << b2[i].name;
									fout.close();
									fout.open("b20no.txt",ios::ate);
									fout << b2[i].no;fout.close();
									fout.open("b20key.txt",ios::ate);
									fout << b2[i].key;fout.close();
									fout.open("b20pt.txt",ios::ate);
									fout << b2[i].pt;fout.close();


									}

								}
								if(j==3)
								{
									b3[i].name=drivername;
									b3[i].no=vn;
									b3[i].key=sk;
									b3[i].pt=parkingtime;

									if(i==1)
									{

									fout.open("b31name.txt",ios::ate);
									fout << b3[i].name;
									fout.close();
									fout.open("b31no.txt",ios::ate);
									fout << b3[i].no;fout.close();
									fout.open("b31key.txt",ios::ate);
									fout << b3[i].key;fout.close();
									fout.open("b31pt.txt",ios::ate);
									fout << b3[i].pt;fout.close();


									}
									if(i==2)
									{

									fout.open("b32name.txt",ios::ate);
									fout << b3[i].name;
									fout.close();
									fout.open("b32no.txt",ios::ate);
									fout << b3[i].no;fout.close();
									fout.open("b32key.txt",ios::ate);
									fout << b3[i].key;fout.close();
									fout.open("b32pt.txt",ios::ate);
									fout << b3[i].pt;fout.close();


									}
									if(i==3)
									{

									fout.open("b33name.txt",ios::ate);
									fout << b3[i].name;
									fout.close();
									fout.open("b33no.txt",ios::ate);
									fout << b3[i].no;fout.close();
									fout.open("b33key.txt",ios::ate);
									fout << b3[i].key;fout.close();
									fout.open("b33pt.txt",ios::ate);
									fout << b3[i].pt;fout.close();


									}
									if(i==4)
									{

									fout.open("b34name.txt",ios::ate);
									fout << b3[i].name;
									fout.close();
									fout.open("b34no.txt",ios::ate);
									fout << b3[i].no;fout.close();
									fout.open("b34key.txt",ios::ate);
									fout << b3[i].key;fout.close();
									fout.open("b34pt.txt",ios::ate);
									fout << b3[i].pt;fout.close();


									}
									if(i==5)
									{

									fout.open("b35name.txt",ios::ate);
									fout << b3[i].name;
									fout.close();
									fout.open("b35no.txt",ios::ate);
									fout << b3[i].no;fout.close();
									fout.open("b35key.txt",ios::ate);
									fout << b3[i].key;fout.close();
									fout.open("b35pt.txt",ios::ate);
									fout << b3[i].pt;fout.close();


									}
									if(i==6)
									{

									fout.open("b36name.txt",ios::ate);
									fout << b3[i].name;
									fout.close();
									fout.open("b36no.txt",ios::ate);
									fout << b3[i].no;fout.close();
									fout.open("b36key.txt",ios::ate);
									fout << b3[i].key;fout.close();
									fout.open("b36pt.txt",ios::ate);
									fout << b3[i].pt;fout.close();


									}
									if(i==7)
									{

									fout.open("b37name.txt",ios::ate);
									fout << b3[i].name;
									fout.close();
									fout.open("b37no.txt",ios::ate);
									fout << b3[i].no;fout.close();
									fout.open("b37key.txt",ios::ate);
									fout << b3[i].key;fout.close();
									fout.open("b37pt.txt",ios::ate);
									fout << b3[i].pt;fout.close();


									}
									if(i==8)
									{

									fout.open("b38name.txt",ios::ate);
									fout << b3[i].name;
									fout.close();
									fout.open("b38no.txt",ios::ate);
									fout << b3[i].no;fout.close();
									fout.open("b38key.txt",ios::ate);
									fout << b3[i].key;fout.close();
									fout.open("b38pt.txt",ios::ate);
									fout << b3[i].pt;fout.close();


									}
									if(i==9)
									{

									fout.open("b39name.txt",ios::ate);
									fout << b3[i].name;
									fout.close();
									fout.open("b39no.txt",ios::ate);
									fout << b3[i].no;fout.close();
									fout.open("b39key.txt",ios::ate);
									fout << b3[i].key;fout.close();
									fout.open("b39pt.txt",ios::ate);
									fout << b3[i].pt;fout.close();


									}
									if(i==0)
									{

									fout.open("b30name.txt",ios::ate);
									fout << b3[i].name;
									fout.close();
									fout.open("b30no.txt",ios::ate);
									fout << b3[i].no;fout.close();
									fout.open("b30key.txt",ios::ate);
									fout << b3[i].key;fout.close();
									fout.open("b30pt.txt",ios::ate);
									fout << b3[i].pt;fout.close();


									}

								}
								system("cls");

								fin.open("countb.txt");
                                 fin >> countb;fout.close();
								countb++;
								fout.open("countb.txt",ios::ate);
								fout<< countb;
								fout.close();

								cout << "\n\n\n\n\n\nVEHICLE PARKED! on "<<j<<" floor and " << i <<" position\n\n\n\n\n\n\n";
								cout << "KINDLY REMEMBER YOUR FLOOR NUMBER AND POSITION NUMBER,OTHERWISE YOU ARE NOT ABLE TO GET YOUR VEHICLE\n";


								cout << "ENTER ANY KEY TO CONTINUE";
								getch();
								return(true);
							}
							if(p==false)
							{
							vbig(find);

									return(false);



							}
}

bool vbig(bool find)
{
	response='y';
	p=false;
     					 j=0;
     					 fin.open("t11no.txt");
     						    fin >> t1[1].no;
     						    fin.close();
     						    fin.open("t12no.txt");
     						    fin >> t1[2].no;
     						    fin.close();
     						    fin.open("t13no.txt");
     						    fin >> t1[3].no;
     						    fin.close();
     						    fin.open("t14no.txt");
     						    fin >> t1[4].no;
     						    fin.close();
     						    fin.open("t15no.txt");
     						    fin >> t1[5].no;
     						    fin.close();
     						    fin.open("t16no.txt");
     						    fin >> t1[6].no;
     						    fin.close();
     						    fin.open("t17no.txt");
     						    fin >> t1[7].no;
     						    fin.close();
     						    fin.open("t18no.txt");
     						    fin >> t1[8].no;
     						    fin.close();
     						    fin.open("t19no.txt");
     						    fin >> t1[9].no;
     						    fin.close();
     						    fin.open("t10no.txt");
     						    fin >> t1[0].no;
     						    fin.close();


     						for(i=0;i<10;i++)
     						{
     							if(t1[i].no=="free")
     							{
     								j=1;
     								p=true;
     								find=!find;
     							    break;
								}
							}

							if(p!=true)
							{
							    fin.open("t21no.txt");
     						    fin >> t2[1].no;
     						    fin.close();
     						    fin.open("t22no.txt");
     						    fin >> t2[2].no;
     						    fin.close();
     						    fin.open("t23no.txt");
     						    fin >> t2[3].no;
     						    fin.close();
     						    fin.open("t24no.txt");
     						    fin >> t2[4].no;
     						    fin.close();
     						    fin.open("t25no.txt");
     						    fin >> t2[5].no;
     						    fin.close();
     						    fin.open("t26no.txt");
     						    fin >> t2[6].no;
     						    fin.close();
     						    fin.open("t27no.txt");
     						    fin >> t2[7].no;
     						    fin.close();
     						    fin.open("t28no.txt");
     						    fin >> t2[8].no;
     						    fin.close();
     						    fin.open("t29no.txt");
     						    fin >> t2[9].no;
     						    fin.close();
     						    fin.open("t20no.txt");
     						    fin >> t2[0].no;
     						    fin.close();

								for(i=0;i<10;i++)
     					     	{
     							  if(t2[i].no=="free")
     							  {
     							  	j=2;
     								p=true;
     								find=!find;
     							    break;
								  }
							   }

							}
						    if(p!=true)
							{
							    fin.open("t31no.txt");
     						    fin >> t3[1].no;
     						    fin.close();
     						    fin.open("t32no.txt");
     						    fin >> t3[2].no;
     						    fin.close();
     						    fin.open("t33no.txt");
     						    fin >> t3[3].no;
     						    fin.close();
     						    fin.open("t34no.txt");
     						    fin >> t3[4].no;
     						    fin.close();
     						    fin.open("t35no.txt");
     						    fin >> t3[5].no;
     						    fin.close();
     						    fin.open("t36no.txt");
     						    fin >> t3[6].no;
     						    fin.close();
     						    fin.open("t37no.txt");
     						    fin >> t3[7].no;
     						    fin.close();
     						    fin.open("t38no.txt");
     						    fin >> t3[8].no;
     						    fin.close();
     						    fin.open("t39no.txt");
     						    fin >> t3[9].no;
     						    fin.close();
     						    fin.open("t30no.txt");
     						    fin >> t3[0].no;
     						    fin.close();

								for(i=0;i<10;i++)
     					     	{
     							  if(t3[i].no=="free")
     							  {
     							  	j=3;
     								p=true;
     								find=!find;
     							    break;
								  }
							   }

							}
							if(find==true && p==true)
							{
								cout << "SORRY ! SPACE IN YOUR LOT IS NOT FREE BUT SPACE IN TRUCK LOT IS FREE BUT THE CHARGES WOULD BE RS 50 PER HR. DO YOU WANT TO CONTINUE. y/n";

								cin >> response;
								if(response!='y')
								{
									return(false);
									system("cls");
								}
							}
							if(p==true)
							{
								cout << "FREE PARKING LOT FOUND\n";

								cout << "ENTER DRIVER'S NAME\n";
								cin>>drivername;
								cout << "ENTER VEHICLE NUMBER\n";
							cin>>vn;
								cout << "MAKE YOUR SECURITY KEY \n";
								cin >> sk;
								cout << "ENTER PARKING TIME IN FORMAT(0013) MEANS 0 days 13 HR \n";
								cin >> parkingtime;
									while(1)
							   {
									bool py=false;
								if((( parkingtime[2]=='1' || parkingtime[2]=='0')&& (parkingtime[3]>='0' && parkingtime[3]<='9'))||(parkingtime[2]=='2' && parkingtime[3]>='0' && parkingtime[3]<='4'))
								{
								py=true;
								break;}
								if(py==false)
								cout << "ENTER VALID NUMBER\n";
								cin >> parkingtime;
								}
								if(j==1)
								{
									t1[i].name=drivername;
									t1[i].no=vn;
									t1[i].key=sk;
									t1[i].pt=parkingtime;
									if(i==1)
									{

									fout.open("t11name.txt",ios::ate);
									fout << t1[i].name;
									fout.close();
									fout.open("t11no.txt",ios::ate);
									fout << t1[i].no;fout.close();
									fout.open("t11key.txt",ios::ate);
									fout << t1[i].key;fout.close();
									fout.open("t11pt.txt",ios::ate);
									fout << t1[i].pt;fout.close();


									}
									if(i==2)
									{

									fout.open("t12name.txt",ios::ate);
									fout << t1[i].name;
									fout.close();
									fout.open("t12no.txt",ios::ate);
									fout << t1[i].no;fout.close();
									fout.open("t12key.txt",ios::ate);
									fout << t1[i].key;fout.close();
									fout.open("t12pt.txt",ios::ate);
									fout << t1[i].pt;fout.close();


									}
									if(i==3)
									{

									fout.open("t13name.txt",ios::ate);
									fout << t1[i].name;
									fout.close();
									fout.open("t13no.txt",ios::ate);
									fout << t1[i].no;fout.close();
									fout.open("t13key.txt",ios::ate);
									fout << t1[i].key;fout.close();
									fout.open("t13pt.txt",ios::ate);
									fout << t1[i].pt;fout.close();


									}
									if(i==4)
									{

									fout.open("t14name.txt",ios::ate);
									fout << t1[i].name;
									fout.close();
									fout.open("t14no.txt",ios::ate);
									fout << t1[i].no;fout.close();
									fout.open("t14key.txt",ios::ate);
									fout << t1[i].key;fout.close();
									fout.open("t14pt.txt",ios::ate);
									fout << t1[i].pt;fout.close();


									}
									if(i==5)
									{

									fout.open("t15name.txt",ios::ate);
									fout << t1[i].name;
									fout.close();
									fout.open("t15no.txt",ios::ate);
									fout << t1[i].no;fout.close();
									fout.open("t15key.txt",ios::ate);
									fout << t1[i].key;fout.close();
									fout.open("t15pt.txt",ios::ate);
									fout << t1[i].pt;fout.close();


									}
									if(i==6)
									{

									fout.open("t16name.txt",ios::ate);
									fout << t1[i].name;
									fout.close();
									fout.open("t16no.txt",ios::ate);
									fout << t1[i].no;fout.close();
									fout.open("t16key.txt",ios::ate);
									fout << t1[i].key;fout.close();
									fout.open("t16pt.txt",ios::ate);
									fout << t1[i].pt;fout.close();


									}
									if(i==7)
									{

									fout.open("t17name.txt",ios::ate);
									fout << t1[i].name;
									fout.close();
									fout.open("t17no.txt",ios::ate);
									fout << t1[i].no;fout.close();
									fout.open("t17key.txt",ios::ate);
									fout << t1[i].key;fout.close();
									fout.open("t17pt.txt",ios::ate);
									fout << t1[i].pt;fout.close();


									}
									if(i==8)
									{

									fout.open("t18name.txt",ios::ate);
									fout << t1[i].name;
									fout.close();
									fout.open("t18no.txt",ios::ate);
									fout << t1[i].no;fout.close();
									fout.open("t18key.txt",ios::ate);
									fout << t1[i].key;fout.close();
									fout.open("t18pt.txt",ios::ate);
									fout << t1[i].pt;fout.close();


									}
									if(i==9)
									{

									fout.open("t19name.txt",ios::ate);
									fout << t1[i].name;
									fout.close();
									fout.open("t19no.txt",ios::ate);
									fout << t1[i].no;fout.close();
									fout.open("t19key.txt",ios::ate);
									fout << t1[i].key;fout.close();
									fout.open("t19pt.txt",ios::ate);
									fout << t1[i].pt;fout.close();


									}
									if(i==0)
									{

									fout.open("t10name.txt",ios::ate);
									fout << t1[i].name;
									fout.close();
									fout.open("t10no.txt",ios::ate);
									fout << t1[i].no;fout.close();
									fout.open("t10key.txt",ios::ate);
									fout << t1[i].key;fout.close();
									fout.open("t10pt.txt",ios::ate);
									fout << t1[i].pt;fout.close();


									}




								}
								if(j==2)
								{
									t2[i].name=drivername;
									t2[i].no=vn;
									t2[i].key=sk;
									t2[i].pt=parkingtime;
									if(i==1)
									{

									fout.open("t21name.txt",ios::ate);
									fout << t2[i].name;
									fout.close();
									fout.open("t21no.txt",ios::ate);
									fout << t2[i].no;fout.close();
									fout.open("t21key.txt",ios::ate);
									fout << t2[i].key;fout.close();
									fout.open("t21pt.txt",ios::ate);
									fout << t2[i].pt;fout.close();


									}
									if(i==2)
									{

									fout.open("t22name.txt",ios::ate);
									fout << t2[i].name;
									fout.close();
									fout.open("t22no.txt",ios::ate);
									fout << t2[i].no;fout.close();
									fout.open("t22key.txt",ios::ate);
									fout << t2[i].key;fout.close();
									fout.open("t22pt.txt",ios::ate);
									fout << t2[i].pt;fout.close();


									}
									if(i==3)
									{

									fout.open("t23name.txt",ios::ate);
									fout << t2[i].name;
									fout.close();
									fout.open("t23no.txt",ios::ate);
									fout << t2[i].no;fout.close();
									fout.open("t23key.txt",ios::ate);
									fout << t2[i].key;fout.close();
									fout.open("t23pt.txt",ios::ate);
									fout << t2[i].pt;fout.close();


									}
									if(i==4)
									{

									fout.open("t24name.txt",ios::ate);
									fout << t2[i].name;
									fout.close();
									fout.open("t24no.txt",ios::ate);
									fout << t2[i].no;fout.close();
									fout.open("t24key.txt",ios::ate);
									fout << t2[i].key;fout.close();
									fout.open("t24pt.txt",ios::ate);
									fout << t2[i].pt;fout.close();


									}
									if(i==5)
									{

									fout.open("t25name.txt",ios::ate);
									fout << t2[i].name;
									fout.close();
									fout.open("t25no.txt",ios::ate);
									fout << t2[i].no;fout.close();
									fout.open("t25key.txt",ios::ate);
									fout << t2[i].key;fout.close();
									fout.open("t25pt.txt",ios::ate);
									fout << t2[i].pt;fout.close();


									}
									if(i==6)
									{

									fout.open("t26name.txt",ios::ate);
									fout << t2[i].name;
									fout.close();
									fout.open("t26no.txt",ios::ate);
									fout << t2[i].no;fout.close();
									fout.open("t26key.txt",ios::ate);
									fout << t2[i].key;fout.close();
									fout.open("t26pt.txt",ios::ate);
									fout << t2[i].pt;fout.close();


									}
									if(i==7)
									{

									fout.open("t27name.txt",ios::ate);
									fout << t2[i].name;
									fout.close();
									fout.open("t27no.txt",ios::ate);
									fout << t2[i].no;fout.close();
									fout.open("t27key.txt",ios::ate);
									fout << t2[i].key;fout.close();
									fout.open("t27pt.txt",ios::ate);
									fout << t2[i].pt;fout.close();


									}
									if(i==8)
									{

									fout.open("t28name.txt",ios::ate);
									fout << t2[i].name;
									fout.close();
									fout.open("t28no.txt",ios::ate);
									fout << t2[i].no;fout.close();
									fout.open("t28key.txt",ios::ate);
									fout << t2[i].key;fout.close();
									fout.open("t28pt.txt",ios::ate);
									fout << t2[i].pt;fout.close();


									}
									if(i==9)
									{

									fout.open("t29name.txt",ios::ate);
									fout << t2[i].name;
									fout.close();
									fout.open("t29no.txt",ios::ate);
									fout << t2[i].no;fout.close();
									fout.open("t29key.txt",ios::ate);
									fout << t2[i].key;fout.close();
									fout.open("t29pt.txt",ios::ate);
									fout << t2[i].pt;fout.close();


									}
									if(i==0)
									{

									fout.open("t20name.txt",ios::ate);
									fout << t2[i].name;
									fout.close();
									fout.open("t20no.txt",ios::ate);
									fout << t2[i].no;fout.close();
									fout.open("t20key.txt",ios::ate);
									fout << t2[i].key;fout.close();
									fout.open("t20pt.txt",ios::ate);
									fout << t2[i].pt;fout.close();


									}

								}
								if(j==3)
								{
									t3[i].name=drivername;
									t3[i].no=vn;
									t3[i].key=sk;
									t3[i].pt=parkingtime;

									if(i==1)
									{

									fout.open("t31name.txt",ios::ate);
									fout << t3[i].name;
									fout.close();
									fout.open("t31no.txt",ios::ate);
									fout << t3[i].no;fout.close();
									fout.open("t31key.txt",ios::ate);
									fout << t3[i].key;fout.close();
									fout.open("t31pt.txt",ios::ate);
									fout << t3[i].pt;fout.close();


									}
									if(i==2)
									{

									fout.open("t32name.txt",ios::ate);
									fout << t3[i].name;
									fout.close();
									fout.open("t32no.txt",ios::ate);
									fout << t3[i].no;fout.close();
									fout.open("t32key.txt",ios::ate);
									fout << t3[i].key;fout.close();
									fout.open("t32pt.txt",ios::ate);
									fout << t3[i].pt;fout.close();


									}
									if(i==3)
									{

									fout.open("t33name.txt",ios::ate);
									fout << t3[i].name;
									fout.close();
									fout.open("t33no.txt",ios::ate);
									fout << t3[i].no;fout.close();
									fout.open("t33key.txt",ios::ate);
									fout << t3[i].key;fout.close();
									fout.open("t33pt.txt",ios::ate);
									fout << t3[i].pt;fout.close();


									}
									if(i==4)
									{

									fout.open("t34name.txt",ios::ate);
									fout << t3[i].name;
									fout.close();
									fout.open("t34no.txt",ios::ate);
									fout << t3[i].no;fout.close();
									fout.open("t34key.txt",ios::ate);
									fout << t3[i].key;fout.close();
									fout.open("t34pt.txt",ios::ate);
									fout << t3[i].pt;fout.close();


									}
									if(i==5)
									{

									fout.open("t35name.txt",ios::ate);
									fout << t3[i].name;
									fout.close();
									fout.open("t35no.txt",ios::ate);
									fout << t3[i].no;fout.close();
									fout.open("t35key.txt",ios::ate);
									fout << t3[i].key;fout.close();
									fout.open("t35pt.txt",ios::ate);
									fout << t3[i].pt;fout.close();


									}
									if(i==6)
									{

									fout.open("t36name.txt",ios::ate);
									fout << t3[i].name;
									fout.close();
									fout.open("t36no.txt",ios::ate);
									fout << t3[i].no;fout.close();
									fout.open("t36key.txt",ios::ate);
									fout << t3[i].key;fout.close();
									fout.open("t36pt.txt",ios::ate);
									fout << t3[i].pt;fout.close();


									}
									if(i==7)
									{

									fout.open("t37name.txt",ios::ate);
									fout << t3[i].name;
									fout.close();
									fout.open("t37no.txt",ios::ate);
									fout << t3[i].no;fout.close();
									fout.open("t37key.txt",ios::ate);
									fout << t3[i].key;fout.close();
									fout.open("t37pt.txt",ios::ate);
									fout << t3[i].pt;fout.close();


									}
									if(i==8)
									{

									fout.open("t38name.txt",ios::ate);
									fout << t3[i].name;
									fout.close();
									fout.open("t38no.txt",ios::ate);
									fout << t3[i].no;fout.close();
									fout.open("t38key.txt",ios::ate);
									fout << t3[i].key;fout.close();
									fout.open("t38pt.txt",ios::ate);
									fout << t3[i].pt;fout.close();


									}
									if(i==9)
									{

									fout.open("t39name.txt",ios::ate);
									fout << t3[i].name;
									fout.close();
									fout.open("t39no.txt",ios::ate);
									fout << t3[i].no;fout.close();
									fout.open("t39key.txt",ios::ate);
									fout << t3[i].key;fout.close();
									fout.open("t39pt.txt",ios::ate);
									fout << t3[i].pt;fout.close();


									}
									if(i==0)
									{

									fout.open("t30name.txt",ios::ate);
									fout << t3[i].name;
									fout.close();
									fout.open("t30no.txt",ios::ate);
									fout << t3[i].no;fout.close();
									fout.open("t30key.txt",ios::ate);
									fout << t3[i].key;fout.close();
									fout.open("t30pt.txt",ios::ate);
									fout << t3[i].pt;fout.close();


									}

								}
								system("cls");

								fin.open("countt.txt");
                                 fin >> countt;fout.close();
								countt++;
								fout.open("countt.txt",ios::ate);
								fout<< countt;
								fout.close();

								cout << "\n\n\n\n\n\nVEHICLE PARKED! on "<<j<<" floor and " << i <<" position\n\n\n\n\n\n\n";
								cout << "KINDLY REMEMBER YOUR FLOOR NUMBER AND POSITION NUMBER,OTHERWISE YOU ARE NOT ABLE TO GET YOUR VEHICLE\n";

								cout << "ENTER ANY KEY TO CONTINUE";
								getch();
								return(true);
							}
							if(p==false)
							{


									return(false);



							}
}
int main()
{

    bool abc=false;
	int arrival;
	first();
	rr();
	while(1)
    {



	 system("cls");
		display();
		cin>>choice;
		system("cls");
     switch(choice)
     {
     	case 1:
     		{
     			cout << "Press (1 for scooter / 2 for car / 3 for bus / 4 for truck)\n";
     			cin >> arrival;
     			system("cls");
     			switch(arrival)
     			{

     				case 1:
     				     	{
     					     system("cls");

     						small();

     						break;
					     	}
					case 2:
							{
								system("cls");
								medium(true);
								break;
							}
					case 3:
					       {
					       	system("cls");
						big(true);
						break;
					         }
					case 4:
					       {
					       	system("cls");
					   	vbig(true);
					   	break;
						   }
						   default : cout<< "ENTER VALID NUMBER\n";
						             system("pause");
						             system("cls");
									 break;
				}

			    break;
			}

		case 2:
			{
				cout << "Press 1 for total count of vehicles\n";
					cout << "Press 2 for total count of scooters\n";
					cout << "Press 3 for total count of cars\n";
					cout << "Press 4 for total count of buses\n";
					cout << "Press 5 for total count of trucks\n";
					int q1;
					cin >> q1;



     			system("cls");
     			switch(q1)
     			{
     				case 1:
					       {
					           fin.open("counts.txt");
					           fin >> counts;
					           fin.close();
					           fin.open("countc.txt");
					           fin >> countc;
					           fin.close();
					           fin.open("countb.txt");
					           fin >> countb;
					           fin.close();
					           fin.open("countt.txt");
					           fin >> countt;
					           fin.close();


     					      cout << "Total count of vehicles are \n" << counts+countc+countb+countt;

     					      cout << "\n";


						break;
					        }
					        case 2: {

                                      fin.open("counts.txt");
					           fin >> counts;
                                fin.close();
     					      cout << "Total count of scooters are \n" << counts << "\n";

						break;
					        }
					        case 3: {
					            fin.open("countc.txt");
					           fin >> countc;
					           fin.close();
     					      cout << "Total count of cars are \n" << countc << "\n";

						break;
					        }
					        case 4: {
					            fin.open("countb.txt");
					           fin >> countb;

     					      cout << "Total count of buses are \n" << countb << "\n";
                                fin.close();
						break;
					        }
					        case 5: {
					            fin.open("countt.txt");
					           fin >> countt;
					           fin.close();
     					      cout << "Total count of trucks are \n" << countt << "\n";

						break;
					        }
					        default : cout<< "ENTER VALID NUMBER\n";

									 break;

				 }
				 system("pause");
				 break;

			}
        case 3:
            {

                                fin.open("s11no.txt");
     						    fin >> s1[1].no;
     						    fin.close();
     						    fin.open("s12no.txt");
     						    fin >> s1[2].no;
     						    fin.close();
     						    fin.open("s13no.txt");
     						    fin >> s1[3].no;
     						    fin.close();
     						    fin.open("s14no.txt");
     						    fin >> s1[4].no;
     						    fin.close();
     						    fin.open("s15no.txt");
     						    fin >> s1[5].no;
     						    fin.close();
     						    fin.open("s16no.txt");
     						    fin >> s1[6].no;
     						    fin.close();
     						    fin.open("s17no.txt");
     						    fin >> s1[7].no;
     						    fin.close();
     						    fin.open("s18no.txt");
     						    fin >> s1[8].no;
     						    fin.close();
     						    fin.open("s19no.txt");
     						    fin >> s1[9].no;
     						    fin.close();
     						    fin.open("s10no.txt");
     						    fin >> s1[0].no;
     						    fin.close();
     						     fin.open("s21no.txt");
     						    fin >> s2[1].no;
     						    fin.close();
     						    fin.open("s22no.txt");
     						    fin >> s2[2].no;
     						    fin.close();
     						    fin.open("s23no.txt");
     						    fin >> s2[3].no;
     						    fin.close();
     						    fin.open("s24no.txt");
     						    fin >> s2[4].no;
     						    fin.close();
     						    fin.open("s25no.txt");
     						    fin >> s2[5].no;
     						    fin.close();
     						    fin.open("s26no.txt");
     						    fin >> s2[6].no;
     						    fin.close();
     						    fin.open("s27no.txt");
     						    fin >> s2[7].no;
     						    fin.close();
     						    fin.open("s28no.txt");
     						    fin >> s2[8].no;
     						    fin.close();
     						    fin.open("s29no.txt");
     						    fin >> s2[9].no;
     						    fin.close();
     						    fin.open("s20no.txt");
     						    fin >> s2[0].no;
     						    fin.close();
     						    fin.open("s31no.txt");
     						    fin >> s3[1].no;
     						    fin.close();
     						    fin.open("s32no.txt");
     						    fin >> s3[2].no;
     						    fin.close();
     						    fin.open("s33no.txt");
     						    fin >> s3[3].no;
     						    fin.close();
     						    fin.open("s34no.txt");
     						    fin >> s3[4].no;
     						    fin.close();
     						    fin.open("s35no.txt");
     						    fin >> s3[5].no;
     						    fin.close();
     						    fin.open("s36no.txt");
     						    fin >> s3[6].no;
     						    fin.close();
     						    fin.open("s37no.txt");
     						    fin >> s3[7].no;
     						    fin.close();
     						    fin.open("s38no.txt");
     						    fin >> s3[8].no;
     						    fin.close();
     						    fin.open("s39no.txt");
     						    fin >> s3[9].no;
     						    fin.close();
     						    fin.open("s30no.txt");
     						    fin >> s3[0].no;
     						    fin.close();
     						    fin.open("c11no.txt");
     						    fin >> c1[1].no;
     						    fin.close();
     						    fin.open("c12no.txt");
     						    fin >> c1[2].no;
     						    fin.close();
     						    fin.open("c13no.txt");
     						    fin >> c1[3].no;
     						    fin.close();
     						    fin.open("c14no.txt");
     						    fin >> c1[4].no;
     						    fin.close();
     						    fin.open("c15no.txt");
     						    fin >> c1[5].no;
     						    fin.close();
     						    fin.open("c16no.txt");
     						    fin >> c1[6].no;
     						    fin.close();
     						    fin.open("c17no.txt");
     						    fin >> c1[7].no;
     						    fin.close();
     						    fin.open("c18no.txt");
     						    fin >> c1[8].no;
     						    fin.close();
     						    fin.open("c19no.txt");
     						    fin >> c1[9].no;
     						    fin.close();
     						    fin.open("c10no.txt");
     						    fin >> c1[0].no;
     						    fin.close();
     						    fin.open("c21no.txt");
     						    fin >> c2[1].no;
     						    fin.close();
     						    fin.open("c22no.txt");
     						    fin >> c2[2].no;
     						    fin.close();
     						    fin.open("c23no.txt");
     						    fin >> c2[3].no;
     						    fin.close();
     						    fin.open("c24no.txt");
     						    fin >> c2[4].no;
     						    fin.close();
     						    fin.open("c25no.txt");
     						    fin >> c2[5].no;
     						    fin.close();
     						    fin.open("c26no.txt");
     						    fin >> c2[6].no;
     						    fin.close();
     						    fin.open("c27no.txt");
     						    fin >> c2[7].no;
     						    fin.close();
     						    fin.open("c28no.txt");
     						    fin >> c2[8].no;
     						    fin.close();
     						    fin.open("c29no.txt");
     						    fin >> c2[9].no;
     						    fin.close();
     						    fin.open("c20no.txt");
     						    fin >> c2[0].no;
     						    fin.close();
                                fin.open("c31no.txt");
     						    fin >> c3[1].no;
     						    fin.close();
     						    fin.open("c32no.txt");
     						    fin >> c3[2].no;
     						    fin.close();
     						    fin.open("c33no.txt");
     						    fin >> c3[3].no;
     						    fin.close();
     						    fin.open("c34no.txt");
     						    fin >> c3[4].no;
     						    fin.close();
     						    fin.open("c35no.txt");
     						    fin >> c3[5].no;
     						    fin.close();
     						    fin.open("c36no.txt");
     						    fin >> c3[6].no;
     						    fin.close();
     						    fin.open("c37no.txt");
     						    fin >> c3[7].no;
     						    fin.close();
     						    fin.open("c38no.txt");
     						    fin >> c3[8].no;
     						    fin.close();
     						    fin.open("c39no.txt");
     						    fin >> c3[9].no;
     						    fin.close();
     						    fin.open("c30no.txt");
     						    fin >> c3[0].no;
     						    fin.close();
                                fin.open("b11no.txt");
     						    fin >> b1[1].no;
     						    fin.close();
     						    fin.open("b12no.txt");
     						    fin >> b1[2].no;
     						    fin.close();
     						    fin.open("b13no.txt");
     						    fin >> b1[3].no;
     						    fin.close();
     						    fin.open("b14no.txt");
     						    fin >> b1[4].no;
     						    fin.close();
     						    fin.open("b15no.txt");
     						    fin >> b1[5].no;
     						    fin.close();
     						    fin.open("b16no.txt");
     						    fin >> b1[6].no;
     						    fin.close();
     						    fin.open("b17no.txt");
     						    fin >> b1[7].no;
     						    fin.close();
     						    fin.open("b18no.txt");
     						    fin >> b1[8].no;
     						    fin.close();
     						    fin.open("b19no.txt");
     						    fin >> b1[9].no;
     						    fin.close();
     						    fin.open("b10no.txt");
     						    fin >> b1[0].no;
     						    fin.close();
                                fin.open("b21no.txt");
     						    fin >> b2[1].no;
     						    fin.close();
     						    fin.open("b22no.txt");
     						    fin >> b2[2].no;
     						    fin.close();
     						    fin.open("b23no.txt");
     						    fin >> b2[3].no;
     						    fin.close();
     						    fin.open("b24no.txt");
     						    fin >> b2[4].no;
     						    fin.close();
     						    fin.open("b25no.txt");
     						    fin >> b2[5].no;
     						    fin.close();
     						    fin.open("b26no.txt");
     						    fin >> b2[6].no;
     						    fin.close();
     						    fin.open("b27no.txt");
     						    fin >> b2[7].no;
     						    fin.close();
     						    fin.open("b28no.txt");
     						    fin >> b2[8].no;
     						    fin.close();
     						    fin.open("b29no.txt");
     						    fin >> b2[9].no;
     						    fin.close();
     						    fin.open("b20no.txt");
     						    fin >> b2[0].no;
     						    fin.close();
                                fin.open("b31no.txt");
     						    fin >> b3[1].no;
     						    fin.close();
     						    fin.open("b32no.txt");
     						    fin >> b3[2].no;
     						    fin.close();
     						    fin.open("b33no.txt");
     						    fin >> b3[3].no;
     						    fin.close();
     						    fin.open("b34no.txt");
     						    fin >> b3[4].no;
     						    fin.close();
     						    fin.open("b35no.txt");
     						    fin >> b3[5].no;
     						    fin.close();
     						    fin.open("b36no.txt");
     						    fin >> b3[6].no;
     						    fin.close();
     						    fin.open("b37no.txt");
     						    fin >> b3[7].no;
     						    fin.close();
     						    fin.open("b38no.txt");
     						    fin >> b3[8].no;
     						    fin.close();
     						    fin.open("b39no.txt");
     						    fin >> b3[9].no;
     						    fin.close();
     						    fin.open("b30no.txt");
     						    fin >> b3[0].no;
     						    fin.close();
                                fin.open("t11no.txt");
     						    fin >> t1[1].no;
     						    fin.close();
     						    fin.open("t12no.txt");
     						    fin >> t1[2].no;
     						    fin.close();
     						    fin.open("t13no.txt");
     						    fin >> t1[3].no;
     						    fin.close();
     						    fin.open("t14no.txt");
     						    fin >> t1[4].no;
     						    fin.close();
     						    fin.open("t15no.txt");
     						    fin >> t1[5].no;
     						    fin.close();
     						    fin.open("t16no.txt");
     						    fin >> t1[6].no;
     						    fin.close();
     						    fin.open("t17no.txt");
     						    fin >> t1[7].no;
     						    fin.close();
     						    fin.open("t18no.txt");
     						    fin >> t1[8].no;
     						    fin.close();
     						    fin.open("t19no.txt");
     						    fin >> t1[9].no;
     						    fin.close();
     						    fin.open("t10no.txt");
     						    fin >> t1[0].no;
     						    fin.close();
                                fin.open("t21no.txt");
     						    fin >> t2[1].no;
     						    fin.close();
     						    fin.open("t22no.txt");
     						    fin >> t2[2].no;
     						    fin.close();
     						    fin.open("t23no.txt");
     						    fin >> t2[3].no;
     						    fin.close();
     						    fin.open("t24no.txt");
     						    fin >> t2[4].no;
     						    fin.close();
     						    fin.open("t25no.txt");
     						    fin >> t2[5].no;
     						    fin.close();
     						    fin.open("t26no.txt");
     						    fin >> t2[6].no;
     						    fin.close();
     						    fin.open("t27no.txt");
     						    fin >> t2[7].no;
     						    fin.close();
     						    fin.open("t28no.txt");
     						    fin >> t2[8].no;
     						    fin.close();
     						    fin.open("t29no.txt");
     						    fin >> t2[9].no;
     						    fin.close();
     						    fin.open("t20no.txt");
     						    fin >> t2[0].no;
     						    fin.close();
                                fin.open("t31no.txt");
     						    fin >> t3[1].no;
     						    fin.close();
     						    fin.open("t32no.txt");
     						    fin >> t3[2].no;
     						    fin.close();
     						    fin.open("t33no.txt");
     						    fin >> t3[3].no;
     						    fin.close();
     						    fin.open("t34no.txt");
     						    fin >> t3[4].no;
     						    fin.close();
     						    fin.open("t35no.txt");
     						    fin >> t3[5].no;
     						    fin.close();
     						    fin.open("t36no.txt");
     						    fin >> t3[6].no;
     						    fin.close();
     						    fin.open("t37no.txt");
     						    fin >> t3[7].no;
     						    fin.close();
     						    fin.open("t38no.txt");
     						    fin >> t3[8].no;
     						    fin.close();
     						    fin.open("t39no.txt");
     						    fin >> t3[9].no;
     						    fin.close();
     						    fin.open("t30no.txt");
     						    fin >> t3[0].no;
     						    fin.close();

                    cout << "LEVEL 1\n\n";
               cout << "SCOOTER\n\n";
               for(i=0;i<10;i++)
     					     	{
     							  cout << s1[i].no << " ";
							   }
							   cout << "\n\n";
							   cout << "CAR\n\n";
               for(i=0;i<10;i++)
     					     	{
     							  cout << c1[i].no << " ";
							   }
							   cout << "\n\n";
							   cout << "BUS\n\n";
               for(i=0;i<10;i++)
     					     	{
     							  cout << b1[i].no << " ";
							   }
							   cout << "\n\n";
							   cout << "TRUCK\n\n";
               for(i=0;i<10;i++)
     					     	{
     							  cout << t1[i].no << " ";
							   }
							   cout << "\n\n";

							   cout << "LEVEL 2\n\n";
               cout << "SCOOTER\n\n";
               for(i=0;i<10;i++)
     					     	{
     							  cout << s2[i].no << " ";
							   }
							   cout << "\n\n";
							   cout << "CAR\n\n";
               for(i=0;i<10;i++)
     					     	{
     							  cout << c2[i].no << " ";
							   }
							   cout << "\n\n";
							   cout << "BUS\n\n";
               for(i=0;i<10;i++)
     					     	{
     							  cout << b2[i].no << " ";
							   }
							   cout << "\n\n";
							   cout << "TRUCK\n\n";
               for(i=0;i<10;i++)
     					     	{
     							  cout << t2[i].no << " ";
							   }
							   cout << "\n\n";

							   cout << "LEVEL 3\n\n";
               cout << "SCOOTER\n\n";
               for(i=0;i<10;i++)
     					     	{
     							  cout << s3[i].no << " ";
							   }
							   cout << "\n\n";
							   cout << "CAR\n\n";
               for(i=0;i<10;i++)
     					     	{
     							  cout << c3[i].no << " ";
							   }
							   cout << "\n\n";
							   cout << "BUS\n\n";
               for(i=0;i<10;i++)
     					     	{
     							  cout << b3[i].no << " ";
							   }
							   cout << "\n\n";
							   cout << "TRUCK\n\n";
               for(i=0;i<10;i++)
     					     	{
     							  cout << t3[i].no << " ";
							   }
							   cout << "\n\n";

							   system("pause");
							   break;



            }
        case 4:
            {
                cout << "PARKING PRICE OF SCOOTER IS 10 RS PER HR\n";
                cout << "PARKING PRICE OF CAR IS 20 RS PER HR\n";
                cout << "PARKING PRICE OF BUS IS 40 RS PER HR\n";
                cout << "PARKING PRICE OF TRUCK IS 50 RS PER HR\n";
                system("pause");
                break;


            }
        case 5:
            {

								fin.open("amountcoll.txt");
								fin>> amountcoll;
								fin.close();
								cout << "TOTAL AMOUNT COLLECTED TILL TODAY - " <<  amountcoll << "\n";
								system("pause");
								break;

            }
        case 6:
            {
                cout << "Press (1 for scooter / 2 for car / 3 for bus / 4 for truck)\n";
     			cin >> arrival;
     			system("cls");
     			switch(arrival)
     			{
                case 1:
                    {
                        string na,vno,skey,timeofdep;
                        cout << "ENTER YOUR FLOOR NUMBER\n";
                        cin >> j;
                        cout << "ENTER YOUR POSITION NUMBER\n";
                        cin >> i;
                        cout << "ENTER YOUR NAME\n";
                        cin >> na;
                        cout << "ENTER YOUR VEHICLE NUMBER\n";
                        cin >> vno;
                        cout << "ENTER YOUR SECURITY KEY\n";
                        cin >> skey;
                        cout << "ENTER TIME OF DEPARTURE\n";
                        cin >> timeofdep;

                        if(j==1)
								{

									if(i==1)
									{

									fin.open("s11name.txt");
									fin >> s1[i].name;
									fin.close();
									fin.open("s11no.txt");
									fin >> s1[i].no;
									fin.close();
									fin.open("s11key.txt");
									fin >> s1[i].key;
									fin.close();
									fin.open("s11pt.txt");
									fin >> s1[i].pt;
									fin.close();
									if(na==s1[i].name && vno==s1[i].no && skey== s1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s1[i].pt[0]-'0')+(s1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s1[i].pt[2]-'0')+(s1[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s11name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s11no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s11key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s11pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==2)
									{

									fin.open("s12name.txt");
									fin >> s1[i].name;
									fin.close();
									fin.open("s12no.txt");
									fin >> s1[i].no;
									fin.close();
									fin.open("s12key.txt");
									fin >> s1[i].key;
									fin.close();
									fin.open("s12pt.txt");
									fin>> s1[i].pt;
									fin.close();
									if(na==s1[i].name && vno==s1[i].no && skey== s1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s1[i].pt[0]-'0')+(s1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s1[i].pt[2]-'0')+(s1[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s12name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s12no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s12key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s12pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }

									}
									if(i==3)
									{

									fin.open("s13name.txt");
									fin >> s1[i].name;
									fin.close();
									fin.open("s13no.txt");
									fin >> s1[i].no;
									fin.close();
									fin.open("s13key.txt");
									fin >> s1[i].key;
									fin.close();
									fin.open("s13pt.txt");
									fin >> s1[i].pt;
									fin.close();
									if(na==s1[i].name && vno==s1[i].no && skey== s1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s1[i].pt[0]-'0')+(s1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s1[i].pt[2]-'0')+(s1[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s13name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s13no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s13key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s13pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==4)
									{

									fin.open("s14name.txt");
									fin >> s1[i].name;
									fin.close();
									fin.open("s14no.txt");
									fin >> s1[i].no;
									fin.close();
									fin.open("s14key.txt");
									fin >> s1[i].key;
									fin.close();
									fin.open("s14pt.txt");
									fin >> s1[i].pt;
									fin.close();
									if(na==s1[i].name && vno==s1[i].no && skey== s1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s1[i].pt[0]-'0')+(s1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s1[i].pt[2]-'0')+(s1[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s14name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s14no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s14key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s14pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }

									}
									if(i==5)
									{

									fin.open("s15name.txt");
									fin >> s1[i].name;
									fin.close();
									fin.open("s15no.txt");
									fin >> s1[i].no;
									fin.close();
									fin.open("s15key.txt");
									fin >> s1[i].key;
									fin.close();
									fin.open("s15pt.txt");
									fin >> s1[i].pt;
									fin.close();
									if(na==s1[i].name && vno==s1[i].no && skey== s1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s1[i].pt[0]-'0')+(s1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s1[i].pt[2]-'0')+(s1[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s15name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s15no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s15key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s15pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==6)
									{

									fin.open("s16name.txt");
									fin >> s1[i].name;
									fin.close();
									fin.open("s16no.txt");
									fin >> s1[i].no;
									fin.close();
									fin.open("s16key.txt");
									fin >> s1[i].key;
									fin.close();
									fin.open("s16pt.txt");
									fin >> s1[i].pt;
									fin.close();
									if(na==s1[i].name && vno==s1[i].no && skey== s1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s1[i].pt[0]-'0')+(s1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s1[i].pt[2]-'0')+(s1[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s16name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s16no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s16key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s16pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==7)
									{

									fin.open("s17name.txt");
									fin >> s1[i].name;
									fin.close();
									fin.open("s17no.txt");
									fin >> s1[i].no;
									fin.close();
									fin.open("s17key.txt");
									fin >> s1[i].key;
									fin.close();
									fin.open("s17pt.txt");
									fin >> s1[i].pt;
									fin.close();
									if(na==s1[i].name && vno==s1[i].no && skey== s1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s1[i].pt[0]-'0')+(s1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s1[i].pt[2]-'0')+(s1[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s17name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s17no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s17key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s17pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
									}
									if(i==8)
									{

									fin.open("s18name.txt");
									fin >> s1[i].name;
									fin.close();
									fin.open("s18no.txt");
									fin >> s1[i].no;
									fin.close();
									fin.open("s18key.txt");
									fin >> s1[i].key;
									fin.close();
									fin.open("s18pt.txt");
									fin >> s1[i].pt;
									fin.close();
									if(na==s1[i].name && vno==s1[i].no && skey== s1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s1[i].pt[0]-'0')+(s1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s1[i].pt[2]-'0')+(s1[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s18name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s18no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s18key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s18pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }

									}
									if(i==9)
									{

									fin.open("s19name.txt");
									fin >> s1[i].name;
									fin.close();
									fin.open("s19no.txt");
									fin >> s1[i].no;
									fin.close();
									fin.open("s19key.txt");
									fin >> s1[i].key;
									fin.close();
									fin.open("s19pt.txt");
									fin >> s1[i].pt;
									fin.close();
									if(na==s1[i].name && vno==s1[i].no && skey== s1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s1[i].pt[0]-'0')+(s1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s1[i].pt[2]-'0')+(s1[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s19name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s19no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s19key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s19pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==0)
									{

									fin.open("s10name.txt");
									fin >> s1[i].name;
									fin.close();
									fin.open("s10no.txt");
									fin >> s1[i].no;
									fin.close();
									fin.open("s10key.txt");
									fin >> s1[i].key;
									fin.close();
									fin.open("s10pt.txt");
									fin >> s1[i].pt;
									fin.close();
									if(na==s1[i].name && vno==s1[i].no && skey== s1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s1[i].pt[0]-'0')+(s1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s1[i].pt[2]-'0')+(s1[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s10name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s10no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s10key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s10pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}




								}
                        if(j==2)
								{

									if(i==1)
									{

									fin.open("s21name.txt");
									fin >> s2[i].name;
									fin.close();
									fin.open("s21no.txt");
									fin >> s2[i].no;
									fin.close();
									fin.open("s21key.txt");
									fin >> s2[i].key;
									fin.close();
									fin.open("s21pt.txt");
									fin >> s2[i].pt;
									fin.close();
									if(na==s2[i].name && vno==s2[i].no && skey== s2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s2[i].pt[0]-'0')+(s2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s2[i].pt[2]-'0')+(s2[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s21name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s21no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s21key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s21pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==2)
									{

									fin.open("s22name.txt");
									fin >> s2[i].name;
									fin.close();
									fin.open("s22no.txt");
									fin >> s2[i].no;
									fin.close();
									fin.open("s22key.txt");
									fin >> s2[i].key;
									fin.close();
									fin.open("s22pt.txt");
									fin >> s2[i].pt;
									fin.close();
									if(na==s2[i].name && vno==s2[i].no && skey== s2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s2[i].pt[0]-'0')+(s2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s2[i].pt[2]-'0')+(s2[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s22name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s22no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s22key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s22pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==3)
									{

									fin.open("s23name.txt");
									fin >> s2[i].name;
									fin.close();
									fin.open("s23no.txt");
									fin >> s2[i].no;
									fin.close();
									fin.open("s23key.txt");
									fin >> s2[i].key;
									fin.close();
									fin.open("s23pt.txt");
									fin >> s2[i].pt;
									fin.close();
									if(na==s2[i].name && vno==s2[i].no && skey== s2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s2[i].pt[0]-'0')+(s2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s2[i].pt[2]-'0')+(s2[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s23name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s23no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s23key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s23pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==4)
									{

									fin.open("s24name.txt");
									fin >> s2[i].name;
									fin.close();
									fin.open("s24no.txt");
									fin >> s2[i].no;
									fin.close();
									fin.open("s24key.txt");
									fin >> s2[i].key;
									fin.close();
									fin.open("s24pt.txt");
									fin >> s2[i].pt;
									fin.close();
									if(na==s2[i].name && vno==s2[i].no && skey== s2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s2[i].pt[0]-'0')+(s2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s2[i].pt[2]-'0')+(s2[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s24name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s24no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s24key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s24pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==5)
									{

									fin.open("s25name.txt");
									fin >> s2[i].name;
									fin.close();
									fin.open("s25no.txt");
									fin >> s2[i].no;
									fin.close();
									fin.open("s25key.txt");
									fin >> s2[i].key;
									fin.close();
									fin.open("s25pt.txt");
									fin >> s2[i].pt;
									fin.close();
									if(na==s2[i].name && vno==s2[i].no && skey== s2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s2[i].pt[0]-'0')+(s2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s2[i].pt[2]-'0')+(s2[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s25name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s25no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s25key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s25pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==6)
									{

									fin.open("s26name.txt");
									fin >> s2[i].name;
									fin.close();
									fin.open("s26no.txt");
									fin >> s2[i].no;
									fin.close();
									fin.open("s26key.txt");
									fin >> s2[i].key;
									fin.close();
									fin.open("s26pt.txt");
									fin >> s2[i].pt;
									fin.close();
									if(na==s2[i].name && vno==s2[i].no && skey== s2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s2[i].pt[0]-'0')+(s2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s2[i].pt[2]-'0')+(s2[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s26name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s26no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s26key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s26pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==7)
									{

									fin.open("s27name.txt");
									fin >> s2[i].name;
									fin.close();
									fin.open("s27no.txt");
									fin >> s2[i].no;
									fin.close();
									fin.open("s27key.txt");
									fin >> s2[i].key;
									fin.close();
									fin.open("s27pt.txt");
									fin >> s2[i].pt;
									fin.close();
									if(na==s2[i].name && vno==s2[i].no && skey== s2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s2[i].pt[0]-'0')+(s2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s2[i].pt[2]-'0')+(s2[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s27name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s27no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s27key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s27pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }

									}
									if(i==8)
									{

									fin.open("s28name.txt");
									fin >> s2[i].name;
									fin.close();
									fin.open("s28no.txt");
									fin >> s2[i].no;
									fin.close();
									fin.open("s28key.txt");
									fin >> s2[i].key;
									fin.close();
									fin.open("s28pt.txt");
									fin >> s2[i].pt;
									fin.close();
									if(na==s2[i].name && vno==s2[i].no && skey== s2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s2[i].pt[0]-'0')+(s2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s2[i].pt[2]-'0')+(s2[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s28name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s28no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s28key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s28pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==9)
									{

									fin.open("s29name.txt");
									fin >> s2[i].name;
									fin.close();
									fin.open("s29no.txt");
									fin >> s2[i].no;
									fin.close();
									fin.open("s29key.txt");
									fin >> s2[i].key;
									fin.close();
									fin.open("s29pt.txt");
									fin >> s2[i].pt;
									fin.close();
									if(na==s2[i].name && vno==s2[i].no && skey== s2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s2[i].pt[0]-'0')+(s2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s2[i].pt[2]-'0')+(s2[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s29name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s29no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s29key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s29pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==0)
									{

									fin.open("s20name.txt");
									fin >> s2[i].name;
									fin.close();
									fin.open("s20no.txt");
									fin >> s2[i].no;
									fin.close();
									fin.open("s20key.txt");
									fin >> s2[i].key;
									fin.close();
									fin.open("s20pt.txt");
									fin >> s2[i].pt;
									fin.close();
									if(na==s2[i].name && vno==s2[i].no && skey== s2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s2[i].pt[0]-'0')+(s2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s2[i].pt[2]-'0')+(s2[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s20name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s20no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s20key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s20pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}




								}

                        if(j==3)
                                {
                                    if(i==0)
									{

									fin.open("s30name.txt");
									fin >> s3[i].name;
									fin.close();
									fin.open("s30no.txt");
									fin >> s3[i].no;
									fin.close();
									fin.open("s30key.txt");
									fin >> s3[i].key;
									fin.close();
									fin.open("s30pt.txt");
									fin >> s3[i].pt;
									fin.close();
									if(na==s3[i].name && vno==s3[i].no && skey== s3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s3[i].pt[0]-'0')+(s3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s3[i].pt[2]-'0')+(s3[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s30name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s30no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s30key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s30pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
									}

                                    if(i==1)
									{

									fin.open("s31name.txt");
									fin >> s3[i].name;
									fin.close();
									fin.open("s31no.txt");
									fin >> s3[i].no;
									fin.close();
									fin.open("s31key.txt");
									fin >> s3[i].key;
									fin.close();
									fin.open("s31pt.txt");
									fin >> s3[i].pt;
									fin.close();
									if(na==s3[i].name && vno==s3[i].no && skey== s3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s3[i].pt[0]-'0')+(s3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s3[i].pt[2]-'0')+(s3[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s31name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s31no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s31key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s31pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
									}

									if(i==2)
									{

									fin.open("s32name.txt");
									fin >> s3[i].name;
									fin.close();
									fin.open("s32no.txt");
									fin >> s3[i].no;
									fin.close();
									fin.open("s32key.txt");
									fin >> s3[i].key;
									fin.close();
									fin.open("s32pt.txt");
									fin >> s3[i].pt;
									fin.close();
									if(na==s3[i].name && vno==s3[i].no && skey== s3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s3[i].pt[0]-'0')+(s3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s3[i].pt[2]-'0')+(s3[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s32name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s32no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s32key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s32pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}

									if(i==3)
									{

									fin.open("s33name.txt");
									fin >> s3[i].name;
									fin.close();
									fin.open("s33no.txt");
									fin >> s3[i].no;
									fin.close();
									fin.open("s33key.txt");
									fin >> s3[i].key;
									fin.close();
									fin.open("s33pt.txt");
									fin >> s3[i].pt;
									fin.close();
									if(na==s3[i].name && vno==s3[i].no && skey== s3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s3[i].pt[0]-'0')+(s3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s3[i].pt[2]-'0')+(s3[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s33name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s33no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s33key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s33pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
									}

                                  if(i==4)
									{

									fin.open("s34name.txt");
									fin >> s3[i].name;
									fin.close();
									fin.open("s34no.txt");
									fin >> s3[i].no;
									fin.close();
									fin.open("s34key.txt");
									fin >> s3[i].key;
									fin.close();
									fin.open("s34pt.txt");
									fin >> s3[i].pt;
									fin.close();
									if(na==s3[i].name && vno==s3[i].no && skey== s3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s3[i].pt[0]-'0')+(s3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s3[i].pt[2]-'0')+(s3[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s34name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s34no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s34key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s34pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }
                                if(i==5)
									{

									fin.open("s35name.txt");
									fin >> s3[i].name;
									fin.close();
									fin.open("s35no.txt");
									fin >> s3[i].no;
									fin.close();
									fin.open("s35key.txt");
									fin >> s3[i].key;
									fin.close();
									fin.open("s35pt.txt");
									fin >> s3[i].pt;
									fin.close();
									if(na==s3[i].name && vno==s3[i].no && skey== s3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s3[i].pt[0]-'0')+(s3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s3[i].pt[2]-'0')+(s3[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s35name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s35no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s35key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s35pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }

                                    if(i==6)
									{

									fin.open("s36name.txt");
									fin >> s3[i].name;
									fin.close();
									fin.open("s36no.txt");
									fin >> s3[i].no;
									fin.close();
									fin.open("s36key.txt");
									fin >> s3[i].key;
									fin.close();
									fin.open("s36pt.txt");
									fin >> s3[i].pt;
									fin.close();
									if(na==s3[i].name && vno==s3[i].no && skey== s3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s3[i].pt[0]-'0')+(s3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s3[i].pt[2]-'0')+(s3[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s36name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s36no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s36key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s36pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }
                                   if(i==7)
									{

									fin.open("s37name.txt");
									fin >> s3[i].name;
									fin.close();
									fin.open("s37no.txt");
									fin >> s3[i].no;
									fin.close();
									fin.open("s37key.txt");
									fin >> s3[i].key;
									fin.close();
									fin.open("s37pt.txt");
									fin >> s3[i].pt;
									fin.close();
									if(na==s3[i].name && vno==s3[i].no && skey== s3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s3[i].pt[0]-'0')+(s3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s3[i].pt[2]-'0')+(s3[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s37name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s37no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s37key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s37pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }
                                   if(i==8)
									{

									fin.open("s38name.txt");
									fin >> s3[i].name;
									fin.close();
									fin.open("s38no.txt");
									fin >> s3[i].no;
									fin.close();
									fin.open("s38key.txt");
									fin >> s3[i].key;
									fin.close();
									fin.open("s38pt.txt");
									fin >> s3[i].pt;
									fin.close();
									if(na==s3[i].name && vno==s3[i].no && skey== s3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s3[i].pt[0]-'0')+(s3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s3[i].pt[2]-'0')+(s3[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s38name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s38no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s38key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s38pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }
                                if(i==9)
									{

									fin.open("s39name.txt");
									fin >> s3[i].name;
									fin.close();
									fin.open("s39no.txt");
									fin >> s3[i].no;
									fin.close();
									fin.open("s39key.txt");
									fin >> s3[i].key;
									fin.close();
									fin.open("s39pt.txt");
									fin >> s3[i].pt;
									fin.close();
									if(na==s3[i].name && vno==s3[i].no && skey== s3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(s3[i].pt[0]-'0')+(s3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(s3[i].pt[2]-'0')+(s3[i].pt[3]-'0')));
                                        cout << 10*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+10*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("s39name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s39no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("s39key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("s39pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }

                                }


								system("cls");
								break;



                    }
                case 2:
                    {
                        string na,vno,skey,timeofdep;
                        cout << "ENTER YOUR FLOOR NUMBER\n";
                        cin >> j;
                        cout << "ENTER YOUR POSITION NUMBER\n";
                        cin >> i;
                        cout << "ENTER YOUR NAME\n";
                        cin >> na;
                        cout << "ENTER YOUR VEHICLE NUMBER\n";
                        cin >> vno;
                        cout << "ENTER YOUR SECURITY KEY\n";
                        cin >> skey;
                        cout << "ENTER TIME OF DEPARTURE\n";
                        cin >> timeofdep;

                        if(j==1)
								{

									if(i==1)
									{

									fin.open("c11name.txt");
									fin >> c1[i].name;
									fin.close();
									fin.open("c11no.txt");
									fin >> c1[i].no;
									fin.close();
									fin.open("c11key.txt");
									fin >> c1[i].key;
									fin.close();
									fin.open("c11pt.txt");
									fin >> c1[i].pt;
									fin.close();
									if(na==c1[i].name && vno==c1[i].no && skey== c1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c1[i].pt[0]-'0')+(c1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c1[i].pt[2]-'0')+(c1[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c11name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c11no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c11key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c11pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==2)
									{

									fin.open("c12name.txt");
									fin >> c1[i].name;
									fin.close();
									fin.open("c12no.txt");
									fin >> c1[i].no;
									fin.close();
									fin.open("c12key.txt");
									fin >> c1[i].key;
									fin.close();
									fin.open("c12pt.txt");
									fin>> c1[i].pt;
									fin.close();
									if(na==c1[i].name && vno==c1[i].no && skey== c1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c1[i].pt[0]-'0')+(c1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c1[i].pt[2]-'0')+(c1[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c12name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c12no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c12key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c12pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }

									}
									if(i==3)
									{

									fin.open("c13name.txt");
									fin >> c1[i].name;
									fin.close();
									fin.open("c13no.txt");
									fin >> c1[i].no;
									fin.close();
									fin.open("c13key.txt");
									fin >> c1[i].key;
									fin.close();
									fin.open("c13pt.txt");
									fin >> c1[i].pt;
									fin.close();
									if(na==c1[i].name && vno==c1[i].no && skey== c1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c1[i].pt[0]-'0')+(c1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c1[i].pt[2]-'0')+(c1[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c13name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c13no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c13key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c13pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==4)
									{

									fin.open("c14name.txt");
									fin >> c1[i].name;
									fin.close();
									fin.open("c14no.txt");
									fin >> c1[i].no;
									fin.close();
									fin.open("c14key.txt");
									fin >> c1[i].key;
									fin.close();
									fin.open("c14pt.txt");
									fin >> c1[i].pt;
									fin.close();
									if(na==c1[i].name && vno==c1[i].no && skey== c1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c1[i].pt[0]-'0')+(c1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c1[i].pt[2]-'0')+(c1[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c14name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c14no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c14key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c14pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }

									}
									if(i==5)
									{

									fin.open("c15name.txt");
									fin >> c1[i].name;
									fin.close();
									fin.open("c15no.txt");
									fin >> c1[i].no;
									fin.close();
									fin.open("c15key.txt");
									fin >> c1[i].key;
									fin.close();
									fin.open("c15pt.txt");
									fin >> c1[i].pt;
									fin.close();
									if(na==c1[i].name && vno==c1[i].no && skey== c1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c1[i].pt[0]-'0')+(c1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c1[i].pt[2]-'0')+(c1[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c15name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c15no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c15key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c15pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==6)
									{

									fin.open("c16name.txt");
									fin >> c1[i].name;
									fin.close();
									fin.open("c16no.txt");
									fin >> c1[i].no;
									fin.close();
									fin.open("c16key.txt");
									fin >> c1[i].key;
									fin.close();
									fin.open("c16pt.txt");
									fin >> c1[i].pt;
									fin.close();
									if(na==c1[i].name && vno==c1[i].no && skey== c1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c1[i].pt[0]-'0')+(c1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c1[i].pt[2]-'0')+(c1[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c16name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c16no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c16key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c16pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==7)
									{

									fin.open("c17name.txt");
									fin >> c1[i].name;
									fin.close();
									fin.open("c17no.txt");
									fin >> c1[i].no;
									fin.close();
									fin.open("c17key.txt");
									fin >> c1[i].key;
									fin.close();
									fin.open("c17pt.txt");
									fin >> c1[i].pt;
									fin.close();
									if(na==c1[i].name && vno==c1[i].no && skey== c1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c1[i].pt[0]-'0')+(c1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c1[i].pt[2]-'0')+(c1[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c17name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c17no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c17key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c17pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
									}
									if(i==8)
									{

									fin.open("c18name.txt");
									fin >> c1[i].name;
									fin.close();
									fin.open("c18no.txt");
									fin >> c1[i].no;
									fin.close();
									fin.open("c18key.txt");
									fin >> c1[i].key;
									fin.close();
									fin.open("c18pt.txt");
									fin >> c1[i].pt;
									fin.close();
									if(na==c1[i].name && vno==c1[i].no && skey== c1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c1[i].pt[0]-'0')+(c1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c1[i].pt[2]-'0')+(c1[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c18name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c18no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c18key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c18pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }

									}
									if(i==9)
									{

									fin.open("c19name.txt");
									fin >> c1[i].name;
									fin.close();
									fin.open("c19no.txt");
									fin >> c1[i].no;
									fin.close();
									fin.open("c19key.txt");
									fin >> c1[i].key;
									fin.close();
									fin.open("c19pt.txt");
									fin >> c1[i].pt;
									fin.close();
									if(na==c1[i].name && vno==c1[i].no && skey== c1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c1[i].pt[0]-'0')+(c1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c1[i].pt[2]-'0')+(c1[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c19name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c19no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c19key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c19pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==0)
									{

									fin.open("c10name.txt");
									fin >> c1[i].name;
									fin.close();
									fin.open("c10no.txt");
									fin >> c1[i].no;
									fin.close();
									fin.open("c10key.txt");
									fin >> c1[i].key;
									fin.close();
									fin.open("c10pt.txt");
									fin >> c1[i].pt;
									fin.close();
									if(na==c1[i].name && vno==c1[i].no && skey== c1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c1[i].pt[0]-'0')+(c1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c1[i].pt[2]-'0')+(c1[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c10name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c10no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c10key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c10pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}




								}
                        if(j==2)
								{

									if(i==1)
									{

									fin.open("c21name.txt");
									fin >> c2[i].name;
									fin.close();
									fin.open("c21no.txt");
									fin >> c2[i].no;
									fin.close();
									fin.open("c21key.txt");
									fin >> c2[i].key;
									fin.close();
									fin.open("c21pt.txt");
									fin >> c2[i].pt;
									fin.close();
									if(na==c2[i].name && vno==c2[i].no && skey== c2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c2[i].pt[0]-'0')+(c2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c2[i].pt[2]-'0')+(c2[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c21name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c21no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c21key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c21pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==2)
									{

									fin.open("c22name.txt");
									fin >> c2[i].name;
									fin.close();
									fin.open("c22no.txt");
									fin >> c2[i].no;
									fin.close();
									fin.open("c22key.txt");
									fin >> c2[i].key;
									fin.close();
									fin.open("c22pt.txt");
									fin >> c2[i].pt;
									fin.close();
									if(na==c2[i].name && vno==c2[i].no && skey== c2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c2[i].pt[0]-'0')+(c2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c2[i].pt[2]-'0')+(c2[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c22name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c22no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c22key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c22pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==3)
									{

									fin.open("c23name.txt");
									fin >> c2[i].name;
									fin.close();
									fin.open("c23no.txt");
									fin >> c2[i].no;
									fin.close();
									fin.open("c23key.txt");
									fin >> c2[i].key;
									fin.close();
									fin.open("c23pt.txt");
									fin >> c2[i].pt;
									fin.close();
									if(na==c2[i].name && vno==c2[i].no && skey== c2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c2[i].pt[0]-'0')+(c2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c2[i].pt[2]-'0')+(c2[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c23name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c23no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c23key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c23pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==4)
									{

									fin.open("c24name.txt");
									fin >> c2[i].name;
									fin.close();
									fin.open("c24no.txt");
									fin >> c2[i].no;
									fin.close();
									fin.open("c24key.txt");
									fin >> c2[i].key;
									fin.close();
									fin.open("c24pt.txt");
									fin >> c2[i].pt;
									fin.close();
									if(na==c2[i].name && vno==c2[i].no && skey== c2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c2[i].pt[0]-'0')+(c2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c2[i].pt[2]-'0')+(c2[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c24name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c24no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c24key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c24pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==5)
									{

									fin.open("c25name.txt");
									fin >> c2[i].name;
									fin.close();
									fin.open("c25no.txt");
									fin >> c2[i].no;
									fin.close();
									fin.open("c25key.txt");
									fin >> c2[i].key;
									fin.close();
									fin.open("c25pt.txt");
									fin >> c2[i].pt;
									fin.close();
									if(na==c2[i].name && vno==c2[i].no && skey== c2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c2[i].pt[0]-'0')+(c2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c2[i].pt[2]-'0')+(c2[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c25name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c25no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c25key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c25pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==6)
									{

									fin.open("c26name.txt");
									fin >> c2[i].name;
									fin.close();
									fin.open("c26no.txt");
									fin >> c2[i].no;
									fin.close();
									fin.open("c26key.txt");
									fin >> c2[i].key;
									fin.close();
									fin.open("c26pt.txt");
									fin >> c2[i].pt;
									fin.close();
									if(na==c2[i].name && vno==c2[i].no && skey== c2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c2[i].pt[0]-'0')+(c2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c2[i].pt[2]-'0')+(c2[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c26name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c26no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c26key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c26pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==7)
									{

									fin.open("c27name.txt");
									fin >> c2[i].name;
									fin.close();
									fin.open("c27no.txt");
									fin >> c2[i].no;
									fin.close();
									fin.open("c27key.txt");
									fin >> c2[i].key;
									fin.close();
									fin.open("c27pt.txt");
									fin >> c2[i].pt;
									fin.close();
									if(na==c2[i].name && vno==c2[i].no && skey== c2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c2[i].pt[0]-'0')+(c2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c2[i].pt[2]-'0')+(c2[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c27name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c27no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c27key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c27pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }

									}
									if(i==8)
									{

									fin.open("c28name.txt");
									fin >> c2[i].name;
									fin.close();
									fin.open("c28no.txt");
									fin >> c2[i].no;
									fin.close();
									fin.open("c28key.txt");
									fin >> c2[i].key;
									fin.close();
									fin.open("c28pt.txt");
									fin >> c2[i].pt;
									fin.close();
									if(na==c2[i].name && vno==c2[i].no && skey== c2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c2[i].pt[0]-'0')+(c2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c2[i].pt[2]-'0')+(c2[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c28name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c28no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c28key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c28pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==9)
									{

									fin.open("c29name.txt");
									fin >> c2[i].name;
									fin.close();
									fin.open("c29no.txt");
									fin >> c2[i].no;
									fin.close();
									fin.open("c29key.txt");
									fin >> c2[i].key;
									fin.close();
									fin.open("c29pt.txt");
									fin >> c2[i].pt;
									fin.close();
									if(na==c2[i].name && vno==c2[i].no && skey== c2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c2[i].pt[0]-'0')+(c2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c2[i].pt[2]-'0')+(c2[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c29name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c29no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c29key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c29pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==0)
									{

									fin.open("c20name.txt");
									fin >> c2[i].name;
									fin.close();
									fin.open("c20no.txt");
									fin >> c2[i].no;
									fin.close();
									fin.open("c20key.txt");
									fin >> c2[i].key;
									fin.close();
									fin.open("c20pt.txt");
									fin >> c2[i].pt;
									fin.close();
									if(na==c2[i].name && vno==c2[i].no && skey== c2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c2[i].pt[0]-'0')+(c2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c2[i].pt[2]-'0')+(c2[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c20name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c20no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c20key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c20pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}




								}

                        if(j==3)
                                {
                                    if(i==0)
									{

									fin.open("c30name.txt");
									fin >> c3[i].name;
									fin.close();
									fin.open("c30no.txt");
									fin >> c3[i].no;
									fin.close();
									fin.open("c30key.txt");
									fin >> c3[i].key;
									fin.close();
									fin.open("c30pt.txt");
									fin >> c3[i].pt;
									fin.close();
									if(na==c3[i].name && vno==c3[i].no && skey== c3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c3[i].pt[0]-'0')+(c3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c3[i].pt[2]-'0')+(c3[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c30name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c30no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c30key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c30pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
									}

                                    if(i==1)
									{

									fin.open("c31name.txt");
									fin >> c3[i].name;
									fin.close();
									fin.open("c31no.txt");
									fin >> c3[i].no;
									fin.close();
									fin.open("c31key.txt");
									fin >> c3[i].key;
									fin.close();
									fin.open("c31pt.txt");
									fin >> c3[i].pt;
									fin.close();
									if(na==c3[i].name && vno==c3[i].no && skey== c3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c3[i].pt[0]-'0')+(c3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c3[i].pt[2]-'0')+(c3[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c31name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c31no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c31key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c31pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
									}

									if(i==2)
									{

									fin.open("c32name.txt");
									fin >> c3[i].name;
									fin.close();
									fin.open("c32no.txt");
									fin >> c3[i].no;
									fin.close();
									fin.open("c32key.txt");
									fin >> c3[i].key;
									fin.close();
									fin.open("c32pt.txt");
									fin >> c3[i].pt;
									fin.close();
									if(na==c3[i].name && vno==c3[i].no && skey== c3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c3[i].pt[0]-'0')+(c3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c3[i].pt[2]-'0')+(c3[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c32name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c32no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c32key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c32pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}

									if(i==3)
									{

									fin.open("c33name.txt");
									fin >> c3[i].name;
									fin.close();
									fin.open("c33no.txt");
									fin >> c3[i].no;
									fin.close();
									fin.open("c33key.txt");
									fin >> c3[i].key;
									fin.close();
									fin.open("c33pt.txt");
									fin >> c3[i].pt;
									fin.close();
									if(na==c3[i].name && vno==c3[i].no && skey== c3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c3[i].pt[0]-'0')+(c3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c3[i].pt[2]-'0')+(c3[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c33name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c33no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c33key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c33pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
									}

                                  if(i==4)
									{

									fin.open("c34name.txt");
									fin >> c3[i].name;
									fin.close();
									fin.open("c34no.txt");
									fin >> c3[i].no;
									fin.close();
									fin.open("c34key.txt");
									fin >> c3[i].key;
									fin.close();
									fin.open("c34pt.txt");
									fin >> c3[i].pt;
									fin.close();
									if(na==c3[i].name && vno==c3[i].no && skey== c3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c3[i].pt[0]-'0')+(c3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c3[i].pt[2]-'0')+(c3[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c34name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c34no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c34key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c34pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }
                                if(i==5)
									{

									fin.open("c35name.txt");
									fin >> c3[i].name;
									fin.close();
									fin.open("c35no.txt");
									fin >> c3[i].no;
									fin.close();
									fin.open("c35key.txt");
									fin >> c3[i].key;
									fin.close();
									fin.open("c35pt.txt");
									fin >> c3[i].pt;
									fin.close();
									if(na==c3[i].name && vno==c3[i].no && skey== c3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c3[i].pt[0]-'0')+(c3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c3[i].pt[2]-'0')+(c3[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c35name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c35no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c35key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c35pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }

                                    if(i==6)
									{

									fin.open("c36name.txt");
									fin >> c3[i].name;
									fin.close();
									fin.open("c36no.txt");
									fin >> c3[i].no;
									fin.close();
									fin.open("c36key.txt");
									fin >> c3[i].key;
									fin.close();
									fin.open("c36pt.txt");
									fin >> c3[i].pt;
									fin.close();
									if(na==c3[i].name && vno==c3[i].no && skey== c3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c3[i].pt[0]-'0')+(c3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c3[i].pt[2]-'0')+(c3[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c36name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c36no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c36key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c36pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }
                                   if(i==7)
									{

									fin.open("c37name.txt");
									fin >> c3[i].name;
									fin.close();
									fin.open("c37no.txt");
									fin >> c3[i].no;
									fin.close();
									fin.open("c37key.txt");
									fin >> c3[i].key;
									fin.close();
									fin.open("c37pt.txt");
									fin >> c3[i].pt;
									fin.close();
									if(na==c3[i].name && vno==c3[i].no && skey== c3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c3[i].pt[0]-'0')+(c3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c3[i].pt[2]-'0')+(c3[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c37name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c37no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c37key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c37pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }
                                   if(i==8)
									{

									fin.open("c38name.txt");
									fin >> c3[i].name;
									fin.close();
									fin.open("c38no.txt");
									fin >> c3[i].no;
									fin.close();
									fin.open("c38key.txt");
									fin >> c3[i].key;
									fin.close();
									fin.open("c38pt.txt");
									fin >> c3[i].pt;
									fin.close();
									if(na==c3[i].name && vno==c3[i].no && skey== c3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c3[i].pt[0]-'0')+(c3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c3[i].pt[2]-'0')+(c3[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c38name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c38no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c38key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c38pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }
                                if(i==9)
									{

									fin.open("c39name.txt");
									fin >> c3[i].name;
									fin.close();
									fin.open("c39no.txt");
									fin >> c3[i].no;
									fin.close();
									fin.open("c39key.txt");
									fin >> c3[i].key;
									fin.close();
									fin.open("c39pt.txt");
									fin >> c3[i].pt;
									fin.close();
									if(na==c3[i].name && vno==c3[i].no && skey== c3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c3[i].pt[0]-'0')+(c3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c3[i].pt[2]-'0')+(c3[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c39name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c39no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c39key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c39pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }

                                }


								system("cls");
								break;
                    }
                case 3:
                    {
                        string na,vno,skey,timeofdep;
                        cout << "ENTER YOUR FLOOR NUMBER\n";
                        cin >> j;
                        cout << "ENTER YOUR POSITION NUMBER\n";
                        cin >> i;
                        cout << "ENTER YOUR NAME\n";
                        cin >> na;
                        cout << "ENTER YOUR VEHICLE NUMBER\n";
                        cin >> vno;
                        cout << "ENTER YOUR SECURITY KEY\n";
                        cin >> skey;
                        cout << "ENTER TIME OF DEPARTURE\n";
                        cin >> timeofdep;

                        if(j==1)
								{

									if(i==1)
									{

									fin.open("b11name.txt");
									fin >> b1[i].name;
									fin.close();
									fin.open("b11no.txt");
									fin >> b1[i].no;
									fin.close();
									fin.open("b11key.txt");
									fin >> b1[i].key;
									fin.close();
									fin.open("b11pt.txt");
									fin >> b1[i].pt;
									fin.close();
									if(na==b1[i].name && vno==b1[i].no && skey== b1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b1[i].pt[0]-'0')+(b1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b1[i].pt[2]-'0')+(b1[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b11name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b11no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b11key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b11pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==2)
									{

									fin.open("b12name.txt");
									fin >> b1[i].name;
									fin.close();
									fin.open("b12no.txt");
									fin >> b1[i].no;
									fin.close();
									fin.open("b12key.txt");
									fin >> b1[i].key;
									fin.close();
									fin.open("b12pt.txt");
									fin>> b1[i].pt;
									fin.close();
									if(na==b1[i].name && vno==b1[i].no && skey== b1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b1[i].pt[0]-'0')+(b1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b1[i].pt[2]-'0')+(b1[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b12name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b12no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b12key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b12pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }

									}
									if(i==3)
									{

									fin.open("b13name.txt");
									fin >> b1[i].name;
									fin.close();
									fin.open("b13no.txt");
									fin >> b1[i].no;
									fin.close();
									fin.open("b13key.txt");
									fin >> b1[i].key;
									fin.close();
									fin.open("b13pt.txt");
									fin >> b1[i].pt;
									fin.close();
									if(na==b1[i].name && vno==b1[i].no && skey== b1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b1[i].pt[0]-'0')+(b1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b1[i].pt[2]-'0')+(b1[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b13name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b13no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b13key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b13pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==4)
									{

									fin.open("b14name.txt");
									fin >> b1[i].name;
									fin.close();
									fin.open("b14no.txt");
									fin >> b1[i].no;
									fin.close();
									fin.open("b14key.txt");
									fin >> b1[i].key;
									fin.close();
									fin.open("b14pt.txt");
									fin >> b1[i].pt;
									fin.close();
									if(na==b1[i].name && vno==b1[i].no && skey== b1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b1[i].pt[0]-'0')+(b1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b1[i].pt[2]-'0')+(b1[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b14name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b14no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b14key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b14pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }

									}
									if(i==5)
									{

									fin.open("b15name.txt");
									fin >> b1[i].name;
									fin.close();
									fin.open("b15no.txt");
									fin >> b1[i].no;
									fin.close();
									fin.open("b15key.txt");
									fin >> b1[i].key;
									fin.close();
									fin.open("b15pt.txt");
									fin >> b1[i].pt;
									fin.close();
									if(na==b1[i].name && vno==b1[i].no && skey== b1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b1[i].pt[0]-'0')+(b1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b1[i].pt[2]-'0')+(b1[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b15name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b15no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b15key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b15pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==6)
									{

									fin.open("b16name.txt");
									fin >> b1[i].name;
									fin.close();
									fin.open("b16no.txt");
									fin >> b1[i].no;
									fin.close();
									fin.open("b16key.txt");
									fin >> b1[i].key;
									fin.close();
									fin.open("b16pt.txt");
									fin >> b1[i].pt;
									fin.close();
									if(na==b1[i].name && vno==b1[i].no && skey== b1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b1[i].pt[0]-'0')+(b1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b1[i].pt[2]-'0')+(b1[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b16name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b16no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b16key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b16pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==7)
									{

									fin.open("b17name.txt");
									fin >> b1[i].name;
									fin.close();
									fin.open("b17no.txt");
									fin >> b1[i].no;
									fin.close();
									fin.open("b17key.txt");
									fin >> b1[i].key;
									fin.close();
									fin.open("b17pt.txt");
									fin >> b1[i].pt;
									fin.close();
									if(na==b1[i].name && vno==b1[i].no && skey== b1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b1[i].pt[0]-'0')+(b1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b1[i].pt[2]-'0')+(b1[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b17name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b17no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b17key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b17pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
									}
									if(i==8)
									{

									fin.open("b18name.txt");
									fin >> b1[i].name;
									fin.close();
									fin.open("b18no.txt");
									fin >> b1[i].no;
									fin.close();
									fin.open("b18key.txt");
									fin >> b1[i].key;
									fin.close();
									fin.open("b18pt.txt");
									fin >> b1[i].pt;
									fin.close();
									if(na==b1[i].name && vno==b1[i].no && skey== b1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b1[i].pt[0]-'0')+(b1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b1[i].pt[2]-'0')+(b1[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b18name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b18no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b18key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b18pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }

									}
									if(i==9)
									{

									fin.open("b19name.txt");
									fin >> b1[i].name;
									fin.close();
									fin.open("b19no.txt");
									fin >> b1[i].no;
									fin.close();
									fin.open("b19key.txt");
									fin >> b1[i].key;
									fin.close();
									fin.open("b19pt.txt");
									fin >> b1[i].pt;
									fin.close();
									if(na==b1[i].name && vno==b1[i].no && skey== b1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b1[i].pt[0]-'0')+(b1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b1[i].pt[2]-'0')+(b1[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b19name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b19no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b19key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b19pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==0)
									{

									fin.open("b10name.txt");
									fin >> b1[i].name;
									fin.close();
									fin.open("b10no.txt");
									fin >> b1[i].no;
									fin.close();
									fin.open("b10key.txt");
									fin >> b1[i].key;
									fin.close();
									fin.open("b10pt.txt");
									fin >> b1[i].pt;
									fin.close();
									if(na==b1[i].name && vno==b1[i].no && skey== b1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b1[i].pt[0]-'0')+(b1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b1[i].pt[2]-'0')+(b1[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b10name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b10no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b10key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b10pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}




								}
                        if(j==2)
								{

									if(i==1)
									{

									fin.open("b21name.txt");
									fin >> b2[i].name;
									fin.close();
									fin.open("b1no.txt");
									fin >> b2[i].no;
									fin.close();
									fin.open("b21key.txt");
									fin >> b2[i].key;
									fin.close();
									fin.open("b21pt.txt");
									fin >> b2[i].pt;
									fin.close();
									if(na==b2[i].name && vno==b2[i].no && skey== b2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b2[i].pt[0]-'0')+(b2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b2[i].pt[2]-'0')+(b2[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b21name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b21no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b21key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b21pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==2)
									{

									fin.open("b22name.txt");
									fin >> b2[i].name;
									fin.close();
									fin.open("b22no.txt");
									fin >> b2[i].no;
									fin.close();
									fin.open("b22key.txt");
									fin >> b2[i].key;
									fin.close();
									fin.open("b22pt.txt");
									fin >> b2[i].pt;
									fin.close();
									if(na==b2[i].name && vno==b2[i].no && skey== b2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b2[i].pt[0]-'0')+(b2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b2[i].pt[2]-'0')+(b2[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b22name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b22no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b22key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b22pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==3)
									{

									fin.open("b23name.txt");
									fin >> b2[i].name;
									fin.close();
									fin.open("b23no.txt");
									fin >> b2[i].no;
									fin.close();
									fin.open("b23key.txt");
									fin >> b2[i].key;
									fin.close();
									fin.open("b23pt.txt");
									fin >> b2[i].pt;
									fin.close();
									if(na==b2[i].name && vno==b2[i].no && skey== b2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b2[i].pt[0]-'0')+(b2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b2[i].pt[2]-'0')+(b2[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b23name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b23no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b23key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b23pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==4)
									{

									fin.open("b24name.txt");
									fin >> b2[i].name;
									fin.close();
									fin.open("b24no.txt");
									fin >> b2[i].no;
									fin.close();
									fin.open("b24key.txt");
									fin >> b2[i].key;
									fin.close();
									fin.open("b24pt.txt");
									fin >> b2[i].pt;
									fin.close();
									if(na==b2[i].name && vno==b2[i].no && skey== b2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b2[i].pt[0]-'0')+(b2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b2[i].pt[2]-'0')+(b2[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b24name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b24no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b24key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b24pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==5)
									{

									fin.open("b25name.txt");
									fin >> b2[i].name;
									fin.close();
									fin.open("b25no.txt");
									fin >> b2[i].no;
									fin.close();
									fin.open("b25key.txt");
									fin >> b2[i].key;
									fin.close();
									fin.open("b25pt.txt");
									fin >> b2[i].pt;
									fin.close();
									if(na==b2[i].name && vno==b2[i].no && skey== b2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b2[i].pt[0]-'0')+(b2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b2[i].pt[2]-'0')+(b2[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b25name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b25no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b25key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b25pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==6)
									{

									fin.open("b26name.txt");
									fin >> b2[i].name;
									fin.close();
									fin.open("b26no.txt");
									fin >> b2[i].no;
									fin.close();
									fin.open("b26key.txt");
									fin >> b2[i].key;
									fin.close();
									fin.open("b26pt.txt");
									fin >> b2[i].pt;
									fin.close();
									if(na==b2[i].name && vno==b2[i].no && skey== b2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b2[i].pt[0]-'0')+(b2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b2[i].pt[2]-'0')+(b2[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b26name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b26no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b26key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b26pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==7)
									{

									fin.open("b27name.txt");
									fin >> b2[i].name;
									fin.close();
									fin.open("b27no.txt");
									fin >> b2[i].no;
									fin.close();
									fin.open("b27key.txt");
									fin >> b2[i].key;
									fin.close();
									fin.open("b27pt.txt");
									fin >> b2[i].pt;
									fin.close();
									if(na==b2[i].name && vno==b2[i].no && skey== b2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b2[i].pt[0]-'0')+(b2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b2[i].pt[2]-'0')+(b2[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b27name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b27no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b27key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b27pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }

									}
									if(i==8)
									{

									fin.open("b28name.txt");
									fin >> b2[i].name;
									fin.close();
									fin.open("b28no.txt");
									fin >> b2[i].no;
									fin.close();
									fin.open("b28key.txt");
									fin >> b2[i].key;
									fin.close();
									fin.open("b28pt.txt");
									fin >> b2[i].pt;
									fin.close();
									if(na==b2[i].name && vno==b2[i].no && skey== b2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b2[i].pt[0]-'0')+(b2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b2[i].pt[2]-'0')+(b2[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b28name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b28no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b28key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b28pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}
									if(i==9)
									{

									fin.open("b29name.txt");
									fin >> b2[i].name;
									fin.close();
									fin.open("b29no.txt");
									fin >> b2[i].no;
									fin.close();
									fin.open("b29key.txt");
									fin >> b2[i].key;
									fin.close();
									fin.open("b29pt.txt");
									fin >> b2[i].pt;
									fin.close();
									if(na==b2[i].name && vno==b2[i].no && skey== b2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b2[i].pt[0]-'0')+(b2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b2[i].pt[2]-'0')+(b2[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b29name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b29no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b29key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b29pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}
									if(i==0)
									{

									fin.open("c20name.txt");
									fin >> c2[i].name;
									fin.close();
									fin.open("c20no.txt");
									fin >> c2[i].no;
									fin.close();
									fin.open("c20key.txt");
									fin >> c2[i].key;
									fin.close();
									fin.open("c20pt.txt");
									fin >> c2[i].pt;
									fin.close();
									if(na==c2[i].name && vno==c2[i].no && skey== c2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(c2[i].pt[0]-'0')+(c2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(c2[i].pt[2]-'0')+(c2[i].pt[3]-'0')));
                                        cout << 20*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+20*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("c20name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c20no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("c20key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("c20pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }



									}




								}

                        if(j==3)
                                {
                                    if(i==0)
									{

									fin.open("b30name.txt");
									fin >> b3[i].name;
									fin.close();
									fin.open("b30no.txt");
									fin >> b3[i].no;
									fin.close();
									fin.open("b30key.txt");
									fin >> b3[i].key;
									fin.close();
									fin.open("b30pt.txt");
									fin >> b3[i].pt;
									fin.close();
									if(na==b3[i].name && vno==b3[i].no && skey== b3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b3[i].pt[0]-'0')+(b3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b3[i].pt[2]-'0')+(b3[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b30name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b30no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b30key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b30pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
									}

                                    if(i==1)
									{

									fin.open("b31name.txt");
									fin >> b3[i].name;
									fin.close();
									fin.open("b31no.txt");
									fin >> b3[i].no;
									fin.close();
									fin.open("b31key.txt");
									fin >> b3[i].key;
									fin.close();
									fin.open("b31pt.txt");
									fin >> b3[i].pt;
									fin.close();
									if(na==b3[i].name && vno==b3[i].no && skey== b3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b3[i].pt[0]-'0')+(b3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b3[i].pt[2]-'0')+(b3[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b31name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b31no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b31key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b31pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
									}

									if(i==2)
									{

									fin.open("b32name.txt");
									fin >> b3[i].name;
									fin.close();
									fin.open("b32no.txt");
									fin >> b3[i].no;
									fin.close();
									fin.open("b32key.txt");
									fin >> b3[i].key;
									fin.close();
									fin.open("b32pt.txt");
									fin >> b3[i].pt;
									fin.close();
									if(na==b3[i].name && vno==b3[i].no && skey== b3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b3[i].pt[0]-'0')+(b3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b3[i].pt[2]-'0')+(b3[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b32name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b32no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b32key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b32pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }


									}

									if(i==3)
									{

									fin.open("b33name.txt");
									fin >> b3[i].name;
									fin.close();
									fin.open("b33no.txt");
									fin >> b3[i].no;
									fin.close();
									fin.open("b33key.txt");
									fin >> b3[i].key;
									fin.close();
									fin.open("b33pt.txt");
									fin >> b3[i].pt;
									fin.close();
									if(na==b3[i].name && vno==b3[i].no && skey== b3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b3[i].pt[0]-'0')+(b3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b3[i].pt[2]-'0')+(b3[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b33name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b33no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b33key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b33pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
									}

                                  if(i==4)
									{

									fin.open("b34name.txt");
									fin >> b3[i].name;
									fin.close();
									fin.open("b34no.txt");
									fin >> b3[i].no;
									fin.close();
									fin.open("b34key.txt");
									fin >> b3[i].key;
									fin.close();
									fin.open("b34pt.txt");
									fin >> b3[i].pt;
									fin.close();
									if(na==b3[i].name && vno==b3[i].no && skey== b3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b3[i].pt[0]-'0')+(b3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b3[i].pt[2]-'0')+(b3[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b34name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b34no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b34key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b34pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }
                                if(i==5)
									{

									fin.open("b35name.txt");
									fin >> b3[i].name;
									fin.close();
									fin.open("b35no.txt");
									fin >> b3[i].no;
									fin.close();
									fin.open("b35key.txt");
									fin >> b3[i].key;
									fin.close();
									fin.open("b35pt.txt");
									fin >> b3[i].pt;
									fin.close();
									if(na==b3[i].name && vno==b3[i].no && skey== b3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b3[i].pt[0]-'0')+(b3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b3[i].pt[2]-'0')+(b3[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b35name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b35no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b35key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b35pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }

                                    if(i==6)
									{

									fin.open("b36name.txt");
									fin >> b3[i].name;
									fin.close();
									fin.open("b36no.txt");
									fin >> b3[i].no;
									fin.close();
									fin.open("b36key.txt");
									fin >> b3[i].key;
									fin.close();
									fin.open("b36pt.txt");
									fin >> b3[i].pt;
									fin.close();
									if(na==b3[i].name && vno==b3[i].no && skey== b3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b3[i].pt[0]-'0')+(b3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b3[i].pt[2]-'0')+(b3[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b36name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b36no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b36key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b36pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }
                                   if(i==7)
									{

									fin.open("b37name.txt");
									fin >> b3[i].name;
									fin.close();
									fin.open("b37no.txt");
									fin >> b3[i].no;
									fin.close();
									fin.open("b37key.txt");
									fin >> b3[i].key;
									fin.close();
									fin.open("b37pt.txt");
									fin >> b3[i].pt;
									fin.close();
									if(na==b3[i].name && vno==b3[i].no && skey== b3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b3[i].pt[0]-'0')+(b3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b3[i].pt[2]-'0')+(b3[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b37name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b37no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b37key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b37pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }
                                   if(i==8)
									{

									fin.open("b38name.txt");
									fin >> b3[i].name;
									fin.close();
									fin.open("b38no.txt");
									fin >> b3[i].no;
									fin.close();
									fin.open("b38key.txt");
									fin >> b3[i].key;
									fin.close();
									fin.open("b38pt.txt");
									fin >> b3[i].pt;
									fin.close();
									if(na==b3[i].name && vno==b3[i].no && skey== b3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b3[i].pt[0]-'0')+(b3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b3[i].pt[2]-'0')+(b3[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b38name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b38no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b38key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b38pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }
                                if(i==9)
									{

									fin.open("b39name.txt");
									fin >> b3[i].name;
									fin.close();
									fin.open("b39no.txt");
									fin >> b3[i].no;
									fin.close();
									fin.open("b39key.txt");
									fin >> b3[i].key;
									fin.close();
									fin.open("b39pt.txt");
									fin >> b3[i].pt;
									fin.close();
									if(na==b3[i].name && vno==b3[i].no && skey== b3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(b3[i].pt[0]-'0')+(b3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(b3[i].pt[2]-'0')+(b3[i].pt[3]-'0')));
                                        cout << 40*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+40*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("b39name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b39no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("b39key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("b39pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        break;
                                    }
                                }

                                }


								system("cls");
								break;

                    }
     			case 4:
     			    {
     			        string na,vno,skey,timeofdep;
                        cout << "ENTER YOUR FLOOR NUMBER\n";
                        cin >> j;
                        cout << "ENTER YOUR POSITION NUMBER\n";
                        cin >> i;
                        cout << "ENTER YOUR NAME\n";
                        cin >> na;
                        cout << "ENTER YOUR VEHICLE NUMBER\n";
                        cin >> vno;
                        cout << "ENTER YOUR SECURITY KEY\n";
                        cin >> skey;
                        cout << "ENTER TIME OF DEPARTURE\n";
                        cin >> timeofdep;

                        if(j==1)
								{

									if(i==1)
									{

									fin.open("t11name.txt");
									fin >> t1[i].name;
									fin.close();
									fin.open("t11no.txt");
									fin >> t1[i].no;
									fin.close();
									fin.open("t11key.txt");
									fin >> t1[i].key;
									fin.close();
									fin.open("t11pt.txt");
									fin >> t1[i].pt;
									fin.close();
									if(na==t1[i].name && vno==t1[i].no && skey== t1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t1[i].pt[0]-'0')+(t1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t1[i].pt[2]-'0')+(t1[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t11name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t11no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t11key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t11pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }



									}
									if(i==2)
									{

									fin.open("t12name.txt");
									fin >> t1[i].name;
									fin.close();
									fin.open("t12no.txt");
									fin >> t1[i].no;
									fin.close();
									fin.open("t12key.txt");
									fin >> t1[i].key;
									fin.close();
									fin.open("t12pt.txt");
									fin>> t1[i].pt;
									fin.close();
									if(na==t1[i].name && vno==t1[i].no && skey== t1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t1[i].pt[0]-'0')+(t1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t1[i].pt[2]-'0')+(t1[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t12name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t12no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t12key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t12pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }

									}
									if(i==3)
									{

									fin.open("t13name.txt");
									fin >> t1[i].name;
									fin.close();
									fin.open("t13no.txt");
									fin >> t1[i].no;
									fin.close();
									fin.open("t13key.txt");
									fin >> t1[i].key;
									fin.close();
									fin.open("t13pt.txt");
									fin >> t1[i].pt;
									fin.close();
									if(na==t1[i].name && vno==t1[i].no && skey== t1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t1[i].pt[0]-'0')+(t1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t1[i].pt[2]-'0')+(t1[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t13name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t13no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t13key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t13pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }


									}
									if(i==4)
									{

									fin.open("t14name.txt");
									fin >> t1[i].name;
									fin.close();
									fin.open("t14no.txt");
									fin >> t1[i].no;
									fin.close();
									fin.open("t14key.txt");
									fin >> t1[i].key;
									fin.close();
									fin.open("t14pt.txt");
									fin >> t1[i].pt;
									fin.close();
									if(na==t1[i].name && vno==t1[i].no && skey== t1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t1[i].pt[0]-'0')+(t1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t1[i].pt[2]-'0')+(t1[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t14name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t14no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t14key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t14pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }

									}
									if(i==5)
									{

									fin.open("t15name.txt");
									fin >> t1[i].name;
									fin.close();
									fin.open("t15no.txt");
									fin >> t1[i].no;
									fin.close();
									fin.open("t15key.txt");
									fin >> t1[i].key;
									fin.close();
									fin.open("t15pt.txt");
									fin >> t1[i].pt;
									fin.close();
									if(na==t1[i].name && vno==t1[i].no && skey== t1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t1[i].pt[0]-'0')+(t1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t1[i].pt[2]-'0')+(t1[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t15name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t15no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t15key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t15pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }


									}
									if(i==6)
									{

									fin.open("t16name.txt");
									fin >> t1[i].name;
									fin.close();
									fin.open("t16no.txt");
									fin >> t1[i].no;
									fin.close();
									fin.open("t16key.txt");
									fin >> t1[i].key;
									fin.close();
									fin.open("t16pt.txt");
									fin >> t1[i].pt;
									fin.close();
									if(na==t1[i].name && vno==t1[i].no && skey== t1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t1[i].pt[0]-'0')+(t1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t1[i].pt[2]-'0')+(t1[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t16name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t16no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t16key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t16pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }


									}
									if(i==7)
									{

									fin.open("t17name.txt");
									fin >> t1[i].name;
									fin.close();
									fin.open("t17no.txt");
									fin >> t1[i].no;
									fin.close();
									fin.open("t17key.txt");
									fin >> t1[i].key;
									fin.close();
									fin.open("t17pt.txt");
									fin >> t1[i].pt;
									fin.close();
									if(na==t1[i].name && vno==t1[i].no && skey== t1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t1[i].pt[0]-'0')+(t1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t1[i].pt[2]-'0')+(t1[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t17name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t17no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t17key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t17pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }
									}
									if(i==8)
									{

									fin.open("t18name.txt");
									fin >> t1[i].name;
									fin.close();
									fin.open("t18no.txt");
									fin >> t1[i].no;
									fin.close();
									fin.open("t18key.txt");
									fin >> t1[i].key;
									fin.close();
									fin.open("t18pt.txt");
									fin >> t1[i].pt;
									fin.close();
									if(na==t1[i].name && vno==t1[i].no && skey== t1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t1[i].pt[0]-'0')+(t1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t1[i].pt[2]-'0')+(t1[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t18name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t18no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t18key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t18pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }

									}
									if(i==9)
									{

									fin.open("t19name.txt");
									fin >> t1[i].name;
									fin.close();
									fin.open("t19no.txt");
									fin >> t1[i].no;
									fin.close();
									fin.open("t19key.txt");
									fin >> t1[i].key;
									fin.close();
									fin.open("t19pt.txt");
									fin >> t1[i].pt;
									fin.close();
									if(na==t1[i].name && vno==t1[i].no && skey== t1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t1[i].pt[0]-'0')+(t1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t1[i].pt[2]-'0')+(t1[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t19name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t19no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t19key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t19pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }


									}
									if(i==0)
									{

									fin.open("t10name.txt");
									fin >> t1[i].name;
									fin.close();
									fin.open("t10no.txt");
									fin >> t1[i].no;
									fin.close();
									fin.open("t10key.txt");
									fin >> t1[i].key;
									fin.close();
									fin.open("t10pt.txt");
									fin >> t1[i].pt;
									fin.close();
									if(na==t1[i].name && vno==t1[i].no && skey== t1[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t1[i].pt[0]-'0')+(t1[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t1[i].pt[2]-'0')+(t1[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t10name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t10no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t10key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t10pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }


									}




								}
                        if(j==2)
								{

									if(i==1)
									{

									fin.open("t21name.txt");
									fin >> t2[i].name;
									fin.close();
									fin.open("t1no.txt");
									fin >> t2[i].no;
									fin.close();
									fin.open("t21key.txt");
									fin >> t2[i].key;
									fin.close();
									fin.open("t21pt.txt");
									fin >> t2[i].pt;
									fin.close();
									if(na==t2[i].name && vno==t2[i].no && skey== t2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t2[i].pt[0]-'0')+(t2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t2[i].pt[2]-'0')+(t2[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t21name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t21no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t21key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t21pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }



									}
									if(i==2)
									{

									fin.open("t22name.txt");
									fin >> t2[i].name;
									fin.close();
									fin.open("t22no.txt");
									fin >> t2[i].no;
									fin.close();
									fin.open("t22key.txt");
									fin >> t2[i].key;
									fin.close();
									fin.open("t22pt.txt");
									fin >> t2[i].pt;
									fin.close();
									if(na==t2[i].name && vno==t2[i].no && skey== t2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t2[i].pt[0]-'0')+(t2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t2[i].pt[2]-'0')+(t2[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t22name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t22no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t22key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t22pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }


									}
									if(i==3)
									{

									fin.open("t23name.txt");
									fin >> t2[i].name;
									fin.close();
									fin.open("t23no.txt");
									fin >> t2[i].no;
									fin.close();
									fin.open("t23key.txt");
									fin >> t2[i].key;
									fin.close();
									fin.open("t23pt.txt");
									fin >> t2[i].pt;
									fin.close();
									if(na==t2[i].name && vno==t2[i].no && skey== t2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t2[i].pt[0]-'0')+(t2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t2[i].pt[2]-'0')+(t2[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t23name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t23no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t23key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t23pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }



									}
									if(i==4)
									{

									fin.open("t24name.txt");
									fin >> t2[i].name;
									fin.close();
									fin.open("t24no.txt");
									fin >> t2[i].no;
									fin.close();
									fin.open("t24key.txt");
									fin >> t2[i].key;
									fin.close();
									fin.open("t24pt.txt");
									fin >> t2[i].pt;
									fin.close();
									if(na==t2[i].name && vno==t2[i].no && skey== t2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t2[i].pt[0]-'0')+(t2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t2[i].pt[2]-'0')+(t2[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t24name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t24no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t24key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t24pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }


									}
									if(i==5)
									{

									fin.open("t25name.txt");
									fin >> t2[i].name;
									fin.close();
									fin.open("t25no.txt");
									fin >> t2[i].no;
									fin.close();
									fin.open("t25key.txt");
									fin >> t2[i].key;
									fin.close();
									fin.open("t25pt.txt");
									fin >> t2[i].pt;
									fin.close();
									if(na==t2[i].name && vno==t2[i].no && skey== t2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t2[i].pt[0]-'0')+(t2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t2[i].pt[2]-'0')+(t2[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t25name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t25no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t25key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t25pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }


									}
									if(i==6)
									{

									fin.open("t26name.txt");
									fin >> t2[i].name;
									fin.close();
									fin.open("t26no.txt");
									fin >> t2[i].no;
									fin.close();
									fin.open("t26key.txt");
									fin >> t2[i].key;
									fin.close();
									fin.open("t26pt.txt");
									fin >> t2[i].pt;
									fin.close();
									if(na==t2[i].name && vno==t2[i].no && skey== t2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t2[i].pt[0]-'0')+(t2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t2[i].pt[2]-'0')+(t2[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t26name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t26no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t26key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t26pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }



									}
									if(i==7)
									{

									fin.open("t27name.txt");
									fin >> t2[i].name;
									fin.close();
									fin.open("t27no.txt");
									fin >> t2[i].no;
									fin.close();
									fin.open("t27key.txt");
									fin >> t2[i].key;
									fin.close();
									fin.open("t27pt.txt");
									fin >> t2[i].pt;
									fin.close();
									if(na==t2[i].name && vno==t2[i].no && skey== t2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t2[i].pt[0]-'0')+(t2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t2[i].pt[2]-'0')+(t2[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t27name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t27no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t27key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t27pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }

									}
									if(i==8)
									{

									fin.open("t28name.txt");
									fin >> t2[i].name;
									fin.close();
									fin.open("t28no.txt");
									fin >> t2[i].no;
									fin.close();
									fin.open("t28key.txt");
									fin >> t2[i].key;
									fin.close();
									fin.open("t28pt.txt");
									fin >> t2[i].pt;
									fin.close();
									if(na==t2[i].name && vno==t2[i].no && skey== t2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t2[i].pt[0]-'0')+(t2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t2[i].pt[2]-'0')+(t2[i].pt[3]-'0')));
                                        cout <<50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t28name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t28no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t28key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t28pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }


									}
									if(i==9)
									{

									fin.open("t29name.txt");
									fin >> t2[i].name;
									fin.close();
									fin.open("t29no.txt");
									fin >> t2[i].no;
									fin.close();
									fin.open("t29key.txt");
									fin >> t2[i].key;
									fin.close();
									fin.open("t29pt.txt");
									fin >> t2[i].pt;
									fin.close();
									if(na==t2[i].name && vno==t2[i].no && skey== t2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t2[i].pt[0]-'0')+(t2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t2[i].pt[2]-'0')+(t2[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t29name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t29no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t29key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t29pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }



									}
									if(i==0)
									{

									fin.open("t20name.txt");
									fin >> t2[i].name;
									fin.close();
									fin.open("t20no.txt");
									fin >> t2[i].no;
									fin.close();
									fin.open("t20key.txt");
									fin >> t2[i].key;
									fin.close();
									fin.open("t20pt.txt");
									fin >> t2[i].pt;
									fin.close();
									if(na==t2[i].name && vno==t2[i].no && skey== t2[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t2[i].pt[0]-'0')+(t2[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t2[i].pt[2]-'0')+(t2[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t20name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t20no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t20key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t20pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;

                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }



									}




								}

                        if(j==3)
                                {
                                    if(i==0)
									{

									fin.open("t30name.txt");
									fin >> t3[i].name;
									fin.close();
									fin.open("t30no.txt");
									fin >> t3[i].no;
									fin.close();
									fin.open("t30key.txt");
									fin >> t3[i].key;
									fin.close();
									fin.open("t30pt.txt");
									fin >> t3[i].pt;
									fin.close();
									if(na==t3[i].name && vno==t3[i].no && skey== t3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t3[i].pt[0]-'0')+(t3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t3[i].pt[2]-'0')+(t3[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t30name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t30no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t30key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t30pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }
									}

                                    if(i==1)
									{

									fin.open("t31name.txt");
									fin >> t3[i].name;
									fin.close();
									fin.open("t31no.txt");
									fin >> t3[i].no;
									fin.close();
									fin.open("t31key.txt");
									fin >> t3[i].key;
									fin.close();
									fin.open("t31pt.txt");
									fin >> t3[i].pt;
									fin.close();
									if(na==t3[i].name && vno==t3[i].no && skey== t3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t3[i].pt[0]-'0')+(t3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t3[i].pt[2]-'0')+(t3[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t31name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t31no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t31key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t31pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";
                                        system("pause");
                                        break;
                                    }
									}

									if(i==2)
									{

									fin.open("t32name.txt");
									fin >> t3[i].name;
									fin.close();
									fin.open("t32no.txt");
									fin >> t3[i].no;
									fin.close();
									fin.open("t32key.txt");
									fin >> t3[i].key;
									fin.close();
									fin.open("t32pt.txt");
									fin >> t3[i].pt;
									fin.close();
									if(na==t3[i].name && vno==t3[i].no && skey== t3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t3[i].pt[0]-'0')+(t3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t3[i].pt[2]-'0')+(t3[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t32name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t32no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t32key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t32pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";system("pause");
                                        break;
                                    }


									}

									if(i==3)
									{

									fin.open("t33name.txt");
									fin >> t3[i].name;
									fin.close();
									fin.open("t33no.txt");
									fin >> t3[i].no;
									fin.close();
									fin.open("t33key.txt");
									fin >> t3[i].key;
									fin.close();
									fin.open("t33pt.txt");
									fin >> t3[i].pt;
									fin.close();
									if(na==t3[i].name && vno==t3[i].no && skey== t3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t3[i].pt[0]-'0')+(t3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t3[i].pt[2]-'0')+(t3[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t33name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t33no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t33key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t33pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";system("pause");
                                        break;
                                    }
									}

                                  if(i==4)
									{

									fin.open("t34name.txt");
									fin >> t3[i].name;
									fin.close();
									fin.open("t34no.txt");
									fin >> t3[i].no;
									fin.close();
									fin.open("t34key.txt");
									fin >> t3[i].key;
									fin.close();
									fin.open("t34pt.txt");
									fin >> t3[i].pt;
									fin.close();
									if(na==t3[i].name && vno==t3[i].no && skey== t3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t3[i].pt[0]-'0')+(t3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t3[i].pt[2]-'0')+(t3[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t34name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t34no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t34key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t34pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";system("pause");
                                        break;
                                    }
                                }
                                if(i==5)
									{

									fin.open("t35name.txt");
									fin >> t3[i].name;
									fin.close();
									fin.open("t35no.txt");
									fin >> t3[i].no;
									fin.close();
									fin.open("t35key.txt");
									fin >> t3[i].key;
									fin.close();
									fin.open("t35pt.txt");
									fin >> t3[i].pt;
									fin.close();
									if(na==t3[i].name && vno==t3[i].no && skey== t3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t3[i].pt[0]-'0')+(t3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t3[i].pt[2]-'0')+(t3[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t35name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t35no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t35key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t35pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";system("pause");
                                        break;
                                    }
                                }

                                    if(i==6)
									{

									fin.open("t36name.txt");
									fin >> t3[i].name;
									fin.close();
									fin.open("t36no.txt");
									fin >> t3[i].no;
									fin.close();
									fin.open("t36key.txt");
									fin >> t3[i].key;
									fin.close();
									fin.open("t36pt.txt");
									fin >> t3[i].pt;
									fin.close();
									if(na==t3[i].name && vno==t3[i].no && skey== t3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t3[i].pt[0]-'0')+(t3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t3[i].pt[2]-'0')+(t3[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t36name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t36no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t36key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t36pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";system("pause");
                                        break;
                                    }
                                }
                                   if(i==7)
									{

									fin.open("t37name.txt");
									fin >> t3[i].name;
									fin.close();
									fin.open("t37no.txt");
									fin >> t3[i].no;
									fin.close();
									fin.open("t37key.txt");
									fin >> t3[i].key;
									fin.close();
									fin.open("t37pt.txt");
									fin >> t3[i].pt;
									fin.close();
									if(na==t3[i].name && vno==t3[i].no && skey== t3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t3[i].pt[0]-'0')+(t3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t3[i].pt[2]-'0')+(t3[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t37name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t37no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t37key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t37pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";system("pause");
                                        break;
                                    }
                                }
                                   if(i==8)
									{

									fin.open("t38name.txt");
									fin >> t3[i].name;
									fin.close();
									fin.open("t38no.txt");
									fin >> t3[i].no;
									fin.close();
									fin.open("t38key.txt");
									fin >> t3[i].key;
									fin.close();
									fin.open("t38pt.txt");
									fin >> t3[i].pt;
									fin.close();
									if(na==t3[i].name && vno==t3[i].no && skey== t3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t3[i].pt[0]-'0')+(t3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t3[i].pt[2]-'0')+(t3[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t38name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t38no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t38key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t38pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";system("pause");
                                        break;
                                    }
                                }
                                if(i==9)
									{

									fin.open("t39name.txt");
									fin >> t3[i].name;
									fin.close();
									fin.open("t39no.txt");
									fin >> t3[i].no;
									fin.close();
									fin.open("t39key.txt");
									fin >> t3[i].key;
									fin.close();
									fin.open("t39pt.txt");
									fin >> t3[i].pt;
									fin.close();
									if(na==t3[i].name && vno==t3[i].no && skey== t3[i].key)
                                    {
                                        cout << "VEHICLE FOUND!\n";
                                        system("pause");
                                        cout << "AMOUNT TO BE PAID\n";
                                        pp= 24*((10*(timeofdep[0]-'0')+(timeofdep[1]-'0'))-(10*(t3[i].pt[0]-'0')+(t3[i].pt[1]-'0')))+((10*(timeofdep[2]-'0')+(timeofdep[3]-'0'))-(10*(t3[i].pt[2]-'0')+(t3[i].pt[3]-'0')));
                                        cout << 50*pp;
                                        system("pause");
                                        fin.open("amountcoll.txt");
                                 fin >> amountcoll;fin.close();
								amountcoll=amountcoll+50*pp;
								fout.open("amountcoll.txt",ios::ate);
								fout<< amountcoll;
								fout.close();
								       fout.open("t39name.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t39no.txt",ios::ate);
									fout << "free";
									fout.close();
									fout.open("t39key.txt",ios::ate);
									fout <<"free";
									fout.close();
									fout.open("t39pt.txt",ios::ate);
									fout << "free";
									fout.close();

                                        break;
                                    }
                                    else{
                                        cout << "VEHICLE NOT FOUND\n";system("pause");
                                        break;
                                    }
                                }

                                }





								system("cls");
								break;

     			    }
     			    default : cout<< "ENTER VALID NUMBER\n";
						             system("pause");
						             system("cls");
									 break;
     			}
     			system("pause");
     			break;

            }
        case 7:
            {
                abc=true;
                break;

            }


	 }
	 if(abc==true)
     {
         cout << "WELCOME BACK AGAIN!\n";
         system("pause");
         break;

     }


	}
}
