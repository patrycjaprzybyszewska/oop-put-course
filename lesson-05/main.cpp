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
