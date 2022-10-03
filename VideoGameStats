#include <iostream>
using namespace std;

class Character{
  protected:
  string name;
  int health;
  int attack;
  int speed;
  public:
  Character(){name="NewCharacter";
    health=100;
    attack=0;
    speed=25;
    };
  Character(string nn, int hp, int at, int sp){
  name=nn;
  attack=at;
health=hp;
speed=sp;
};

  void showStats(){
    cout<<"Name: "<<name<<"\nHealth: "<<health<<"\nAttack: "<<attack<<"\nSpeed: "<<speed<<endl;
  };
string getName(){
  return name;
}
int getHealth(){
  return health;
}
int getAttack(){
  return attack;
}
int getSpeed(){
  return speed;
}

virtual void getHurt(int hurtValue){health -= hurtValue;};

};


class monster : public Character{
 
virtual void getHurt(int hurtValue){health -= 2*hurtValue;};

};



int main() {
  string select;
  char yn='y';
  Character player1;
  Character advplayer("Robert", 110, 250, 50);
  while(yn=='y'){
  cout<<"Enter the name of the player whose stats you would like to see: ";
  cin>>select;
  if(select==player1.getName())
  {
    player1.showStats();
  }
  else if(select==advplayer.getName())
  {
    advplayer.showStats();
  }
  else
  {cout<<"User does not exist."<<endl;}
  cout<<"If you would like to look up another user, enter y. Enter any other character otherwise. ";
  cin>>yn;
    }
}
