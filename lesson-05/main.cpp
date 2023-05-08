// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

class Grades
{  
    public:
    Grades (){};
    virtual ~Grades(){}
    virtual Grades *AmountOfGrades(float factor) = 0;
};

class MathGrades : public Grades{
 public:
MathGrades(float MyAverage)
{this->MyAverage = MyAverage};
 MathGrades *AmountOfGrades (float factor) override
 {
     return new MathGrades(factor);
 };
void Print (){
  std::cout<<MyAverage;
}
 private:
 float MyAverage;

};



int main()
{
          MathGrades *MyAverage =  new Grades(3.0);
          MyGrades.Print();
  


    return 0;
}

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <map>

class Cantor {
 public:
  Cantor() = default;
  virtual ~Cantor() = default;

  virtual double Rate(const std::string& abbreviation) const = 0;
};

class FakeUsdCantor : public Cantor {
 public:
  FakeUsdCantor() {
    // rates_ map with values for ten most popular currencies relative to USD
    rates_ = {
      {"EUR", 0.85},
      {"JPY", 110.66},
      {"GBP", 0.73},
      {"CHF", 0.91},
      {"CAD", 1.25},
      {"AUD", 1.34},
      {"CNY", 6.47},
      {"HKD", 7.78},
      {"NZD", 1.44},
      {"KRW", 1153.89}
    };
  }

  double Rate(const std::string& abbreviation) const override {
    auto it = rates_.find(abbreviation);
    if (it != rates_.end()) {
      return it->second;
    }
    // Handle error case when currency abbreviation is not found
    return 0.0;
  }

 private:
  std::map<std::string, double> rates_;
};

class Currency {
 public:
  Currency() = default;
  virtual ~Currency() = default;

  virtual double ConvertedToDollars(const Cantor& cantor) const = 0;
  virtual std::string Abbreviation() const = 0;
  virtual double Amount() const = 0;
};
class Yen :   public Currency{
private:
double amount;
 public:
 Yen (double amount)
 {
     this->amount = amount;
 }
 std :: string Abbreviation()
 {
     return "JPY";
 }
 double Amount() 
 {
     return  amount;
 }
    double ConvertedToDollars (const Cantor& cantor) 
 {
    return amount / cantor.Rate (Abbreviation ());
 }
};

int main() {
    FakeUsdCantor cantor;
    Yen yen(2.0);
   std::cout<<yen.Amount()<<yen.Abbreviation()<<":"<<yen.ConvertedToDollars(cantor)<<"USD"<<endl;
return 0;
}
