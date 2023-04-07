#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() 
{
  //variables
  const double TAX_RATE=.07125;
  string customerName, productName;
  int itemQuantity;
  double mealPrice=0.0,orderSubTotal=0.0,taxTotal=0.0,totalOrderCost=0.0;
//gathering info
  cout<<"Please enter your full name:\n";
  getline(cin,customerName);
  cout<<"Please enter the food selection - must be two or more words:\n";
  getline(cin,productName);
  cout<<"Enter the price of this meal:\n";
  cin>>mealPrice;
  cout<<"Enter the quantity being ordered:\n";
  cin>>itemQuantity;
  cout<<endl;
//math
  orderSubTotal=mealPrice*itemQuantity;
  taxTotal=orderSubTotal*TAX_RATE;
  totalOrderCost=taxTotal+orderSubTotal;
//final output
  cout<<"hello "<< customerName<<",\n";
  cout<<"Today, you purchased "<<itemQuantity<<productName<<" at $"<<mealPrice<<" each."<<endl;
  cout<<"Your order subtotal is: $"<<orderSubTotal<<endl;
  cout<<"The tax amount is: $"<<taxTotal<<endl;
  cout<<"Finally, your total order cost is: $"<<totalOrderCost<<endl;

  return 0;
}