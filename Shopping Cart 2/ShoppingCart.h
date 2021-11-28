/* Type your code here *///
// Created by cabanillaj on 10/20/2021.
//

#ifndef SHOPPINGCART_SHOPPINGCART_H
#define SHOPPINGCART_SHOPPINGCART_H

#include <string>
#include <vector>
#include "ItemToPurchase.h"
#include <iostream>
using namespace std;


class ShoppingCart {
public:
    ShoppingCart (string name, string date){
        customerName = name;
        currentDate = date;
    }
    void SetCustomerName(string name){
        customerName = name;
    }
    void SetDate(string date){
        currentDate = date;
    }
    string GetCustomerName(){
        return customerName;
    }
    string GetDate(){
        return currentDate;
    }
    void AddItem(ItemToPurchase itemName){
        cartItems.push_back(itemName);

    }
    void RemoveItem(string itemName){
        int counter = 0;

        for (int i=0;i<cartsize;i++){
            if(cartItems[i].GetName() == itemName){
                cartItems.erase(cartItems.begin()+i);
                counter++;
            }
        }
        if (counter < 1 ){
            cout << "Item not found in cart. Nothing removed." << endl;
            cout << endl;
        }else{
            cout << endl;
        }

    }
    void ModifyItem(string itemName,int quantity){
        int counter = 0;
        for (int i = 0 ; i < cartsize;i++){
            if(cartItems[i].GetName() == itemName){
                cartItems[i].SetQuantity(quantity);
                counter++;
            }

        }
        if (counter < 1){
            cout <<"Item not found in cart. Nothing modified." << endl;
            cout << endl;
        }
        else{
            cout << endl;
        }




    }
    int GetNumItemsInCart(){
        int items=0;
        for(int i=0;i<cartsize;i++){
            items+= cartItems[i].GetQuantity();

        }
        return items;

    }
    int GetCostOfCart(){
        int price=0;
        for(int i=0;i<cartsize;i++){
            price= price + cartItems[i].GetPrice();

        }
        return price;
    }
    void PrintTotal(){
        int total =0;
        cout << "OUTPUT SHOPPING CART" << endl;
        cout << GetCustomerName() << "'s Shopping Cart - " << GetDate()<< endl;
        cout << "Number of Items: " << GetNumItemsInCart()<<endl;
        cout << endl;

        if(cartsize > 0){
            for(int i=0;i<cartsize;i++){
                int quantity = cartItems[i].GetQuantity() ;
                int price = cartItems[i].GetPrice();
                cout << cartItems[i].GetName() << " " << quantity <<" @ $" << price  << " = $" << price*quantity<< endl;
                total += (price*quantity);
            }
        }
        else{
            cout << "SHOPPING CART IS EMPTY" <<endl;
        }
        cout << endl;
        cout << "Total: $"<< total <<endl;
        cout << endl;

    }
    void PrintDescriptions() {
        cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
        cout << GetCustomerName() << "'s Shopping Cart - " << GetDate()<< endl<<endl;

        cout << "Item Descriptions"<<endl;

        if (cartsize < 1){
            cout << "Shopping Cart is Empty ! " << endl;
        }
        else
            for(int i=0;i<cartsize;i++){
                cartItems[i].PrintItemDescription();

            }
        cout << endl;

    }


private:
    string currentDate = "January 1, 2016";
    string customerName = "none";
    vector <ItemToPurchase> cartItems;
    int cartsize = cartItems.size();

};


#endif //SHOPPINGCART_SHOPPINGCART_H
