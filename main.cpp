#include <iostream>
#include "Date.h"
using namespace std;



 


int main() {
  int mday, mMonth, myear;

  cout<<"Input Day:";
  cin>>mday; 
  cout<<"Input month:"; 
  cin >> mMonth;
  cout<<"Input year:";
  cin >> myear;
  

  Date myDate;
  myDate.setDay(mday);
  myDate.setMonth(mMonth);
  myDate.setYear(myear);

  cout<<myDate.getDay()<<"/"<<myDate.getMonth()<<"/"<<myDate.getYear()<<endl;

  return 0;

}