#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

struct Item                    //create strcuture for items
{
	string ServiceName;
	string Code;
	float Price;
}
Items[20];                     //struct array for item

struct Bill {
	string Name;
	string Code;
	float Price;
	int tot;
	int Qt;
};                             // structure for bill


void Admin();				          // Function definition for selecting admin
void Cashier(string);			      // Function definition for selecting cashier
void Header();                        // Function definition for display header
void ViewItem();                      // Function definition for view items
void AddItem();                       // Function definition for add items
void AboutUs();                       // Function definition for view About Us
void AdminExit();                     // Function definition to Exit Program for Admin Menu 
void ViewFitnessPackageDetails();     // Function definition for view fitness package details
void ViewFoodSupplementDetails();     // Function definition for view food supplement details
void BillItems(string);               // Function definition for billing and printing the invoice
void CashierExit(string);             // Function definition for exit program for Cashier menu
void ViewItemExit();                  // Function definition for exit program to admin view menu
void ItemList();

void Header()
{
	cout << "\t\t\t\t         ___________________" << endl;
	cout << "\t\t\t\t           RATHNAYAKA GYMS   " << endl;
	cout << "\t\t\t\t         -------------------" << endl;
	cout << "" << endl;
}

int main() {
	string uname;								     //Username
	string pw;									     //Password

	Header();
	cout << "                                           |||  LOGIN  |||" << endl;
	cout << "" << endl;
	cout << "\t                              Enter Your Username: ";
	cin >> uname;									                                     //Reading entered username
	cout << "\t                              Enter Your Password: ";
	cin >> pw;									                                         //Reading entered password
	cout << "" << endl;

	if ((uname == "Admin" && pw == "a123")) {
		cout << "                                           Loggin Successfull !\n" << endl;            // Login as Administrator
		cout << "                                          Welcome Administrator" << endl;
		system("pause");
		Admin();
	}
	else if (uname == "Sam" && pw == "C01") {
		cout << "                                         Loggin Successfull !\n" << endl;             //Login as Cashier
		cout << "                                            Welcome " << uname + "!" << endl;
		system("pause");
		Cashier(uname);
	}
	else
	{

		system("cls");                                                                                // clear the command screen
		Header();
		cout << "                                           |||  LOGIN  |||" << endl;
		cout << "" << endl;
		cout << "\t\t                   USERNAME OR PASSWORD IS INCORRECT!! " << endl;
		cout << "" << endl;
		cout << "                                               Try Again " << endl;
		cout << "" << endl;
		cout << "                                       Program will be terminated" << endl;       	//Program termination  message weill appear
	}
}

void Admin() {                                       //Option Number for choosing administartor
	int op;
	system("cls");                                   // clear the command screen
	Header();
	cout << "   ADMINISTRATOR MENU" << endl;
	cout << "" << endl;
	cout << "\t\t1. View Items" << endl;							    	//View Item in the db
	cout << "\t\t2. Add Items" << endl;									    //Add new items to db
	cout << "\t\t3. About Us" << endl;								    	//View About Us in the db
	cout << "\t\t4. Exit" << endl;										    //Exit from the program
	cout << "" << endl;

	cout << "\t\tSelect- ";
	cin >> op;                                                              //selecting an option from admin menu
	cout << "" << endl;
	switch (op) {

	case 1:
		ViewItem();												        	// Calling  view item fucntion 
		system("pause");
		system("cls");													    // clear command
		Admin();                                                            // going back to Admin menu
		break;

	case 2:
		AddItem();														    //Calling Add Item function
		system("pause");
		system("cls");													    // clear command
		Admin();                                                            // going back to Admin menu
		break;

	case 3:
		AboutUs();                                                          //Calling About Us function
		system("pause");
		system("cls");													    // clear command
		Admin();                                                            // going back to Admin menu
		break;

	case 4:
		system("cls");													    // clear command
		AdminExit();

	default:
		cout << "Select Between 1-4" << endl;					            // Error message display
		system("pause");
		Admin();		                                                    // going back to Admin menu
		break;
	}
};

void Cashier(string uname) {
	int op;
	system("cls");
	Header();
	cout << "   CASHIER MENU" << endl;
	cout << "" << endl;
	cout << "\t\t1. View Fitness Package Details" << endl;					//View fitness package details in db
	cout << "\t\t2. View Fodd Supplement Details" << endl;					//View food supplement details in db
	cout << "\t\t3. Bill Items" << endl;						            //Select Items & Print Bill
	cout << "\t\t4. About Us" << endl;								    	//View About Us in the db
	cout << "\t\t5. Exit" << endl;										    //Exit from the program
	cout << "" << endl;

	cout << "\tSelect- ";									                //selecting an option from cashier menu
	cin >> op; 												                //Reading entered option
	cout << "" << endl;
	switch (op) {

	case 1:
		ViewFitnessPackageDetails();										// Calling view fitness package details function 
		system("pause");
		system("cls");												        // clear command
		Cashier(uname);							                         	// going back to cashier menu
		break;

	case 2:
		ViewFoodSupplementDetails();									    // Calling view fitness package details function
		system("pause");
		system("cls");												        // clear command
		Cashier(uname);								                        // going back to cashier menu
		break;

	case 3:
		BillItems(uname);										            //Calling function to Select Items
		system("pause");
		system("cls");												        // clear command
		Cashier(uname);								                        // going back to cashier menu
		break;
	case 4:
		AboutUs();                                                          //Calling About Us function
		system("pause");
		system("cls");													    // clear command
		Cashier(uname);                                                     // going back to Admin menu
		break;

	case 5:
		system("cls");											         	// clear command
		CashierExit(uname);                                                 //Exiting cashier menu

	default:
		cout << "Select Between 1-5" << endl;						        //Displaying error message
		system("pause");
		Cashier(uname);								                        // going back to cashier menu
		break;
	}
}

void ViewItem()
{
	int op;
	system("cls");
	Header();
	cout << "                                              | VIEW |" << endl;
	cout << "" << endl;
	cout << "\t\t1. Fitness Packages Details" << endl;		//View Fitness packages details in the db
	cout << "\t\t2. Food Supplement Details" << endl;		//View Food supplement details in the db
	cout << "\t\t3. Exit" << endl;							//Exit from the program
	cout << "" << endl;

	cout << "\t\tSelect- ";
	cin >> op;                                              //selecting an option from view
	cout << "" << endl;
	switch (op) {

	case 1:
		ViewFitnessPackageDetails();						//Calling view fitness package details function
		system("pause");
		system("cls");										// clear command
		ViewItem();                                         // going back to view item menu
		break;

	case 2:
		ViewFoodSupplementDetails();						// Calling view food supplement details fucntion 
		system("pause");
		system("cls");									    // clear command
		ViewItem();                                         // going back to view item menu
		break;

	case 3:
		system("cls");									    // clear command
		ViewItemExit();

	default:
		cout << "Select Between 1-3" << endl;			    // Error message display
		system("pause");
		ViewItemExit();		                                // going back to view menu
		break;
	}
}

void AddItem()
{
	system("cls");
	Header();
	cout << "  ADD ITEMS" << endl;
	cout << "still need to quote" << endl;
}

void AboutUs()
{
	system("cls");
	Header();
	cout << "                                          ||| ABOUT US |||" << endl;
	std::string line_;                          //reading file, in by line lines order
	cout << "" << endl;
	cout << "" << endl;
	ifstream mart("C:\\Users\\ama\\Desktop\\FP_VisualStudio\\RathnayakaGYMS\\About Us.txt"); //Viewing Fitness Package Details from the file
	if (mart.is_open()) {
		while (getline(mart, line_)) {
			std::cout << line_ << '\n';
		}

		mart.close();
	}
	else
		std::cout << "File is not found or created.Contact maintainance" << '\n'; //Error message 
	std::cin.get();
}

void AdminExit()
{
	system("cls");
	string op;                                //Variable for selection
	Header();
	cout << "                                              |  EXIT  |" << endl;
	cout << "" << endl;
	cout << "\t\t\t\t             CONFIRM EXIT?" << endl;
	cout << "\t\t\t\t             [ YES / NO ]  		" << endl;
	cout << "\t\t\t\t    [ ENTER Y FOR YES OR N FOR NO ]   " << endl;
	cin >> op;

	if (op == "y" || op == "Y")               // if selection y program will  exit completely
	{
		exit(0);
	}

	else if (op == "n" || op == "N")          // if selection n program will go to admin menu.
	{
		system("cls");                        // clear commands
		Admin();
	}

	else
	{
		cout << "\n\t\t\t\t\t   --------   INCORRECT COMMAND   --------   \n" << endl; // prints error message.
		cout << "\n\t\t\t\t\t   --------   PLEASE TRY AGAIN   --------   \n" << endl;
		AdminExit();

	}
}

void ViewItemExit()
{
	system("cls");
	string op;                                   //Variable for selection
	Header();
	cout << "                                              |  EXIT  |" << endl;
	cout << "" << endl;
	cout << "\t\t\t\t             CONFIRM EXIT?" << endl;
	cout << "\t\t\t\t             [ YES / NO ]  		" << endl;
	cout << "\t\t\t\t    [ ENTER Y FOR YES OR N FOR NO ]   " << endl;
	cin >> op;

	if (op == "y" || op == "Y")                  // if selection y program will  exit to admin menu
	{
		system("cls");                           // clear commands
		Admin();
	}

	else if (op == "n" || op == "N")             // if selection n program will go remain in admin view menu.
	{
		cout << "\t\t\t\t           BACK TO VIEW ITEMS   " << endl;
		system("pause");
		ViewItem();		                         // going back to Admin menu
	}

	else
	{
		cout << "\n\t\t\t\t\t   --------   INCORRECT COMMAND   --------   \n" << endl; // prints error message.
		cout << "\n\t\t\t\t\t   --------   PLEASE TRY AGAIN   --------   \n" << endl;
		AdminExit();

	}
}

void ViewFitnessPackageDetails()
{
	system("cls");
	Header();
	cout << "                                     | Fitness Package Details |" << endl;
	std::string line_;                                                               //reading file, in by line lines order
	cout << "" << endl;
	cout << "" << endl;
	ifstream mart("C:\\Users\\ama\\Desktop\\FP_VisualStudio\\RathnayakaGYMS\\Fitness Packages Details.txt"); //Viewing Fitness Package Details from the file
	if (mart.is_open()) {
		while (getline(mart, line_)) {
			std::cout << line_ << '\n';
		}

		mart.close();
	}
	else
		std::cout << "File is not found or created.Contact maintainance" << '\n';    //Error message 
	std::cin.get();
}

void ViewFoodSupplementDetails()
{
	system("cls");
	Header();
	cout << "                                     | Food Supplement Details |" << endl;
	std::string line_;                                              //reading file, in by line lines order
	cout << "" << endl;
	cout << "" << endl;
	ifstream mart("C:\\Users\\ama\\Desktop\\FP_VisualStudio\\RathnayakaGYMS\\Food Supplement Details.txt"); //View Food Supplement Details from the file
	if (mart.is_open()) {
		while (getline(mart, line_)) {
			std::cout << line_ << '\n';
		}

		mart.close();
	}
	else
		std::cout << "File is not found or created.Contact maintainance" << '\n';  //Error message 
	std::cin.get();
}

void BillItems(string uname)                                     //Username
{
	system("cls");
	Bill Arr[20];						                         //Array to store selected Items
	int C2 = 0, it, tot, qt, stot = 0, bal = 0, discount, subtotal, PA; // varialbe declaration for print bill
	string select, itcode;
	ItemList();
	cout << "                                      | Creat The Invoice |" << endl;
	do {
		cout << "(20 Items can be added at once)" << endl;       //messege of mazximum items can add at once
		cout << "Item quantity - ";                              //billing items quantity
		cin >> it;
		if (it > 20) {
			cout << "\t\t\t-----------Please enter less than 20-----------\n" << endl; //Error message for exceeding the maximum bill items
		}
	} while (it > 20);
	cout << "" << endl;
	while (C2 < it) {
		cout << "Enter Code:";
		cin >> itcode;
		cout << "" << endl;
		for (int c = 0; c < 20; c++) {
			if (itcode == Items[c].Code) {
				cout << "Item Name : " << Items[c].ServiceName << endl;
				cout << "Item Price :" << Items[c].Price << endl;
				Arr[c].Code = Items[c].Code;		    	//save selected item code 
				Arr[c].Name = Items[c].ServiceName;		    //save selected item name
				Arr[c].Price = Items[c].Price;				//save selected item price
				cout << "" << endl;
				cout << "Enter quantity - ";				//geting quantity of the item
				cin >> qt;
				cout << "--------------------------" << endl;
				tot = qt * Items[c].Price;				    //total sum=quantity of selected item × price of the item
				stot = stot + tot;						    //every bought item subtotal= Total of  every "total Sum"
				Arr[c].Qt = qt;					            //save quantity of the selected item
				Arr[c].tot = tot;	      	                //save of sum of the selected item
			}

		}
		C2++;                                               //increase counter variable from 1 value
	}
	if
		(stot > 5000) {
		discount = (stot * 0.5 / 100);
		subtotal = stot - (stot * 0.5 / 100);
	}
	else {
		discount = 0;
		subtotal = stot;
	}
	cout << "\t Total Amount - Rs " << stot << endl;
	cout << "\t Discount - Rs " << discount << endl;
	cout << "\t Subtotal - Rs " << subtotal << endl;
	cout << "Paid Amount - Rs ";
	cin >> PA;												                        //Enter the customer given amount
	bal = (PA - subtotal);										                    //Balance=s Paid Amount-subtotal
	cout << "Balance : " << bal << endl;					                        //Display the balance

	system("pause");
	                                                                               //Displaying the bill
	system("cls");
	Header();
	cout << "" << endl;
	cout << "CASHIER - " << uname << endl;
	cout << "__________________________________________________________________________________________" << endl;
	for (int c = 0; c < 20; c++) {                                                // For loop for get the selected item into the bill
		if (Arr[c].Qt >= 1) {
			cout << Arr[c].Name << endl;
			cout << setw(15) << Arr[c].Code << setw(18) << "(" << Arr[c].Price << "x" << Arr[c].Qt << ")" << setw(36) << "Rs " << Arr[c].tot << endl; //getting selected items
		}
	}
	cout << "__________________________________________________________________________________________" << endl;
	cout << "DISCOUNT" << setw(68) << "Rs " << discount << endl;
	cout << "SUB TOTAL" << setw(67) << "Rs " << subtotal << endl;
	cout << "__________________________________________________________________________________________" << endl;
	cout << "PAID AMOUNT " << setw(64) << "Rs " << PA << endl;
	cout << "BALANCE" << setw(69) << "Rs " << bal << endl;
	cout << "__________________________________________________________________________________________" << endl;
	cout << "\t\t\t             THANK YOU COME AGAIN                                 " << endl;
	cout << "__________________________________________________________________________________________" << endl;
	cout << "" << endl;
	cout << "     |  Please note that food items, Pharmaceuticals and Sterile Medical devices  |" << endl;
	cout << "     |              will not be accepted as return or exchange                    |" << endl;;
	cout << "" << endl;
	cout << "" << endl;
	cout << "__________________________________________________________________________________________" << endl;
	cout << "------------------------------------------------------------------------------------------" << endl;

}

void CashierExit(string uname)
{
	system("cls");
	string op;                                  //Variable for selection
	Header();
	cout << "                                              |  EXIT  |" << endl;
	cout << "" << endl;
	cout << "\t\t\t\t             CONFIRM EXIT?" << endl;
	cout << "\t\t\t\t              [ YES / NO ]  		" << endl;
	cout << "\t\t\t\t    [ ENTER Y FOR YES OR N FOR NO ]   " << endl;
	cin >> op;

	if (op == "y" || op == "Y")                  // if selection y program will  exit completely
	{
		exit(0);
	}

	else if (op == "n" || op == "N")             // if selection n program will go to cashier menu.
	{
		system("cls");                           // clear commands
		Cashier(uname);
	}

	else
	{
		cout << "\n\t\t\t\t\t   --------   INCORRECT COMMAND   --------   \n" << endl; // prints error message.
		cout << "\n\t\t\t\t\t   --------   PLEASE TRY AGAIN   --------   \n" << endl;
		CashierExit(uname);
	}
}

void ItemList()    // added item list in the application
{
	Items[0].Code = "PKGDT001";
	Items[0].ServiceName = "DAY WORKOUT";
	Items[0].Price = 1500.00;

	Items[1].Code = "PKGDT002";
	Items[1].ServiceName = "EXECUTIVE MEMBERSHIP (FULL)";
	Items[1].Price = 5500.00;

	Items[2].Code = "PKGDT003";
	Items[2].ServiceName = "1 MONTH MEMBERSHIP";
	Items[2].Price = 3000.00;

	Items[3].Code = "PKGDT004";
	Items[3].ServiceName = "MASTERS MEMBERSHIP (OVER 60 Years)";
	Items[3].Price = 5000.00;

	Items[4].Code = "PKGDT005";
	Items[4].ServiceName = "NON-PEAK EXECUTIVE";
	Items[4].Price = 3300.00;

	Items[5].Code = "ITMP001";
	Items[5].ServiceName = "PLATINUM 100% CREATINE";
	Items[5].Price = 4000.00;

	Items[6].Code = "ITMB002";
	Items[6].ServiceName = "BEAST AMINOLYTES";
	Items[6].Price = 6000.00;

	Items[7].Code = "ITMB003";
	Items[7].ServiceName = "BEAST SUPER SAUNA";
	Items[7].Price = 6000.00;

	Items[8].Code = "ITMF004";
	Items[8].ServiceName = "FISH OIL (100 SOFT-GELS)";
	Items[8].Price = 3500.00;

	Items[9].Code = "ITMC005";
	Items[9].ServiceName = "CREATINE 5000 (60 SERVINGS)";
	Items[9].Price = 3000.00;

	Items[10].Code = "ITMS006";
	Items[10].ServiceName = "D-STUNNER ALPHA 30 SERVINGS";
	Items[10].Price = 6500.00;

	Items[11].Code = "ITMG007";
	Items[11].ServiceName = "GOLD STANDARD GAINER 10LBS";
	Items[11].Price = 20000.00;
}