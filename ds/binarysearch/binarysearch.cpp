#include <iostream>
#include<math.h>
using namespace std;

int main(){

  float high = 100;
  int numof; 

  string choice;

  while(choice != "Y") {
    float mid = high/2;
    cout << "is your number lower or higher than : " << high << endl;
    cin >> choice;
    if(choice == "l") {
      high = ceil(mid);
    }
    if(choice == "h") {
      high = mid + high;
    }
    numof++;

  }

  // remove the first and last choices
  cout << "It took me " << numof-1 << " tries" << endl;


 int size = 50;
 int numof = [];

 for(int i = 0; i < 50; i++) {
   numof.push(i);
 }

// gotta

 string input;

 cout << "Choose a number between 1-50" << endl; 

cin << input << endl;

 // while --- until numbers match 

  return 0;
}

/**
 * Add binary search array
 *
 * **/
