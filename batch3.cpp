#include<iostream>
#include<string.h>
using namespace std;
int q,i,nd;
char ns[25];
class personal_info
{
	char name[25],dob[10],gen;
	int age;
    float height,weight,chest;
    public:
    	void get_data();
    	void put_data();
};
class family_bg
{
	char m_n[20],f_n[20],foc[25],moc[25],p_address[3][20];
	int n_siblings,f_age,m_age;
	public:
		void f_background();
		void df_background();
};
class qualifications
{
	float ssc_m,i_gpa,degree;
	char a_q[5][25];
	public:
		void get_quali();
		void put_quali();
};
class diet
{
	char d[7][10];
	public:
		void update_diet();
		void d_diet();
};
void personal_info::get_data()
{
	cout<<"Enter name of the solider:";
	cin>>name;strcpy(ns,name);
	cout<<"\n\t\t Gender(M/F) :";
	cin>>gen;
	cout<<"\n\t\t    dob(d/m/y):";
	cin>>dob;
	cout<<"\nPhysical Fitness:";
	cout<<"\nWeight(in kg):";
	cin>>weight;
	cout<<"\nHeight(in ft):";
	cin>>height;
	cout<<"\nChest(in cm):";
	cin>>chest;
}
void personal_info::put_data()
{
	system("cls");
	cout<<"Personal Detail of the solider is:";
	cout<<"Name :"<<name;
	cout<<"\ngen:"<<gen;
	cout<<"\nDate of Birth:"<<dob;
	cout<<"\nPhysical Fitness:";
	cout<<"\nheight(in ft):"<<height;
	cout<<"\nWeight(in kg):"<<weight;
	cout<<"\nChest(in cm):"<<chest;
}
void qualifications::get_quali()
{
	cout<<"Enter S.S.C marks(G.P.A) of "<<ns<<":";
	cin>>ssc_m;
	cout<<"\nEnter Inter marks(G.P.A) "<<ns<<":";
	cin>>i_gpa;
	cout<<"\nEnter Degree C.G.P.A "<<ns<<":";
	cin>>degree;
	cout<<"\nHow many additional qualifications of "<<ns;
	cin>>q;
	cout<<"\n"<<ns<<"Please write your all qualifications";
	for(i=0;i<q;i++)
	cin>>a_q[i];
}
void qualifications::put_quali()
{
	cout<<"Qualifications of "<<ns;
	cout<<"10th Marks:"<<ssc_m;
	cout<<"\nInter marks:"<<i_gpa;
	cout<<"\nDegree C.G.P.A:"<<degree;
	cout<<"\n Additional Qualifications of the solider:";
	for(i=0;i<q;i++)
	{
	cout<<a_q[i];cout<<"\n";
}}
void diet::update_diet()
{
	int i;
	cout<<"Enter diet of the "<<ns;
	cout<<"\nNo.of items in diet:";
	cin>>nd;
	for(i=0;i<nd;i++)
	cin>>d[i];
}
void diet::d_diet()
{
	int i;
	cout<<"Diet of the "<<ns;
	cout<<"\n";
	for(i=0;i<nd;i++)
	{
	cout<<d[i];cout<<"\n";
}}
void family_bg::f_background()
{
	int j;
	cout<<"Family Back ground of the solider:";
	cout<<"\nEnter Father name:";
	cin>>f_n;
	cout<<"\nEnter father Age:";
	cin>>f_age;
	cout<<"\nEnter occupation of the Father:";
	cin>>foc;
	cout<<"\nEnter Mother Name:";
	cin>>m_n;
	cout<<"\nEnter Mother Age";
	cin>>m_age;
	cout<<"\nEnter Mother occupation:";
	cin>>moc;
	cout<<"\nNumber of Siblings For solider:";
	cin>>n_siblings;
	cout<<"\nEnter permanent address:";
	for(j=0;j<3;j++)
	cin>>p_address[j];
}
void family_bg::df_background()
{
	int j;
	cout<<"Family Background of the solider:";
	cout<<"\nFather details:";
	cout<<"\n\tFather name:"<<f_n;
	cout<<"\n\t Father age:"<<f_age;
	cout<<"\n  Father occupation:"<<foc;
	cout<<"=========================================================================================";
	cout<<"\nMother Details:";
	cout<<"\n\tMother name:"<<m_n;
	cout<<"\n\t Mother age:"<<m_age;
	cout<<"\n  Mother occupation:"<<moc;
	cout<<"\n\nPermanent Address of the solider:";
	cout<<"\n\t\t\t";
	for(j=0;j<3;j++)
	{
	cout<<p_address[j];cout<<"\n";
}}
main()
{
	int ch,c;
	class personal_info pi;
	class qualifications qi;
	class family_bg fb;
	class diet sd;
	do{
		system("cls");
	cout<<"\t\t\t\t\t\t\t\t\tWELCOME TO INDIAN ARMY(By indian govt...)\n";
	cout<<"\t\t\tEnter \n\t\t\t1.To enter Solider details\n\t\t\t2.To Get Solider Details\n\t\t\t3.To enter solider";
	cout<<"qualifications\n\t\t\t4.To get solider qualifications\n\t\t\t5.To enter Family background\n\t\t\t6.Dispaly Family details";
	cout<<"\n\t\t\t7.To enter diet\n\t\t\t8.To get diet of the solider\n\t\t\t9.To exit\nEnter The choice";
    cin>>ch;
	switch(ch)
	{
	case 1:system("cls");pi.get_data();break;
	case 2:system("cls");pi.put_data();break;
	case 3:system("cls");cout<<"\t\t\t\tWELCOME TO INDIAN ARMY(By indian govt...)\n";
	       qi.get_quali();break;
   case 4:system("cls");cout<<"\t\t\t\tWELCOME TO INDIAN ARMY(By indian govt...)\n";
	       qi.put_quali();break;
   case 5:system("cls");cout<<"\t\t\t\tWELCOME TO INDIAN ARMY(By indian govt...)\n";fb.f_background();break;
   case 6:system("cls");cout<<"\t\t\t\tWELCOME TO INDIAN ARMY(By indian govt...)\n";fb.df_background();break;   
   case 7:system("cls");cout<<"\t\t\t\tWELCOME TO INDIAN ARMY(By indian govt...)\n";
          sd.update_diet();break;
   case 8:system("cls");cout<<"\t\t\t\tWELCOME TO INDIAN ARMY(By indian govt...)\n";
          sd.d_diet();break;
    case 9:system("cls");cout<<"\n\t\t\tThanks For Visiting\n\t\t\t-Govt of India";break;
}
cout<<"\nEnter 1 to continue otherwise 0";cin>>c;
}while(c);}

