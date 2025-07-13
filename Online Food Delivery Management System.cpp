#include<iostream>
#include<fstream>
using namespace std;
class User {
private:
    string username;
    string password;
public:
    void registerUser(){
        cout<<"Register: " << endl;
        cout<<"Enter Username: ";
        cin>>username;
        cout<<"Enter Password: ";
        cin>>password;
        cout<<"Register Successfully\n"<<endl<<endl;
    }
    void login() {
        cout<<"Login: " << endl;
        cout<<"Enter your Username: ";
        cin>>username;
        cout<<"Enter your password: ";
        cin>>password;
    }
    void operator=(const User& U2){
        username = U2.username;
        password = U2.password;
    }
    bool isValidLogin(const User& U2){
        return (username == U2.username && password == U2.password);
    }
};
class Customer : public User{
protected:
    string item[100];
    int quantity[100];
    int choice;
    int itemindex;
    int bill;
    int count;
public:
    Customer(){
    	itemindex = 0;
    	bill = 0;
    	count = 0;
	}
    void browseMenu(){
    		cout<<"All Restaurant Menu: "<<endl;
    		cout<<"*******Pizza*******"<<endl;
            cout<<"1.Large Pizza, Rs.2850"<<endl;
            cout<<"2.Medium Pizza, Rs.1850"<<endl;
            cout<<"3.Small Pizza, Rs.1000"<<endl<<endl;
            cout<<"*******Burger*******"<<endl;
            cout<<"4.Reggy Burger, Rs.390"<<endl;
            cout<<"5.Bazinga Burger, Rs.560"<<endl<<endl;
            cout<<"*******Swarma*******"<<endl;
            cout<<"6.Cheezy Swarma, Rs.630"<<endl;
            cout<<"7.Chicken Swarma, Rs.500"<<endl<<endl;
            cout<<"*******Roll*******"<<endl;
            cout<<"8.Arabic Roll, Rs.690"<<endl;
            cout<<"9.Behari Roll, Rs. 690"<<endl<<endl;
            cout<<"*******Wings*******"<<endl;
            cout<<"10.Oven Baked Wings, Rs.600"<<endl;
            cout<<"11.Flaming Wings, Rs.650"<<endl<<endl;
            cout<<"*******Pasta*******"<<endl;
            cout<<"12.Cheese Pasta, Rs.1000"<<endl;
            cout<<"13.Chicken Pasta, Rs.900"<<endl<<endl;
            cout<<"*******Fries*******"<<endl;
            cout<<"14.Simple Fries, Rs.150"<<endl;
            cout<<"15.Loaded Fries, Rs.250"<<endl<<endl;
            cout<<"*******Drink*******"<<endl;
            cout<<"16.Juice, Rs.60"<<endl;
            cout<<"17.Water, Rs.60"<<endl;
            cout<<"18.Soft Drink, Rs.100"<<endl<<endl;
            cout<<"19.Exit"<<endl<<endl;
    }
    void addToCart(){
    	do{
    		cout<<"Enter item number: ";
    		cin>>choice; 
    		if(choice == 1){
    			cout<<"How many Large Pizza: ";
    			cin>>count;
    			item [itemindex]= "Large Pizza";
    			quantity[itemindex] = count;
    			bill += count * 2850;
    			itemindex++;
			}
			else if(choice == 2){
    			cout<<"How many Medium Pizza: ";
    			cin>>count;
    			item [itemindex]= "Medium Pizza";
    			quantity[itemindex] = count;
    			bill += count * 1850;
    			itemindex++;
			}
    		else if(choice == 3){
    			cout<<"How many Small Pizza: ";
    			cin>>count;
    			item [itemindex]= "Small Pizza";
    			quantity[itemindex] = count;
    			bill += count * 1000;
    			itemindex++;
			}
			else if(choice == 4){
				cout<<"How many Reggy Burger: ";
    			cin>>count;
				item[itemindex] = "Reggy Burger";
				quantity[itemindex] = count;
				bill += count * 390;
				itemindex++;
			}
			else if(choice == 5){
				cout<<"How many Bazinga Burger: ";
    			cin>>count;
				item[itemindex] = "Bazinga Burger";
				quantity[itemindex] = count;
				bill += count * 560;
				itemindex++;
			}
			else if(choice == 6){
				cout<<"How many Cheezy Swarma: ";
    			cin>>count;
				item[itemindex] = "Cheezy Swarma";
				quantity[itemindex] = count;
				bill += count * 630;
				itemindex++;
			}
			else if(choice == 7){
				cout<<"How many Chicken Swarma: ";
    			cin>>count;
				item[itemindex] = "Chicken Swarma";
				quantity[itemindex] = count;
				bill += count * 500;
				itemindex++;
			}
			else if(choice == 8){
				cout<<"How many Arabic Roll: ";
    			cin>>count;
				item[itemindex] = "Arabic Roll";
				quantity[itemindex] = count;
				bill += count * 690;
				itemindex++;
			}
			else if(choice == 9){
				cout<<"How many Behari Roll: ";
    			cin>>count;
				item[itemindex] = "Behari Roll";
				quantity[itemindex] = count;
				bill += count * 690;
				itemindex++;
			}
			else if(choice == 10){
				cout<<"How many Oven Baked Wings: ";
    			cin>>count;
				item[itemindex] = "Oven Baked Wings";
				quantity[itemindex] = count;
				bill += count * 600;
				itemindex++;
			}
			else if(choice == 11){
				cout<<"How many Flaming Wings: ";
    			cin>>count;
				item[itemindex] = "Flaming Wings";
				quantity[itemindex] = count;
				bill += count * 650;
				itemindex++;
			}
			else if(choice == 12){
				cout<<"How many Cheese Pasta: ";
    			cin>>count;
				item[itemindex] = "Cheese Pasta";
				quantity[itemindex] = count;
				bill += count * 1000;
				itemindex++;
			}
			else if(choice == 13){
				cout<<"How many Chicken Pasta: ";
    			cin>>count;
				item[itemindex] = "Chicken Pasta";
				quantity[itemindex] = count;
				bill += count * 900;
				itemindex++;
			}
			else if(choice == 14){
				cout<<"How many Simple Fries: ";
    			cin>>count;
				item[itemindex] = "Simple Fries";
				quantity[itemindex] = count;
				bill += count * 150;
				itemindex++;
			}
			else if(choice == 15){
				cout<<"How many Loaded Fries: ";
    			cin>>count;
				item[itemindex] = "Loaded Fries";
				quantity[itemindex] = count;
				bill += count * 250;
				itemindex++;
			}
			else if(choice == 16){
				cout<<"How many Juice: ";
    			cin>>count;
				item[itemindex] = "Juice";
				quantity[itemindex] = count;
				bill += count * 60;
				itemindex++;
			}
			else if(choice == 17){
				cout<<"How many Water: ";
    			cin>>count;
				item[itemindex] = "Water";
				quantity[itemindex] = count;
				bill += count * 60;
				itemindex++;
			}
			else if(choice == 18){
				cout<<"How many Soft Drink: ";
    			cin>>count;
				item[itemindex] = "Soft Drink";
				quantity[itemindex] = count;
				bill += count * 100;
				itemindex++;
			}
			else if(choice == 19){
				cout<<"Exit"<<endl;
				break;
			}
			else{
				cout<<"Invalid Number, Please enter (1 to 19)"<<endl;
			}
		}while(choice != 19); 
	}
    void removeFromCart(){
    	if(itemindex == 0){
        	cout<<"Cart is empty"<<endl;
        	return;
    	}
    	cout<<"\nCurrent Cart Items:\n";
    	for(int i = 0; i < itemindex; i++){
        	cout<<i<<". "<<quantity[i]<<" x "<<item[i]<<" Rs. "<<quantity[i] * addToCart(item[i])<<endl;
    	}
    	int index;
    	cout<<"Enter index of item to update/remove: ";
    	cin>>index;
    	if(index < 0 || index >= itemindex){
        	cout<<"Invalid index. No action taken.\n";
        	return;
   		}
    	int qtyToRemove;
    	cout<<"You have "<<quantity[index]<<" x "<<item[index]<<".\n";
    	cout<<"Enter quantity to remove: ";
    	cin>>qtyToRemove;
    	if(qtyToRemove <= 0 || qtyToRemove > quantity[index]){
        	cout<<"Invalid quantity.\n";
        	return;
   		}
    	int itemPrice = addToCart(item[index]);
    	bill -= qtyToRemove * itemPrice;
    	quantity[index] -= qtyToRemove;

    	if(quantity[index] == 0){
        	for(int i = index; i < itemindex - 1; i++){
            	item[i] = item[i + 1];
            	quantity[i] = quantity[i + 1];
        	}
        	itemindex--;
        	cout<<"Item completely removed from cart.\n";
    	} 
		else{
        	cout<<qtyToRemove<<" x "<<item[index]<<" removed. "<<"Remaining: "<<quantity[index]<<".\n";
    	}
	}
	int addToCart(string itemName){
		if(itemName == "Large Pizza"){
			return 2850;
		}
		else if(itemName == "Medium Pizza"){
			return 1850;
		}
		else if(itemName == "Small Pizza"){
			return 1000;
		}
		else if(itemName == "Reggy Burger"){
			return 390;
		}
		else if(itemName == "Bazinga Burger"){
			return 560;
		}
		else if(itemName == "Cheezy Swarma"){
			return 630;
		}
		else if(itemName == "Chicken Swarma"){
			return 500;
		}
		else if(itemName == "Arabic Roll"){
			return 690;
		}
		else if(itemName == "Behari Roll"){
			return 690;
		}
		else if(itemName == "Oven Baked Wings"){
			return 600;
		}
		else if(itemName == "Flaming Wings"){
			return 650;
		}
		else if(itemName == "Cheese Pasta"){
			return 1000;
		}
		else if(itemName == "Chicken Pasta"){
			return 900;
		}
		else if(itemName == "Simple Fries"){
			return 150;
		}
		else if(itemName == "Loaded Fries"){
			return 250;
		}
		else if(itemName == "Juice"){
			return 60;
		}
		else if(itemName == "Water"){
			return 60;
		}
		else if(itemName == "Soft Drink"){
			return 100;
		}
		else {
			return 0;
		}
	}
	void checkout(){
		for(int i = 0; i < itemindex; i++){
				int itemPrice = addToCart(item[i]);
				cout<<quantity[i]<<" "<<item[i]<<" Rs. "<<quantity[i]*itemPrice<<endl;
		}
	}
	virtual void showUserDetail(){
		cout<<"Total Bill: "<<bill<<endl;
	}
};
class Order:public Customer{
protected:
	string order;
	string fname;
	string lname;
	string Number;
	string address;
	float review;
	string accept;
	char description[500];
	string filename = "Online_Food_Delivery.txt";
public:
	void orderOrNot(){
		cout<<"Order done or not: ";
		cin>>order;
		if(order == "Done"){
			cout<<"Enter First Name: ";
			cin>>fname;
			cout<<"Enter Last Name: ";
			cin>>lname;
			cout<<"Enter Phone Number: ";
			cin>>Number;
			cout<<"Enter Address: ";
			cin>>address;
			cout<<"**********Few Minute Later**********"<<endl;
			cout<<"Restaurant Order Accept: ";
			cin>>accept;
			if(accept == "Accept"){
				cout<<"Delivery is in progress"<<endl;
				cout<<endl;
				cout<<"********** After 30 Minutes Ago **********"<<endl;
				cout<<"Tin Tone "<<endl;
				cout<<"Delivery Boy Said: Give with one hand and take with the other."<<endl;
				cout<<"Please Review our Restaurant: "<<endl;
				cin>>review;
				cout<<"Description: ";
				cin.ignore();
				cin.getline(description, 500);
				cout<<"Thanks for your Review and Desription"<<endl;
			}
			else{
				cout<<"Error"<<endl;
			}
	 	}
	 	else if(order == "Not"){
	 		return;
		}
		else{
			cout<<"Invalid, Please type Done or Not"<<endl;
		}
	}
	void showUserDetail()override{
		Customer::showUserDetail();
		cout<<"Your Full Name: "<<fname<<" "<<lname<<endl;
		cout<<"Your Phone Number: "<<Number<<endl;
		cout<<"Your Address: "<<address<<endl;
	}
	void DataSaved(){
    	ofstream outfile(filename);
    	if (!outfile) {
        	cout<<"Error opening file!"<<endl;
        	return;
    	}
		outfile<<"Order :\n";
    	for (int i = 0; i < itemindex; i++){
        	int itemPrice = addToCart(item[i]);
        	outfile<<quantity[i]<<" "<<item[i]<<" Rs. "<<quantity[i] * itemPrice<<endl;
    	}
    	outfile<<"Total Bill: "<<bill<<endl;
    	outfile<<"Customer Name: "<<fname<<" "<<lname<<endl;
    	outfile<<"Phone Number: "<<Number<<endl;
    	outfile<<"Address: "<<address<<endl;
    	outfile<<"Your Review: "<<review<<endl;
    	outfile<<"Your Description: "<<description<<endl;
    	outfile.close();
    	cout<<"Online Food Delivery Data Saved to file: "<<filename<<endl;
	}
};
int main(){
    Order O, O1, O2;
    Customer* C;
    C = &O;
    int choice;
    cout<<"***** Welcome to the cheezious restaurant *****"<<endl;
    do {
        cout<<"1.Register"<<endl;
        cout<<"2.Login"<<endl;
        cout<<"3.Exit"<<endl<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;
        if (choice == 1){
            O1.registerUser();
        }
        else if (choice == 2){
            O2.login();
            if (O1.isValidLogin(O2)){
                O1 = O2;
                cout<<"Login Successful\n"<<endl;
                do{
                	cout<<"1.Browse Menu"<<endl;
                	cout<<"2.Add to cart"<<endl;
                	cout<<"3.Remove From Cart"<<endl;
                	cout<<"4.Checkout"<<endl;
                	cout<<"5.Order Done or not? "<<endl;
                	cout<<"6.Show User Detail"<<endl;
                	cout<<"7.Exit"<<endl<<endl;
                	cout<<"Enter Choice: ";
                	cin>>choice;
                	if(choice == 1){
                		O.browseMenu();
					}
					else if(choice == 2){
						O.addToCart();
					}
					else if(choice == 3){
						O.removeFromCart();
					}
					else if(choice == 4){
						O.checkout();
					}
					else if(choice == 5){
						O.orderOrNot();
					}
					else if(choice == 6){
						C->showUserDetail();
						O.DataSaved();
					}
					else if(choice == 7){
						cout<<"Exit"<<endl;
						break;
					}
					else{
						cout<<"Invalid Number, Please Enter(1 to 7)"<<endl;
					}
				}while(choice != 7);
			}
			else{
                cout<<"Invalid Login\n";
            }
        }
        else if (choice == 3){
        	cout<<"Thanks for visiting our Restaurant Website"<<endl;
            cout<<"Goodbye!"<<endl;
        }
        else{
            cout<<"Invalid number, Please enter(1 to 3)"<<endl;
        }
    }  while (choice != 3);
    return 0;
}