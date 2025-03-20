//
// Created by ofalo on 20.03.2025.
//

#ifndef BANK_H
#define BANK_H
#include <iostream>
#include<string>
//app care sa gestioneze conturi de banca
//contine: nume client, iban, suma
//putem: depozita, extrage bani
using namespace std;

class Bankaccount {
    private:
    string name;
    string iban;
    double balance;
    public:
    Bankaccount(string iban,string name ) {
        this->iban = iban;
        this->balance = 0.0;
        this->name = name;
        cout << "Bankaccount created" << iban<<endl;
    }
    Bankaccount(string iban, double balance, string name):
    Bankaccount(iban, name){
        this->iban = iban;
        this->balance = balance;
        this->name = name;

    }


    string getIban() {
        return iban;
    }
    double getBalance() {
        return balance;
    }
    bool deposit(double amount) {


    }

    ~Bankaccount() {
        cout << "Bankaccount deleted" << endl;
    }

};





#endif //BANK_H
