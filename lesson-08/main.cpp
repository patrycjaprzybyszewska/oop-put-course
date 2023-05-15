/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class Product {
    public:
    int prize;
    string name ;
    int ID;
    vector<string> product_name;
    vector <double> product_prize;
    vector <int> product_ID;
    
};
class Customer  {
 public:
    
    string customer_name;
    string customer_email;
    int customer_ID;   
};
class Order: public Product, public Customer{
   public:
    int total_cost=0;
    int order_ID;
    void add_to_order(string name)
    {
        product_name.push_back(name);
    }
    int calculate_total(int prize)
    {
        return  total_cost+=prize;
    }
};
int main()
{
    Product product;
    product.name = "shirt";
product.prize = 25;
product.ID = 1;
Customer customer;
customer.customer_name = "Jan Kowalski";
customer.customer_email = "jan@gmail.com";
customer.customer_ID = 1;
Order order;
order.add_to_order(product.name);
order.calculate_total(product.prize);
Product product2;
product2.name = "bag";
product2.prize = 5;
product2.ID = 2;
order.add_to_order(product.name);
cout<<order.calculate_total(product2.prize);
    return 0;
}
