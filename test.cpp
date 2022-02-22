#include <iostream>
// Created by ryand on 9/16/2021.
//
//int year = 0;
//void years()
//{
//    cout<<"input the year"<<endl;
//    cin>>year;
//    if ((year%4 == 0) && (year %100 != 0) || (year %400 == 0)){
//        cout<<"yep"<<endl;
//    }
//    else{
//        cout<<"this is not a lupe year"<<endl;
//    }
//
//}
//void score_classify(int score){
//
//    if (score >= 600){
//        cout<<"yiben"<<endl;
//        if (score >= 650){
//            cout<<"qinghua"<<endl;
//        }
//        else if (score >=640 ){
//            cout<<"beida"<<endl;
//        }
//    }
//    else if(score > 500){
//        cout<<"erben"<<endl;
//    }
//}
//int score = 0;
//cout<<"Enter your score:"<<endl;
//cin>>score;
//cout<<"Your score is "<<score<<endl;
//score_classify(score);
int main1()
{
    int r = 0;
    float pi = 3.14;
    std::cout<<"radius:";
    std::cin>>r;

    float area = pi * (r*r);
    std::cout<<"area = "<<area;
    return 0;

}

#include <iostream>
#include<cmath>
int main(){
    int w, h;
    double BMI;
    cin>>w>>h;
    BMI = floor(w / (h * h));
    cout<<BML<<endl;
    return 0;
}
#include <iostream>
using namespace std;
class HeartRates {
private:
    string fn, ln;
    int month, year, date, currentm, currenty, currentd;
public:
    HeartRates(string firstname, string lastname, int m, int d, int y );
    void setFirstName(string first );
    string getFirstName();
    void setLastName(string last );
    string getLastName();
    void setBirthMonth( int m );
    int getBirthMonth();
    void setBirthDay( int d );
    int getBirthDay();
    void setBirthYear( int y );
    int getBirthYear();
    int getCurrentMonth();
    void setCurrentMonth(int currentMonth);
    int getCurrentDay();
    void setCurrentDay(int currentDay);
    int getCurrentYear();
    void setCurrentYear(int currentYear);
    int getAge();
    int getMaximumHeartRate();
    int getMinimumTargetHeartRate();
    int getMaximumTargetHeartRate();
};
 HeartRates::HeartRates(string firstname, string lastname, int m, int d, int y) {
     fn = firstname;
     ln = lastname;
     month = m;
     year = y;
     date = d;
 }

 void HeartRates::setFirstName(string first) {
     fn = first;
 }
 string HeartRates::getFirstName() {
     return fn;
 }
 void HeartRates::setLastName(string last) {
     ln = last;
 }
 string HeartRates::getLastName() {
     return ln;
 }
 void HeartRates::setBirthYear(int y) {
     year = y;
 }
 int HeartRates::getBirthYear() {
     return year;
 }
 void HeartRates::setBirthMonth(int m) {
     month = m;
 }
 int HeartRates::getBirthMonth() {
     return month;
 }
 void HeartRates::setBirthDay(int d) {
     date = d;
 }
 int HeartRates::getBirthDay() {
     return date;
 }
 void HeartRates::setCurrentMonth(int currentMonth) {
     currentm = currentMonth;
 }
 int HeartRates::getCurrentMonth() {
     return currentm;
 }
 void HeartRates::setCurrentYear(int currentYear) {
     currenty = currentYear;
 }
 int HeartRates::getCurrentYear() {
     return currenty;
 }
 void HeartRates::setCurrentDay(int currentDay) {
     currentd = currentDay;
 }
 int HeartRates::getCurrentDay() {
     return currentd;
 }
 int HeartRates::getAge() {
     int age=0;
     if (currentd >= date){
         if (month > currentm){
             age = (currenty - year)-1;
             return age;
         }
         else if (month <= currentm){
             age = (currenty - year);
             return age;
         }
     }
     if (currentd < date){
         if (month >= currentm){
             age = (currenty - year)-1;
             return age;
         }
         else if (month < currentm){
             age = (currenty - year) ;
             return age;
         }
     }
 }
 int HeartRates::getMaximumHeartRate() {
     int maxheartrate = 220 - getAge();
     return maxheartrate;
 }
 int HeartRates::getMinimumTargetHeartRate() {
     int mintargetheartrate = getMaximumHeartRate() * 0.5;
     return mintargetheartrate;
 }
 int HeartRates::getMaximumTargetHeartRate() {
     int maxtargetheartrate = getMaximumHeartRate() * 0.85;
     return maxtargetheartrate;
 }
#include<iostream>










