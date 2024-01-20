/*
1. WAP to get and display N numbers of Diamond
companies information using encapsulation and use of
parameterised constructor by including below
mentioned attributes:
- comp_id
- comp_name
- comp_staff_quantity
- comp_revenue (per year)
- comp_import_raw_diamonds (no. of raw diamonds
imported per year)
- comp_export_diamonds (no. of diamonds per year)
- comp_ceo (name of CEO of the company)
Output:
Enter The Number of Companies you Want : 2
Company 1
Enter ID of Company : 101
Enter Name of Company : Google
Enter Staff Quantity in Company : 142
Enter Revenue of Company : 145200
Enter Quantity of Raw Diamonds Imported :  124
Enter Quantity of Raw Diamonds Exported : 162
Enter Name of CEO : Sundar
 Company ID is : 101
 Company Name is : Google
 Company Staff Quantity is : 142
 Company Revenue is : 145200
 Company Yearly Imported Diamonds are : 124
 Company Yearly Exported Diamonds are : 162
 Company CEO Name is : Sundar
Company 2
Enter ID of Company : 102
Enter Name of Company : Microsoft
Enter Staff Quantity in Company : 140
Enter Revenue of Company : 143000
Enter Quantity of Raw Diamonds Imported :  120
Enter Quantity of Raw Diamonds Exported : 134
Enter Name of CEO : Bhupendra
 Company ID is : 102
 Company Name is : Microsoft
 Company Staff Quantity is : 140
 Company Revenue is : 143000
 Company Yearly Imported Diamonds are : 120
 Company Yearly Exported Diamonds are : 134
 Company CEO Name is : Bhupendra

*/
#include<iostream>
#include<string.h>
using namespace std;

class Company {
    int id;
    char name[20];
    int staff_quantity;
    int revenue;
    int import_diamond;
    int export_diamond;
    char ceo[20];

public:
    Company(int id, char name[], int staff_quantity, int revenue, int import_diamond, int export_diamond, char ceo[]) {
        this->id = id;
        strcpy(this->name, name);
        this->staff_quantity = staff_quantity;
        this->revenue = revenue;
        this->import_diamond = import_diamond;
        this->export_diamond = export_diamond;
        strcpy(this->ceo, ceo);
        
        cout<<" Company ID is : "<<id<<endl;
        cout<<" Company Name is : "<<name<<endl;
        cout<<" Company Staff Quantity is : "<<staff_quantity<<endl;
        cout<<" Company Revenue is : "<<revenue<<endl;
        cout<<" Company Yearly Imported Diamonds are : "<<import_diamond<<endl;
        cout<<" Company Yearly Exported Diamonds are : "<<export_diamond<<endl;
        cout<<" Company CEO Name is : "<<ceo<<endl;
    }
};

int main() {
    int i, n;
    cout << "Enter The Number of Companies you Want : ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << "Company " << i << endl;
        int cid;
        char cname[20];
        int total_staff;
        int income;
        int imported;
        int exported;
        char ceoname[20];

        cout << "Enter ID of Company : ";
        cin >> cid;
        cout << "Enter Name of Company : ";
        cin >> cname;
        cout << "Enter Staff Quantity in Company : ";
        cin >> total_staff;
        cout << "Enter Revenue of Company : ";
        cin >> income;
        cout << "Enter Quantity of Raw Diamonds Imported :  ";
        cin >> imported;
        cout << "Enter Quantity of Raw Diamonds Exported : ";
        cin >> exported;
        cout << "Enter Name of CEO : ";
        cin >> ceoname;

        Company company(cid, cname, total_staff, income, imported, exported, ceoname);
    }

    return 0;
}
