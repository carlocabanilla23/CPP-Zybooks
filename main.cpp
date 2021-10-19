#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
    ItemToPurchase item1;
    ItemToPurchase item2;


    string inputVal;
    int inputPrice;
    int inputQuantity;

    cout<< "Item 1"<<endl;
    cout<< "Enter the item name:"<<endl;
    getline(cin,inputVal);
    item1.SetName(inputVal);
    cout<< "Enter the item price:"<<endl;
    cin>> inputPrice;
    item1.SetPrice(inputPrice);
    cout<< "Enter the item quantity:"<<endl;
    cin>> inputQuantity;
    item1.SetQuantity(inputQuantity);

    cin.ignore();
    cout<<endl;

    cout<< "Item 2"<<endl;
    cout<< "Enter the item name:"<<endl;
    getline(cin,inputVal);
    item2.SetName(inputVal);
    cout<< "Enter the item price:"<<endl;
    cin>> inputPrice;
    item2.SetPrice(inputPrice);
    cout<< "Enter the item quantity:"<<endl;
    cin>> inputQuantity;
    item2.SetQuantity(inputQuantity);

   cout<<endl;
    cout<< "TOTAL COST"<<endl;
    cout<< item1.GetName() <<" " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" << item1.GetQuantity()*item1.GetPrice() <<endl;
    cout<< item2.GetName() <<" " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" << item2.GetQuantity()*item2.GetPrice() <<endl;
    cout<<endl;
    cout<<"Total: $"<<(item1.GetQuantity()*item1.GetPrice() )+(item2.GetQuantity()*item2.GetPrice());
    cout<<endl;
    return 0;
}
