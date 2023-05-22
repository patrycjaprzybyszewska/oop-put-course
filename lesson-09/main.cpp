
#include <iostream>
#include <vector>
using namespace std;

class IntegerSequence{
    public:
     virtual vector<int>Numbers() = 0;
};
class VectorSequence : public IntegerSequence
{
    public:
    VectorSequence(vector<int>nums)
    {
        nums_=nums;
    }
    vector<int>Numbers () override {
        return nums_;
    }
    private:
    vector<int>nums_;
    
 
};
class PositiveSequence : public IntegerSequence
{
    public:
    explicit PositiveSequence( IntegerSequence *ptr)
    {
       this->ptr =  ptr ;
    }
    vector<int>Numbers () override
    { 
       vector<int>Temp = ptr->Numbers();
       for( int i= 0 ; i <Temp.size(); i++ )
       {
           if (Temp[i]<0)
           {
               Temp.erase(Temp.begin ()+ i);
           }
       }
    return Temp;
    }
   
    private:
    IntegerSequence* ptr;
   
};
class EvenSequence : public IntegerSequence
{
    public:
    explicit EvenSequence( IntegerSequence *ptr)
    {
       this->ptr =  ptr ;
    }
    vector<int>Numbers () override
    { 
       vector<int>Temp = ptr->Numbers();
       for( int i= 0 ; i <Temp.size(); i++ )
       {
           if ((Temp[i]%2)!=0)
           {
               Temp.erase(Temp.begin ()+ i);
           }
       }
    return Temp;
    }
   
    private:
    IntegerSequence* ptr;
   
};

class SortedSequence : public IntegerSequence
{
    public:
    explicit SortedSequence( IntegerSequence *ptr)
    {
       this->ptr =  ptr ;
    }
    vector<int>Numbers () override
    { 
       vector<int>Temp = ptr->Numbers();
      
           sort(Temp.begin(), Temp.end());
       
    return Temp;
    }
   
    private:
    IntegerSequence* ptr;
   
};
int main()
{
    ptr<Numbers> numbers
    cout<<"Hello World";

    return 0;
}
