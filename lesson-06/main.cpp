/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <memory>
#include<sstream>
#include<iostream>
using namespace std;

class Sequence
{
        public:
            virtual int Length() = 0;
            //class FakeSequence;
};
/*
class Sequence :: FakeSequence : public Sequence
{
        public:
                int Length() override
                {
                    return 100;
                }
            
        
};
*/
class FakeSequence :public Sequence{
    public:
     int Length()override
     {return 100;}
};
class Gene {
    private:
        std::shared_ptr<Sequence> sequence_;
        string name;
       // void JSON();
    public:
         Gene (string name, shared_ptr<Sequence> sequence):  
         name_ (name),sequence_ (sequence) {}
    
          string JSON ( shared_ptr<Sequence> sequence, string GeneName)
          {
               //return Gene(sequence, GeneName);
               stringstream ss;
               ss<< "{";
               ss<<"\"name\":\""<< name_<< "\", ";
               ss<<"\"Length\": "<<sequence_->Length()<<"";
               return ss.str();
          }
};

int main()
{   std::shared_ptr<Sequence>fakeSequence = std::make_shared<Sequence::FakeSequence>();
    Gene gene (Genename:"BALF5", sequence: fakeSequece);
    cout<<gene.JSON();
    
    
    
    
 
        return 0;        
}
