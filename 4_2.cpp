/*
2. WAP to get and display N numbers of Fast Food cafe
information using encapsulation and use of default
constructor by including below mentioned attributes:
- cafe_id
- cafe_name
- cafe_type (like rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
- cafe_staff_quantity
Output:
Enter the Number of Cafe Details you Want : 2
Cafe Details 1
Enter Cafe ID : 101
Enter Cafe Name : Starbucks
Enter Cafe Type : Coffee
Enter Cafe Rating : 4
Enter Cafe Location : SUrat
Enter Cafe Established Year : 2022
Enter Cafe Staff Quantity : 45
 Cafe ID is : 101
 Cafe Name is : Starbucks
 Cafe Type is : Coffee
 Cafe Location is : SUrat
 Cafe Established Year is : 2022
 Cafe Staff Quantity is : 45
Cafe Details 2
Enter Cafe ID : 102
Enter Cafe Name : CafeCoffeeDay
Enter Cafe Type : Coffee
Enter Cafe Rating : 4
Enter Cafe Location : Surat
Enter Cafe Established Year : 2019
Enter Cafe Staff Quantity : 35
 Cafe ID is : 102
 Cafe Name is : CafeCoffeeDay
 Cafe Type is : Coffee
 Cafe Location is : Surat
 Cafe Established Year is : 2019
 Cafe Staff Quantity is : 35
*/
#include<iostream>
#include<string.h>
using namespace std;
class Cafe{
	int id;
	char name[20];
	char type[20];
	int rating;
	char location[20];
	char locationc[20];
	int establish_year;
	int staff_quantity;
	public:
		Cafe(){
			cout<<"Enter Cafe ID : ";
			cin>>id;
			cout<<"Enter Cafe Name : ";
			cin>>name;
			cout<<"Enter Cafe Type : ";
			cin>>type;
			cout<<"Enter Cafe Rating : ";
			cin>>rating;
			cout<<"Enter Cafe Location : ";
			cin>>location;
			cout<<"Enter Cafe Established Year : ";
			cin>>establish_year;
			cout<<"Enter Cafe Staff Quantity : ";
			cin>>staff_quantity;
			
			cout<<" Cafe ID is : "<<id<<endl;
			cout<<" Cafe Name is : "<<name<<endl;
			cout<<" Cafe Type is : "<<type<<endl;
			cout<<" Cafe Location is : "<<location<<endl;
			cout<<" Cafe Established Year is : "<<establish_year<<endl;
			cout<<" Cafe Staff Quantity is : "<<staff_quantity<<endl;
		
		}
};
int main(){
	int i,n;
	cout<<"Enter the Number of Cafe Details you Want : ";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"Cafe Details "<<i+1<<endl;
		Cafe();
	}
		
}
