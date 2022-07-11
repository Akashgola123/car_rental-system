# include <iostream>
# include <string>
# include <fstream>
using namespace std;
void login_main();
void main_menu();
int main(){
    cout<<"\t\t\t-----------------------------------------------------\t\t\t"<<endl;
    cout<<"\t\t\t                                                     \t\t\t"<<endl;
    cout<<"\t\t\t              Welcome to car rental system               "<<endl;
    cout<<"\t\t\t                                                     \t\t\t"<<endl;
    cout<<"\t\t\t-----------------------------------------------------\t\t\t"<<endl;
    cout << "                                                             " << endl;
    cout << "\t|Press 1 To login to car rental      |" << endl;
    // cout << "\t|Press 2 To Register to car rental   |" << endl;
    cout << "\t|Press 2 To Main_menu to car rental  |" << endl;
    cout << "\t|Press 3 To Exit to libary           |" << endl;
    cout << "Enter the Number above the option : " << endl;
    int a;
    scanf("%d", &a);
    switch(a){
        case 1: 
            login_main();
            break;

        case 2:
            main_menu();
            break;

         case 3:
            exit;
            cout << "\t\t thank you ! \n"<< endl;    
            break;
        default:
            cout << "Enter the valid number above option" << endl;
            break;
      
    }
}
////////////////////////////////////////////////login system car rental system ********************************
void login_main(){
    void login();
    void Register();
    void forget_password();
    cout<<"\t\t\t-----------------------------------------------------\t\t\t\t"<<endl;
    cout<<"\t\t\t                                                     \t\t\t"<<endl;
    cout<<"\t\t\t              Welcome to  login car rental system                "<<endl;
    cout<<"\t\t\t                                                     \t\t\t\t"<<endl;
    cout<<"\t\t\t-----------------------------------------------------\t\t\t\t"<<endl;
    cout << "                                                             " << endl;
    cout << "\t|Press 1 To login to car rental            |" << endl;
    cout << "\t|Press 2 To Register to car rental         |" << endl;
    cout << "\t|Press 3 To forget password to car rental  |" << endl;
    cout << "\t|Press 4 To Exit to car rentaal system     |" << endl;
    cout << "Enter the Number above the option : " << endl;
    int b;
    scanf("%d", &b);
    switch(b){
        case 1: 
            login();
            break;

        case 2:
            Register();
            break;

        case 3:
            forget_password();
            break;

         case 4:
            cout << "\t\t thank you ! \n"<< endl;    
            break;
        default:
            cout << "Enter the valid number above option" << endl;
            break;
      
    }
    login_main();

}
void login(){
     int count;
    string userid,password,id,pass;
    system("cls");
    cout<<"\t\t\t Please Enter the Username and Password   \n\n";
    cout<<"Username"<<endl;
    cin>>userid;
    cout<<"Password"<<endl;
    cin>>password;
// ifstream class is want be read a file 
    ifstream input("car_recond.txt");

    while(input>>id>>pass){
        if(id==userid && pass==password){
            count =1;
            system("cls");
        }
    }
    input.close();
    if (count==1){
        cout<<userid<<"\n Your Logiin is Successfull  \n  Thanks for logging in ! \n";
        main_menu();
    }
    else{
        cout<<"\n LOGIN ERROR!  \n  please check your username and password and try again \n";
        main();
    }
    login_main();
    }
void forget_password(){
    int option;
    system("cls");
    cout<<"\t\t\t You forgot your password no worries \n";
    cout<<"Press 1 to sreach your id by username  "<<endl;
    cout<<"Press 2 to go main menu"<<endl;
    cout<<"\t\t\t Enter your choice : ";
    cin >> option;

    switch(option)
    {
        case 1:
        {
            int count = 0;
            string suserid,sid,spass;
            cout<<"\n\t\t\t enter the username which you remember  : ";
            cin>>suserid;

            ifstream f2("car_recond.txt");
            while(f2>>sid>>spass)
            {
                if(sid==suserid){
                    count =1;
                }
            }
            f2.close();
            if(count==1){
                cout<<"\n\n your account is found!  \n";
                cout<<"\n\n your password is : "<<spass;
                login_main();
            }
            else
            {
                cout<<"\n\t sorry! your account is not found! \n";
                login_main();
            }
            break;
            
        }
        case 2: {
            login_main();
        }
        default: {
            cout<<"\t\t\t wrong choice ! Please try again  "<<endl;
            forget_password();
        }
    }
    login_main();
}
void Register(){
    string ruserid,rpassword,rid,rpass;
    system("cls");
    cout<<"\t\t\t Enter the username  :  ";
    cin>>ruserid;
    cout<<"\t\t\t Enter the password :   ";
    cin>>rpassword;
// ofstream class is we want to write a in txt file 
    ofstream f1("car_recond.txt" , ios::app);
    f1<<ruserid<< " " <<rpassword<<endl;
    system("cls");
    cout<<"\n\t\t\t Registration is succesfull!  \n";
    main();
    login_main();
}
//************************************************Main_menu to rental system************************************************
void main_menu(){
    void booking();
    void location();
    void car_options();
    void car_returns();
    void payment();
    cout<<"\t\t\t----------------------------------------------------------\t\t\t\t"<<endl;
    cout<<"\t\t\t                                                     \t\t\t"<<endl;
    cout<<"\t\t\t             Welcome to main_menu car rental system               "<<endl;
    cout<<"\t\t\t                                                     \t\t\t\t"<<endl;
    cout<<"\t\t\t----------------------------------------------------------\t\t\t\t"<<endl;
    cout << "                                                             " << endl;
    cout << "\t|Press 1 To car_option to car rental         |" << endl;
    cout << "\t|Press 2 To booking to car rental            |" << endl;
    cout << "\t|Press 3 To location of place to car rental  |" << endl;
    cout << "\t|Press 4 To car_returns to car rental        |" << endl;
    cout << "\t|Press 5 To payment to car rental            |" << endl;
    cout << "\t|Press 6 To Exit to car rentaal system       |" << endl;
    cout << "\t|Press 7 To main to car rentaal system       |" << endl;
    cout << "Enter the Number above the option : " << endl;
    int c;
    cin >> c;
    switch (c) {
        case 1:
            car_options();
            break;

        case 2:
            booking();
            break;

        case 3:
            location();
            break;

        case 4:
            car_returns();
            break;

        case 5:
           cout<<"Thank you!"<<endl;
           break;

        case 6:
           main();
           break;
        default:
            cout << "Enter the valid number above option" << endl;
            main_menu();
            break;

    }
    main();
}
void location(){
    string city;
    string place;
    string op;
    cout<<"Please enter your city"<<endl;
    cin>>city;
    cout<<"Please enter your pick up place"<<endl;
    cin>>place;
    cout<<"Enter the how many day do you want car :- "<<endl;
    cin>>op;
    ofstream f1("location_recornd.txt", ios::app);
    f1<<city<< " " <<place<<" "<<op<<endl;
    cout<<"car are rent successfully!!!"<<endl;
    //main_menu();
}
void booking(){
    string name;
    string last_name;
    string national_id;
    string phone_no;
    // string kl;
    cout<<"Enter the First name of the person"<<endl;
    cin>>name;
    cout<<"Enter the last name of the person"<<endl;
    cin>>last_name;
    cout<<"Enter the national_id"<<endl;
    cin>>national_id;
    cout<<"Enter the phone_no"<<endl;
    cin>>phone_no;
    ofstream f1("booking_recond.txt" , ios::app);
    f1<<name<< " "<<last_name<<" " <<national_id<<" "<<phone_no<<endl;
    // cout<<"do you want to continue (YES/NO)"<<endl;
    // scanf("%string",&kl);
    // if(kl == "YES"){
    //     location();
    // }
    // system("cls");
    location();
}
void payment(){
    string sname,sname2,first_name,last_name,s_national;
    int Amount;
    int total;
    int actual_amount;
    cout<<"Enter the amount to pay"<<endl;
    cin>>Amount;
    cout<<"The actual_amount of car_rental_payment "<<endl;
    cin>>actual_amount;
    total = Amount - actual_amount;
    cout<<"The return amount is "<<total<<"Rs"<<endl;
    cout<<"payment successfully!"<<endl;
    ofstream pay("payment_recond.txt");
    pay<<Amount<<" "<<actual_amount<<" "<<total<<endl;
    cout<<"\n\t\t Enter the first name and last name: "<<endl;
    cin>>sname>>sname2;
    int count = 0;
    ifstream f2("booking_recond.txt");
    while(f2>>first_name>>last_name>>s_national){
        if(first_name==sname){
            if(last_name==sname2){
                count = 1;
            }
        }
    }
    f2.close();
    if(count==1){
        ofstream del("delete.recond.txt");
        del<<sname<<" "<<last_name<<" "<<first_name<<" "<<s_national<<endl;
        cout<<"okay done"<<endl;
        

    }
    else{
        cout<<"Not found in recond sorry try again!!"<<endl;
    }
}
void car_returns(){
    int price ;
    int distance;
    int price0 = 15;
    int actual_amount;
    int price1 = 12;
    int actual_amount1;
    int price2 = 10;
    int actual_amount2;
    int price3 = 9;
    int actual_amount3;
    // string sname,first_name,s_national;
    cout<<"price rent of the car in rental system "<<endl;
    cout<<"|1.Bugguti has price 15per/km|"<<endl;
    cout<<"|2.lambo has price 12 per/km |"<<endl;
    cout<<"|3.BMW has price 10 per/km   |"<<endl;
    cout<<"|4.Audi has price 9 per/km   |"<<endl;
    cout<<"Enter the option of the car rent :-"<<endl;
    cin>>price;
    switch(price){
        case 1:
            cout<<"Buggati"<<endl;
            cout<<"price :- 15per/km"<<endl;
            cout<<"Enter the distance in km:- "<<endl;
            cin>>distance;
            actual_amount = price0 * distance;
            cout<<"The actaul amount of price is "<<actual_amount<<"Rs"<<endl;
            payment();
            break;
        case 2:
            cout<<"lambo"<<endl;
            cout<<"price :- 12per/km"<<endl;
            cout<<"Enter the distance in km:- "<<endl;
            cin>>distance;
            actual_amount1 = price1 * distance;
            cout<<"The actaul amount of price is "<<actual_amount1<<"Rs"<<endl;
            payment();
            break;
        case 3:
            cout<<"BMW"<<endl;
            cout<<"price :- 10per/km"<<endl;
            cout<<"Enter the distance in km:- "<<endl;
            cin>>distance;
            actual_amount1 = price2 * distance;
            cout<<"The actaul amount of price is "<<actual_amount2<<"Rs"<<endl;
            payment();
            break;
        case 4:
            cout<<"AUDi"<<endl;
            cout<<"price :- 9per/km"<<endl;
            cout<<"Enter the distance in km:- "<<endl;
            cin>>distance;
            actual_amount1 = price3 * distance;
            cout<<"The actaul amount of price is "<<actual_amount3<<"Rs"<<endl;
            payment();
            break;    
        default :
            cout<<"please Enter the correct option"<<endl;
            break;    
     }
    main_menu();
}
void car_options(){
    cout<<"\t| They are so many car option in our car rental system  |"<<endl;
    cout<<"\t| 1.Buggati |"<<endl;
    cout<<"\t| 2.lambo   |"<<endl;
    cout<<"\t| 3.bmw     |"<<endl;
    cout<<"\t| 4.Audi    |"<<endl;
    int d;
    cin >> d;
    switch(d) {
        case 1: 
            cout<<"Buggati car are selected "<<endl;
            cout<<"red"<<endl;
            cout<<"Price of rent of tne car is - 15 per/km"<<endl;
            booking();
            break;
        case 2: 
            cout<<"lambo car are selected "<<endl;
            cout<<"Yellow";
            cout<<"Price of rent of tne car is - 12.3km"<<endl;
            booking();
            break; 
        case 3: 
            cout<<"bmw car are selected"<<endl;
            cout<<"Blue";
            cout<<"Price of rent of tne car is - 11.9km"<<endl;
            booking();
            break;
        case 4: 
            cout<<"Audi car are selected"<<endl;
            cout<<"Black";
            cout<<"Price of rent of tne car is - 11.5km"<<endl;
            booking();
            break;
        default:
            cout<<"Please select car correctly"<<endl;
            break;           
    }
    main_menu();
}
