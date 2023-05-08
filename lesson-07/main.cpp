#include <iostream>
#include <cmath>
#include <string>
class Logarithm {
 public:
  Logarithm(double base, double argument) {
    base_ = base;
    argument_ = argument;
        if ( argument<0)
      {
      throw std:: logic_error ("You gave wrong argument!");
      }
       if (base<=0 || base == 1)
      {
      throw std:: logic_error ("You gave wrong base!");
      }
  }

  double Calculate() const {
  
    return std::log(argument_) / std::log(base_);
  }

 private:
  double base_;
  double argument_;
};
/*class invalid_argument : public std:: logic_error
{
    public:
    explicit invalid_argument (const std::string& message)
    :std:: logic_error(message) {}

};
*/
int main ()
{
    int argument, base;
   std:: cout<<"give number";
   std:: cin>>argument;
   std:: cout<<"give base";
   std:: cin>>base;
  
   
   try {
     Logarithm logarithm (base, argument);
     std::cout<<logarithm.Calculate();
     
   } catch (const std:: logic_error())
   {
       std::cerr<<"You gave wrong number!"<<std::endl;
   }
   
  
    
    return 0;
}
