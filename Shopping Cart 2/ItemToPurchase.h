/* Type your code here */

#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;
#include <string>
#include <vector>
#include "ItemToPurchase.h"
#include <iostream>

class ItemToPurchase {
public:
    ItemToPurchase(string name,string description,int price,int quantity){
         itemName = name;
         itemPrice = price;
         itemQuantity = quantity;
         itemDescription=description;
    }


    void SetName(string productName){
        itemName = productName;

    }
    string GetName(){
        return itemName;
    }
    void SetPrice(int productPrice){
        itemPrice = productPrice;
    }
    int GetPrice(){
        return itemPrice;
    }
    void SetQuantity(int productQuantity){
        itemQuantity = productQuantity;
    }
    int GetQuantity(){
        return  itemQuantity;
    }

    void SetDescription(string description){
        itemDescription = description;
    }
    string GetDescription() const{
        return itemDescription;
    }
    void PrintItemCost(){
        cout << GetName() << " " << GetQuantity()<<" @ $" << GetPrice() << " = $" << GetPrice()*GetQuantity() << endl;
    }
    void PrintItemDescription(){
        cout << GetName() <<": "<< GetDescription() << endl;
    }


private:
    string itemName;
    int itemPrice;
    int itemQuantity;
    string itemDescription ="";
};

#endif