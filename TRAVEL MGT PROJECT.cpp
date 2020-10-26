#include<iostream>
#include<cmath>
#include<conio.h>
#include<vector>
#include <utility>
using namespace std;

struct cost
{
    string name;
    int no_of_person,no_of_days;
};

class admin
{
    vector<cost> l1;
    pair<string,string> a1;
    string val;
    int per,day;
public:
    int new_traval_trip();
    int show_user();
    int find_user();
    int edit_user();
    int delete_user();
    int add_trip();
    int edit_trip();
    int delete_trip();

};

int admin::add_trip()
{
    cout<<"Enter name : ";
    cin>>val;
    cout<<"Enter no of person : ";
    cin>>per;
    cout<<"Enter no of days : ";
    cin>>day;
    l1.push_back({val,per,day});

}
int admin::edit_trip()
{
    int i,total;
    total = l1.size();
    system("cls");
    cout<<"\n\nName\tperson\tday"<<endl;
    for(i=0;i!=total;i++)
    cout<<l1[i].name<<"\t"<<l1[i].no_of_person<<"\t"<<l1[i].no_of_days<<endl;
}

/*int admin::delete_trip()
{
   int i,total;
   char find_name;
   cout<<"Enter name : ";
   cin>>find_name;
   vector<int>::iterator it;
   it = find(l1.begin(),l1.end(),find_name);
   if(it != l1.end())
   {
      cout<<l1[it].name<<endl;
   }
   else
   {
      cout<<"Not exist"<<endl;
   }

}*/
int main()
{
    admin a1;
    char c;
    int choose_one;
    do
    {

       system("cls");

       cout << "Welcome To Travel Agency Management System" << endl << endl;
       cout << "Travel Agency Management Menu" << endl;
       cout << "1. New Travel Trip." << endl;
       cout << "2. Show Users." << endl;
       cout << "3. Find User." << endl;
       cout << "4. Edit User." << endl;
       cout << "5. Delete User." << endl;
       cout << "6. Add Trip." << endl;
       cout << "7. Edit Trip." << endl;
       cout << "8. Delete Trip." << endl;
       cout << "9. Exit." << endl;
       cout << "Choose One: ";
       cin >> choose_one;

       switch (choose_one)
       {
          case 1:
//           a1.new_traval_trip();
             break;
          case 2:
//           a1.show_user();
             break;
          case 3:
//           a1.find_user();
             break;
          case 4:
//           a1.edit_user();
             break;
          case 5:
//           a1.delete_user();
             break;
          case 6:
             a1.add_trip();
             break;
          case 7:
             a1.edit_trip();
             break;
          case 8:
//           a1.delete_trip();
             break;
          case 9:
             break;
          default:
             cout << "Please choose between 1 - 7. Press Enter To Continue...";
             getch();
             system("cls");
             main();
             break;
        }
       cout<<"\nDo You Wnat to Continue : y/n :";
       cin>>c;
    }while(c!='n' && c!='N');
    return 0;

}
