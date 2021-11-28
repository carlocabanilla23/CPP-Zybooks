#include <iostream>

using namespace std;

#include "ItemToPurchase.h"
#include "ShoppingCart.h"


    ShoppingCart cart("none","January 1, 2016");
    ItemToPurchase item("Bottled Water", "Deer Park, 12 oz.", 1, 10);
 //   ItemToPurchase("Bottled Water", "Deer Park, 12 oz.", 1, 10);
  //  ItemToPurchase item2;
    string inputVal;

void getInfo(){

    cout << "Enter customer's name:" << endl;
    getline(cin,inputVal);
    cart.SetCustomerName(inputVal);
    cout << "Enter today's date:" << endl;
    getline(cin,inputVal);
    cart.SetDate(inputVal);
    cout << endl;

    cout << "Customer name: " << cart.GetCustomerName()<<endl;
    cout << "Today's date: " << cart.GetDate()<<endl;
    cout << endl;
}

void PrintMenu(){
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
    cout << endl;



}
void ExecuteMenu(char c,string mycart){



   cout << item.GetDescription();
    int inputNewquantity;
    int inputPrice;
    int inputQuantity;
     if(c == 'q'){

     }

    else if (c == 'a'){
         cin.ignore();
            cout<< "ADD ITEM TO CART"<<endl;
            cout<< "Enter the item name:"<<endl;
            getline(cin,inputVal);
            item.SetName(inputVal);
            cout<< "Enter the item description:"<<endl;
            getline(cin,inputVal);
            item.SetDescription(inputVal);
            cout<< "Enter the item price:"<<endl;
            cin>> inputPrice;
            item.SetPrice(inputPrice);
            cout<< "Enter the item quantity:"<<endl;
            cin>> inputQuantity;
            cout << endl;
            item.SetQuantity(inputQuantity);
            cart.AddItem(item);
            PrintMenu();
    }
    else if (c == 'd'){
          cin.ignore();
         cout <<"REMOVE ITEM FROM CART"<<endl;
         cout<< "Enter name of item to remove:"<<endl;
         getline(cin,inputVal);
         cart.RemoveItem(inputVal);
            PrintMenu();
    }
    else if (c == 'c'){
         cin.ignore();
         cout << "CHANGE ITEM QUANTITY" << endl;
         cout<< "Enter the item name:"<<endl;
         getline(cin,inputVal);
         cout << "Enter the new quantity:" << endl;
            cin >> inputNewquantity;
            cart.ModifyItem(inputVal,inputNewquantity);
               PrintMenu();
    }
    else if(c == 'i' ){
            cart.PrintDescriptions();
               PrintMenu();
    }else if (c =='o'){
        cart.PrintTotal();
           PrintMenu();
    }

}


int main() {
    char key;
    string mycart;
    getInfo();
    PrintMenu();
    while(key != 'q'){
          cout << "Choose an option:"<< endl;
          cin >> key;
          ExecuteMenu(key,mycart);
    }





    return 0;
}