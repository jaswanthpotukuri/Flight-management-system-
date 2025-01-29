
#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int PNR = 17082005;

void pnrCount(){
    PNR++;
}

class flightManagementSystem{
    public:
    int pnr,from,to,age,paym,pin,bnk;
    long long int dateOfJourney,cnum,crdnum;
    string expdate,cvv,userid,pass;
    char gender;
    int flino;
    string at,dt;
    string mode;
    string flight;
    int enterPNR,one;
    int cost;
};

class bookingInfo : public flightManagementSystem{
    public :
        void domesticFligth(){
            cout<< endl;
            cout<< "Enter Date of journey(DDMMYYYY)"<< endl;
            cin >> dateOfJourney;
            cout << endl;
            cout << "(1) CHENNAI (2) VIZAG (3) BANGLORE (4)DELHI"<<endl<<endl;
            cout << "Enter from city : ";
            cin >> from;
            cout << endl;
            cout << "Enter Destination city : ";
            cin >> to;
            cout << endl << endl << endl;
            if(from == 1 && to == 2 || from == 2 && to == 1){
                cout << "Airline :                Departure :             Arrival :            Price :            Category : "<<endl;
                cout << "1. Indigo                14:00                   14:50                5200/-             Refundable"<<endl;
                cout << "2. Air India             06:00                   07:50                5720/-             Refundable"<<endl;
                cout << "3. Akasa Airlines        19:00                   19:50                4275/-             Refundable"<<endl;
                cout << "Enter Your Preferred Flight : ";
                cin >> flino;
                cout << endl << endl;
                switch(flino){
                    case 1 : cout << "Flight Selected : Indigo"<<endl;
                    cout << "Flight Price : 5200/-"<<endl;
                    cout << "Departure : 14:00"<<endl <<"Arrival : 14:50"<<endl;
                    flight = "Indigo";
                    cost = 5200;
                    dt = "14:00";
                    at = "14:50";
                    break;
                    case 2 : cout << "Flight Selected : Air India"<<endl;
                    cout << "Flight Price : 5720/-"<<endl;
                    cout << "Departure : 06:00"<<endl <<"Arrival : 07:50"<<endl;
                    flight = "Air India";
                    cost = 5720;
                    dt = "06:00";
                    at = "07:50";
                    break;
                    case 3 : cout << "Flight Selected : Akasa Airlines"<<endl;
                    cout << "Flight Price : 4275/-"<<endl;
                    cout << "Departure : 19:00"<<endl <<"Arrival : 19:50"<<endl;
                    flight = "Akasa Airlines";
                    cost = 4275;
                    dt = "19:00";
                    at = "19:50";
                    break;
                    
                }
                
            }
            else if(from == 1 && to == 3 || from == 3 && to == 1){
                cout << "Airline :             Departure :        Arrival :        Price :        Category : "<<endl;
                cout << "1. Indigo             11:00              11:45            3262/-         Refundable"<<endl;
                cout << "2. Air India          00:30              01:50            3125/-         Refundable"<<endl;
                cout << "3. Akasa Airlines     07:00              07:50            4725/-         Refundable"<<endl;
                cin >> flino;
                cout << endl << endl;
                switch(flino){
                    case 1 : cout << "Flight Selected : Indigo"<<endl;
                    cout << "Flight Price : 3262/-"<<endl;
                    cout << "Departure : 11:00"<<endl <<"Arrival : 11:45"<<endl;
                    flight = "Indigo";
                    cost = 3262;
                    dt = "11:00";
                    at = "11:45";
                    break;
                    case 2 : cout << "Flight Selected : Air India"<<endl;
                    cout << "Flight Price : 3125/-"<<endl;
                    cout << "Departure : 00:30"<<endl <<"Arrival : 01:50"<<endl;
                    flight = "Air India";
                    dt = "00:30";
                    at = "01:50";
                    cost = 3125;
                    break;
                    case 3 : cout << "Flight Selected : Akasa Airlines"<<endl;
                    cout << "Flight Price : 4275/-"<<endl;
                    cout << "Departure : 07:00"<<endl <<"Arrival : 07:50"<<endl;
                    flight = "Akasa Airlines";
                    cost = 4725;
                    dt = "07:00";
                    at = "07:50";
                    break;
                    
                }
                
            }
            else if(from == 1 && to == 4 || from == 4 && to == 1){
                cout << "Airline :            Departure :        Arrival :        Price :        Category : "<<endl;
                cout << "1. Indigo            22:00              23:45            7262/-         Refundable"<<endl;
                cout << "2. Air India         01:30              02:50            2725/-         Refundable"<<endl;
                cout << "3. Akasa Airlines    07:00              07:50            4725/-         Refundable"<<endl;
                cin >> flino;
                cout << endl << endl;
                switch(flino){
                    case 1 : cout << "Flight Selected : Indigo"<<endl;
                    cout << "Flight Price : 7262/-"<<endl;
                    cout << "Departure : 22:00"<<endl <<"Arrival : 23:45"<<endl;
                    flight = "Indigo";
                    cost = 7262;
                    dt = "22:00";
                    at = "23:45";
                    break;
                    case 2 : cout << "Flight Selected : Air India"<<endl;
                    cout << "Flight Price : 2725/-"<<endl;
                    cout << "Departure : 01:30"<<endl <<"Arrival : 02:50"<<endl;
                    flight = "Air India";
                    cost = 2725;
                    dt = "01:30";
                    at = "02:50";
                    break;
                    case 3 : cout << "Flight Selected : Akasa Airlines"<<endl;
                    cout << "Flight Price : 4725/-"<<endl;
                    cout << "Departure : 07:00"<<endl <<"Arrival : 07:50"<<endl;
                    flight = "Akasa Airlines";
                    cost = 4725;
                    dt = "07:00";
                    at = "07:50";
                    break;
                    
                }
                
            }
            else if(from == 2 && to == 3 || from == 3 && to == 2){
                cout << "Airline :             Departure :        Arrival :        Price :         Category : "<<endl;
                cout << "1. Indigo             12:00              13:45            5433/-          Refundable"<<endl;
                cout << "2. Air India          06:30              07:50            4567/-          Refundable"<<endl;
                cout << "3. Akasa Airlines     18:00              19:50            5678/-          Refundable"<<endl;
                cin >> flino;
                cout << endl << endl;
                switch(flino){
                    case 1 : cout << "Flight Selected : Indigo"<<endl;
                    cout << "Flight Price : 3262/-"<<endl;
                    cout << "Departure : 12:00"<<endl <<"Arrival : 13:45"<<endl;
                    flight = "Indigo";
                    cost = 5433;
                    dt = "12:00";
                    at = "13:45";
                    break;
                    case 2 : cout << "Flight Selected : Air India"<<endl;
                    cout << "Flight Price : 3125/-"<<endl;
                    cout << "Departure : 06:30"<<endl <<"Arrival : 07:50"<<endl;
                    flight = "Air India";
                    cost = 4567;
                    dt = "06:30";
                    at = "07:50";
                    break;
                    case 3 : cout << "Flight Selected : Akasa Airlines"<<endl;
                    cout << "Flight Price : 4275/-"<<endl;
                    cout << "Departure : 18:00"<<endl <<"Arrival : 19:50"<<endl;
                    flight = "Akasa Airlines";
                    cost = 5678;
                    dt = "18:00";
                    at = "19:50";
                    break;
                    
                }
                
            }
            else if(from == 2 && to == 4 || from == 4 && to == 2){
                cout << "Airline :             Departure :         Arrival :        Price :        Category : "<<endl;
                cout << "1. Indigo             11:00               11:45            4598/-         Refundable"<<endl;
                cout << "2. Air India          00:30               01:50            3525/-         Refundable"<<endl;
                cout << "3. Akasa Airlines     07:00               07:50            4625/-         Refundable"<<endl;
                cin >> flino;
                cout << endl << endl;
                switch(flino){
                    case 1 : cout << "Flight Selected : Indigo"<<endl;
                    cout << "Flight Price : 4598/-"<<endl;
                    cout << "Departure : 11:00"<<endl <<"Arrival : 11:45"<<endl;
                    flight = "Indigo";
                    cost = 4598;
                    dt = "11:00";
                    at = "11:45";
                    break;
                    case 2 : cout << "Flight Selected : Air India"<<endl;
                    cout << "Flight Price : 3525/-"<<endl;
                    cout << "Departure : 00:30"<<endl <<"Arrival : 01:50"<<endl;
                    flight = "Air India";
                    cost = 3525;
                    dt = "00:30";
                    at = "01:50";
                    break;
                    case 3 : cout << "Flight Selected : Akasa Airlines"<<endl;
                    cout << "Flight Price : 4625/-"<<endl;
                    cout << "Departure : 07:00"<<endl <<"Arrival : 07:50"<<endl;
                    flight = "Akasa Airlines";
                    cost = 4625;
                    dt = "07:00";
                    at = "07:50";
                    break;
                    
                }
                
            }
            else if(from == 3 && to == 4 || from == 4 && to == 3){
                cout << "Airline :             Departure :        Arrival :        Price :        Category : "<<endl;
                cout << "1. Indigo             11:00              11:45            5403/-         Refundable"<<endl;
                cout << "2. Air India          00:30              01:50            4963/-         Refundable"<<endl;
                cout << "3. Akasa Airlines     07:00              07:50            3254/-         Refundable"<<endl;
                cin >> flino;
                cout << endl << endl;
                switch(flino){
                    case 1 : cout << "Flight Selected : Indigo"<<endl;
                    cout << "Flight Price : 5403/-"<<endl;
                    cout << "Departure : 11:00"<<endl <<"Arrival : 11:45"<<endl;
                    flight = "Indigo";
                    cost = 5403;
                    dt = "11:00";
                    at = "11:45";
                    break;
                    case 2 : cout << "Flight Selected : Air India"<<endl;
                    cout << "Flight Price : 4963/-"<<endl;
                    cout << "Departure : 00:30"<<endl <<"Arrival : 01:50"<<endl;
                    flight = "Air India";
                    cost = 4963;
                    dt = "00:30";
                    at = "07:50";
                    break;
                    case 3 : cout << "Flight Selected : Akasa Airlines"<<endl;
                    cout << "Flight Price : 3254/-"<<endl;
                    cout << "Departure : 07:00"<<endl <<"Arrival : 07:50"<<endl;
                    flight = "Akasa Airlines";
                    cost = 3254;
                    dt = "07:00";
                    at = "07:50";
                    break;
                    
                }
                
            }
            else if(from==to){
                cout << "From city and Destination city should not be same !!! "<<endl;
                domesticFligth();
                
            }
            else{
                cout << "You entered wrong input !!! "<<endl;
                domesticFligth();
                
            }
            
        }

};


class PassengerDetails : public bookingInfo{
    public :
    string lsname,frname,email;
    public :
    void getData(){
        cout << "Enter Passenger Details"<<endl;
        cout << "Enter First name : ";
        cin >> frname;
        cout << "Enter Last name : ";
        cin >> lsname;
        cout << "Gender (m for Male # f for Female) : ";
        cin >> gender;
        cout << "Age : ";
        cin >> age;
        cout << "emali-id : ";
        cin >> email;
        cout << "Contact No. : ";
        cin >> cnum;
        cout << endl << endl;
        
    }

}objGlob;

class PaymentDetails : public PassengerDetails{
    public :
        void payment(){
            cout << " How would you like to pay ?"<<endl<<endl;
            cout << " 1. Debit Card"<<endl;
            cout << " 2. Credit Card"<<endl;
            cout << " 3. Net Banking"<<endl<<endl;
            cout << "Enter your choice : ";
            cin >> paym;
            if(paym == 1){
                cout << "Enter Card No. : ";
                cin >> crdnum;
                cout << "Enter Expiry Date : ";
                cin >> expdate;
                cout << "Enter CVV : ";
                cin >> cvv;
                cout << "Enter PIN : ";
                cin >> pin;
                mode = "Debit Card";
                
            }
            else if(paym == 2){
                cout << "Enter Card No. : ";
                cin >> crdnum;
                cout << "Enter Expiry Date : ";
                cin >> expdate;
                cout << "Enter CVV : ";
                cin >> cvv;
                cout << "Enter PIN : ";
                cin >> pin;
                mode = "Credit Card";
                
            }
            else if(paym == 3){
                cout << "1. HDFC BANK"<<endl;
                cout << "2. IDFC BANK"<<endl;
                cout << "3. ICICI BANK"<<endl;
                cout << "4. DCB BANK"<<endl;
                cout << endl << endl;
                cout << "Enter your Bank : ";
                cin >> bnk;
                cout << endl ;
                cout << "Enter User ID : ";
                cin >> userid;
                cout << "Enter Password : ";
                cin >> pass;
                mode = "Net Banking";
                
            }
            
        }
};

class EndDetails : public PaymentDetails{
    public :
    int cnc = 1;
    void endtag(){
        cout << "Your payment successfull !!!"<<endl << endl;
        cout << endl << endl ;
        cout << "Payment mode : "<<mode<<endl;
        cout <<"************************************************************************************************"<<endl;
        cout << "Ticket Details : "<<endl;
        cout << "PNR : "<<PNR<<endl;
        cout << "Flight : "<<flight<<endl;
        cout <<"************************************************************************************************"<<endl;
        cout <<"Flight booked successfully, Have a great journey"<<endl;
        cout <<"************************************************************************************************"<<endl;
        
    }
};

class cancelTicket : public EndDetails{
    public :
    void cancel(){
        cout << "Enter PNR number : ";
        cin >> enterPNR;
        cout << endl << endl << "Enter 1 to cancel the ticket"<<endl;
        cin >> one;
        cout << endl << "Succesfully cancelled the ticket money will be refunded in a week!"<<endl;
        cnc = 0;
        
    }
};

void showData(){
}

int main(){
    EndDetails obj1;
    cancelTicket obj2;
    //ShowTicket obj3;
    int option,select,sel,input;
    do{
        system("CLS");
        cout << " Welcome To Flight Reservation System"<<endl;
        cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
        cout << " Book your Flight tickets at affordable prices !!!!"<<endl;
        cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>"<<endl;
        cout << endl << endl;
        cout << " 1. Book a flight"<<endl;
        cout << " 2. Cancel Flight"<<endl;
        cout << " 3. Exit"<<endl;
        cout << endl << "Enter your choice : ";
        cin >> option;
        switch(option){
            case 1 :
            system("CLS");
            cout << endl << endl << "1. Domestic Flights"<<endl << "2. International Flights"<<endl;
            cout << endl << "Please enter your option :";
            cin >> select ;
            switch(select){
                case 1 :
                pnrCount();
                obj1.domesticFligth();
                showData();
                obj1.payment();
                obj1.endtag();
                break;
                case 2 : cout << "No International Flights available at this moment"<<endl;
                break;
                
            }
            break;
            case 2 :
            system("CLS");
            obj2.cancel();
            break;
            case 3 :
            system("CLS");
            cout << "END OF THE CODE";
            return 0;
            break;
            default : return main();
            
        }
        cout<<endl << endl << endl << "Do you wish to continue : "<< endl;
        cout << "Press 1 to continue # Press 0 to exit"<<endl;
        cin >> input;
        
    }while(input==1);
    return 0;
}