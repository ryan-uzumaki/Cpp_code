#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
int account_balance_01;


void num_seperator(){//数字分离器
    while(true){
        long long numbers = 0;
        cout<<"Enter the number:\n"<<endl;
        cin>>numbers;
        if (numbers < 9999){
            int numbers_1 = numbers % 10;
            int numbers_2 = numbers - numbers_1;
            int numbers_3 = (numbers_2 % 100) / 10;
            int numbers_4 = numbers_2 -numbers_3 * 10;
            int numbers_5 = (numbers_4 % 1000) / 100;
            int numbers_6 = numbers_4 - numbers_5 * 100;
            int numbers_7 = numbers_6 /1000;
            cout<<numbers_7<<"   "<<numbers_5<<"   "<<numbers_3<<"   "<<numbers_1<<"   "<<endl;
            break;
        }
        else{

            cout<<"The number you have enter has out of range, please enter again\n";

        }

    }

}

void calculator(){//算术列表器
    int i = 0;
    cout<<"integer\tsquare\tcube"<<endl;
    while (i <= 10){
        cout<<(i)<<"\t"<<(i*i)<<"\t"<<(i*i*i)<<endl;
        ++i;
    }
}

void movie_rating(){//switch语句
    int rate = 0;
    cout<<"Enter the rate"<<endl;
    cin>>rate;
    switch(rate){
        case 10:
            cout<<"Great movie"<<endl;
            break;
        case 9:
            cout<<"Classic movie"<<endl;
            break;
    }
}

void do_while(){//do...while语句
    int num = 0;
    do{
        cout<<num<<endl;
        num += 1;
    }
    while(num < 9);
}

void num_classify(){//判断水仙花数
    int sxhnumber = 100;
    int a = 0;
    int b = 0;
    int c = 0;
    while ((sxhnumber >= 100) && (sxhnumber <=999)){
        a = sxhnumber % 10;
        b = (sxhnumber / 10) %10;
        c = sxhnumber / 100;
        if (a*a*a+b*b*b+c*c*c == sxhnumber){
            cout<<sxhnumber<<endl;
            sxhnumber += 1;
        }
        else{
            sxhnumber += 1;
        }

    }

}

void recycle_for(){//for(起始表达式；退出循环条件；末尾循环体）
    for (int i_1 = 1; i_1 < 10; i_1 += 1){
        cout<<i_1<<endl;
    }
}

//class Account{
//public:
//    int account_balance = account_balance_01;
//    Account(){
//         int withdraw_money = 0;
//         if (account_balance == 0){
//             cout<<"Your account balance is:"<<account_balance<<"The initial balance is invalid"<<endl;
//         }
//         else if (account_balance != 0) {
//             cout << "Successfully access! The balance is:"<<account_balance<< endl;
//         }
//    }
//    void credit(){
//        account_balance = account_balance*2;
//        cout<<"Your account balance:"<<account_balance<<endl;
//    }
//    void debit(){
//        int withdraw_money = 0;
//        while(true){
//            cout<<"Withdraw money:"<<endl;
//            cin>>withdraw_money;
//            if ((withdraw_money) >= (account_balance)){
//                cout<<"Debit amount exceeded balance account"<<endl;
//            }
//            else if (withdraw_money <= account_balance){
//                account_balance -= withdraw_money;
//                break;
//            }
//        }
//    }
//    int get_balance(){
//        cout<<"The balance of your account is:"<<account_balance<<endl;
//        return account_balance;
//    }
//};

void KidHeight(int sex, double mum_height, double dad_height){
    double boy_height = 0;
    double girl_height = 0;
    while(true){
        if (sex == 1){
            boy_height = ((mum_height +dad_height) * 1.08)/2;
            cout<<boy_height<<endl;
            break;
        }
        else if (sex ==0){
            girl_height = ((dad_height * 0.932) + mum_height)/2;
            cout<<girl_height<<endl;
            break;
        }
    }

}



class Employee {
public:
    Employee(std::string, std::string, int); // constructor sets data members
    void setFirstName(std::string); // set first name
    std::string getFirstName(); // return first name
    void setLastName(std::string); // set last name
    std::string getLastName(); // return last name
    void setMonthlySalary(int); // set monthly salary
    int getMonthlySalary(); // return monthly salary
    std::string fn, ln;
    int sal;
};
Employee::Employee(std::string f, std::string l, int s)
    {
        fn = f;
        ln = l;
        if (s > 0)
            sal = s;
        else
            sal = 0;
    }
void Employee::setFirstName(std::string f)
    {
        fn = f;
    }
void Employee::setLastName(std::string l)
    {
        ln = l;
    }
void Employee::setMonthlySalary(int s)
    {
        if (s > 0) sal = s; else sal = 0;
    }
std::string Employee::getFirstName()
    {
        return fn;
    }
std::string Employee::getLastName()
    {
        return ln;
    }
int Employee::getMonthlySalary()
    {
        return sal;
    }

class Invoice {
private:
public:
    Invoice(string number, string description, int count, int price);
    void setPartNumber(string number);
    string getPartNumber();
    void setPartDescription(string description);
    std::string getPartDescription();
    void setQuantity(int count);
    int getQuantity();
    void setPricePerItem(int price);
    int getPricePerItem();
    int getInvoiceAmount();
private:
    string components, descriptions;
    int numbers, perprice, totalprice;
};
Invoice::Invoice(string number, string description, int count, int price){
    components = number;
    descriptions = description;
    if (count < 0){
        numbers = 0;
    }
    else{
        numbers = count;
    }
    if (price < 0){
        perprice = 0;
    }
    else {
        perprice = price;
    }
}
void Invoice::setPartNumber(string number) {
    components = number;
}
string Invoice::getPartNumber() {
    return components;
}
void Invoice::setPartDescription(string description) {
    descriptions = description;
}
string Invoice::getPartDescription() {
    return descriptions;
}
void Invoice::setQuantity(int count) {
    if (count < 0){
        numbers = 0;
    }
    else if (count > 0){
        numbers = count;
    }
}
int Invoice::getQuantity() {
    return numbers;
}
void Invoice::setPricePerItem(int price) {
    if (price < 0){
        perprice = 0;
    }
    else{
        perprice = price;
    }
}
int Invoice::getPricePerItem() {
    return perprice;
}
int Invoice::getInvoiceAmount() {
    totalprice = numbers * perprice;
    return totalprice;
}

class Account {
public:
    explicit Account(int); // constructor initializes balance
    void credit(int); // add an amount to the account balance
    void debit(int); // subtract an amount from the account balance
    int getBalance(); // return the account balance
private:
    int balanced;
};
Account::Account(int bal){
    if (bal < 0 ){
        balanced = 0;
        cout<<"Error: Initial balance cannot be negative."<<endl;
    }
    else if (bal >= 0 ){
        balanced = bal;
    }
}

void Account::credit(int add){
    balanced += add;
}

void Account::debit(int deb) {
    if (deb > balanced){
        cout<<"Debit amount exceeded account balance."<<endl;
    }
    if (deb <= balanced){
        balanced -= deb;
    }
}

int Account::getBalance() {
    return balanced;
}
int main(){
    while (true){
        int a1, a2, a3, a4, a5;
        int b1, b2, b3;
        int g = 0;
        cin>>g;
        if (g == 0){
            break;
        }
        else if (g != 0 ){
            a1 = g % 10;
            b1 = g - a1;
            a2 = (b1 % 100) / 10;
            b2 = (b1 - (a2 * 10)) / 100;
            a3 = b2 % 10;
            b3 = (b2 - a3) / 10;
            a4 = b3 % 10;
            a5 = (b3 - a4) / 10;
            if ((a1 == a5) && (a2 == a4)){
                cout<<g<<"is a palindrome"<<endl;
            }
            else if ((a1 != a5) || (a2 != a4)){
                cout<<g<<"is not a palindrome"<<endl;
            }
        }
    }
    return 0;
}
//    srand(unsigned(time(0)));
//    account_balance_01 = rand() %100 + 1;
//    num_seperator();
//    calculator();
//    num_classify();
//    recycle_for();
//    Account person_1;
//    person_1.credit();
//    person_1.debit();
//    person_1.get_balance();

//    int n = 1;
//    int i = 1;
//    int s = 1;
////    int r = 0;
//    cout<<"i ="<<endl;
//    cin>>i;
//    while (n <= i){
//        s = s * 3;
//        ++n;
//    }
//    cout<<s<<endl;
//    int s = 0;
//    double m = 0;
//    double d = 0;
//    cout<<"Enter the s([1] stands for male; [0] stands for female:"<<endl;
//    cin>>s;
//    cout<<"Enter the m:"<<endl;
//    cin>>m;
//    cout<<"Enter the d:"<<endl;
//    cin>>d;
//    KidHeight(s, m, d);





//    int a, b;
//    cout<<"a = \n"<<"b = \n"<<endl;
//    cin>>a>>b;
//    cout<<a<<endl;
//    cout<<b<<endl;
