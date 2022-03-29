#include <iostream>
using namespace std;

class Payment{

    public: void selectPaymentOption()
    {
       cout << "1. Card" << endl;
       cout << "2. MFS" << endl;
    }

};


class ShoppingCart
{

    private: int cartId;
    private: int planId;
    private: string planName;
    private: int noOfPlansAdded;
    private: double price;



    public: void setPlanName(string pName) {
      planName = pName;
    }

    string getPlanName() {
      return planName;
    }

    void viewCart()
    {
       cout << "Plans: " << planName<<endl;
       cout << "Price: " << price<<endl;
    }

    void updateCart()
    {
       int option;
       cout << "1. Design" << endl;
       cout << "2. Advertisement" << endl;
       cout << "Choose 1 or 2." << endl;
       cin >> option;
       if (option = 1){
        planName = "Design";
       }
       else if (option = 2){
        planName = "Advertisement";
       }
       cout << "Plans: " << planName<<endl;
       cout << "Price: " << price<<endl;
    }

    void checkOut()
    {
       Payment p;
       p.selectPaymentOption();
    }
};

int main() {


    ShoppingCart obj1;


    obj1.setPlanName("Design");



    //obj1.viewCart();
      obj1.updateCart();
    //obj1.checkOut();


    /*cout << "1. View Cart" << endl;
    cout << "2. Update Cart" << endl;
    cout << "3. Checkout" << endl;

    int opt;
    cin >> opt;
       if (opt = 1){
       obj1.viewCart();
       }

       else if (opt = 2){
         obj1.updateCart();
       }

       else if (opt = 3){
         obj1.checkOut();
       }*/


    return 0;
}

