#include <bits/stdc++.h>
//#include "admin/updateQueue.cpp"
#include "doctor.cpp"
void error(int num){
	num++;
	cout<<endl<<"Invalid Input"<<endl;
}


int chooseDoctor(){
	cout<<"choosing doctors";
	doctor d;
	
	ifstream fin;
	fin.open("admin/records/doctors.txt");
	for (int i = 0; i < 10; ++i){
		fin.read(reinterpret_cast<char*>(&d), sizeof(doctor));
		if(d.available){
		//int x=d.patient.back();
		cout<<d.name<<" "<<d.LDAP<<" "<<d.speciality<<" "<<endl;
		}
	}
}


void takeAppointment(int num){
	cout<<endl<<"Doctors Available"<<endl;
	chooseDoctor();
	int ind;
	cout<<endl;
	cout<<"Enter Id to choose doctor"<<endl;
	cin>>ind;
	//addToQueue(num,ind);    // To be uncommented later		
	return;
	}


void patientInit(int num,patient* p){
	//patient p;
	p->LDAP=num;
	while(true){
	char x;
	cout<<endl<<"Press 1 to Take appointment"<<endl;
	cout<<"Press 2 for online discussion"<<endl;
	cout<<"Press 3 to logout"<<endl;
    //cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
	cin>>x;
	//cout<<cmd<<endl;
	int cmd=x-'0';
	//patient p;
	switch(cmd){
		case 1:{takeAppointment(num);break;}
		case 2:{p->onlineDiscussion(num);break;}
		case 3:{cout<<"Logged Out"<<endl;return;}
		default: cout<<"Invalid Value"<<endl;
	}
}
}

