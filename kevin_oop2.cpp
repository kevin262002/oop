#include<iostream>

using namespace std;

class Data{
	
	public:
		
		int car_id;
        char car_company_name[10];
        char car_color[10];
        char car_model[10];
        int car_release_year;
};

main(){
	
	Data d1,d2,d3,d4;
// car 1	
	cout<<"Enter Car Id : ";
	cin>>d1.car_id;
	
	cout<<"Enter Car Company Name : ";
	cin>>d1.car_company_name;
	
	cout<<"Enter Car Colour : ";
	cin>>d1.car_color;
	
	cout<<"Enter Car Model : ";
	cin>>d1.car_model;
	
	cout<<"Enter Car Release Year : ";
	cin>>d1.car_release_year;
	
	cout<<d1.car_id<<endl;
	cout<<d1.car_company_name<<endl;
	cout<<d1.car_color<<endl;
	cout<<d1.car_model<<endl;
	cout<<d1.car_release_year<<endl;
	
// car 2	
	cout<<"Enter Car Id : ";
	cin>>d2.car_id;
	
	cout<<"Enter Car Company Name : ";
	cin>>d2.car_company_name;
	
	cout<<"Enter Car Colour : ";
	cin>>d2.car_color;
	
	cout<<"Enter Car Model : ";
	cin>>d2.car_model;
	
	cout<<"Enter Car Release Year : ";
	cin>>d2.car_release_year;
	
	cout<<d2.car_id<<endl;
	cout<<d2.car_company_name<<endl;
	cout<<d2.car_color<<endl;
	cout<<d2.car_model<<endl;
	cout<<d2.car_release_year<<endl;
	
//car 3	
	cout<<"Enter Car Id : ";
	cin>>d3.car_id;
	
	cout<<"Enter Car Company Name : ";
	cin>>d3.car_company_name;
	
	cout<<"Enter Car Colour : ";
	cin>>d3.car_color;
	
	cout<<"Enter Car Model : ";
	cin>>d3.car_model;
	
	cout<<"Enter Car Release Year : ";
	cin>>d3.car_release_year;
	
	cout<<d3.car_id<<endl;
	cout<<d3.car_company_name<<endl;
	cout<<d3.car_color<<endl;
	cout<<d3.car_model<<endl;
	cout<<d3.car_release_year<<endl;
	
//car 4	
	cout<<"Enter Car Id : ";
	cin>>d4.car_id;
	
	cout<<"Enter Car Company Name : ";
	cin>>d4.car_company_name;
	
	cout<<"Enter Car Colour : ";
	cin>>d4.car_color;
	
	cout<<"Enter Car Model : ";
	cin>>d4.car_model;
	
	cout<<"Enter Car Release Year : ";
	cin>>d4.car_release_year;
	
	cout<<d4.car_id<<endl;
	cout<<d4.car_company_name<<endl;
	cout<<d4.car_color<<endl;
	cout<<d4.car_model<<endl;
	cout<<d4.car_release_year<<endl;
	
	return 0;
}
