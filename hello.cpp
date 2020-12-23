#include <iostream>
using namespace std;
string noun;
string adj;
string verb;
string done;
string holiday;
string food;
string adj2;
string noun2;
string plnoun;
string person;
string place;
string bpp;
string ready;
int main(){

  cout<<"Type in a Holiday.";
  cin>> holiday;
  cout<<"type in a noun.";
  cin>> noun;
  cout<<"type in a place.";
  cin>> place;
  cout<<"type in a person.";
  cin>> person;
  cout<<"type in a adjective.";
  cin>> adj;
  cout<<"type in a plural body part.";
  cin>> bpp;
  cout<<"type in a verb.";
  cin>> verb;
  cout<<"type in a adjective.";
  cin>> adj2;
  cout<<"type in a noun.";
  cin>> noun2;
  cout<<"type in a food.";
  cin>> food;
  cout<< "type in a plural noun.";
  cin>> plnoun;
  cout<< "Loading \n";
  cout<< "Ready!\n";
  cout<< "type ready when ready!";
  cin>> ready;
  cout<<"I can't believe it's already "<<holiday<<"! I can't wait to put on my "<<noun<<" and visit every "<<place<<" in my neighborhood. This year, I am going to dress up as (a) "<<person<<" with "<<adj<<" "<<bpp<<". Before I "<<verb<<", I make sure to grab my "<<adj2<<" "<<noun<<" to hold all of my "<<food<<". Finally, all of my "<<plnoun<<" are ready to go!\n";
  cout<<"type done when done!";
  cin>> done;
  cout<< done;

 return 0;
}

