#include <iostream>
#include <vector>
#include <optional>
using namespace std;
class House {
    private:
      string walls;
      int Windows;
    public:
      void ColorWalls(string NewWalls)
      {
          this-> walls = move(NewWalls);
          cout<<walls;
      }
   
    string numberOfWindows(int NewWindows)
      { this->Windows=move(NewWindows);
          return u_int(Windows) + "windows";
      }
       
    
};
class Room{
    private:
      optional<vector<House>> NewCurtains;  
    public:
      void Curtains(const House &House)
      {
          this->NewCurtains->push_back(House);
      }
};
int main() {
string NewWalls;
House Big;
cout<<"Give coulor of the walls"<<endl;
cin>>NewWalls;
Big.ColorWalls (NewWalls);
int NewWindows;
cout<<endl<<"How many windows are in your house"<<endl;
cin>>NewWindows;
Big.numberOfWindows(NewWindows);
cout<<endl<<NewWindows<<endl;
Room Livingroom;

cout<<"Are Curtains in Livingroom? If yes type 1"<<endl;
int Curtains;
cin>>Curtains;
if (Curtains == 1)
{
    Livingroom.Curtains(Big);
}


    return 0;
}
