#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int noOfDay(int yr,int mon ) {
      if(mon==1||mon==3||mon==5||mon==7||mon==8||mon==10||mon==12)
      return 31;
      else if(mon==4||mon==6||mon==9||mon==11)
      return 30;
      
      else if(mon==2){
              if (yr%400 == 0) {
                      return 29;
              }
              if (yr%100 == 0) {
                      return 28;
              }
              if( yr%4 == 0 ){
                      return 29;
              }
              return 28;
      }
}

int main() {
      int year = 1900;
      int month= 1;
      int day= 1;
      int weekDay= 1;
      int count= 0;
      while(1) {
              day += 1;
              if (day > noOfDay(year, month)) {
                      day = 1;
                      month += 1;
              }
              if (month > 12) {
                      month = 1;
                      year += 1;
              }

              weekDay += 1;
              if (weekDay > 7) {
                      weekDay = 1;
              }

              if (day == 1 && weekDay == 7 && year > 1900) {
                      count += 1;
              }
             
              if (year == 2000 && month == 12 && day == 31) {
                      break;
              }
      }

      cout<<"No. of sunday: "<<count;
}