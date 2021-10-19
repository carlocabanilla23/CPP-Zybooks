#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;


class ItemToPurchase{
public:
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

    void Print(){
        cout << itemName;
    }

private:
    string itemName = "";
    int itemPrice = 0;
    int itemQuantity = 0;
};

#endif
