#include <iostream>
#include <random>      // to generate absolute values for rand()  and Srand()
#include <ctime>        // Ctime hearder for time() function

using namespace std;    

int main(){

    srand(time(0));

    // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12; 
    const int subscriptionDuration = 10;

    if(daysUntilExpiration <= subscriptionDuration && daysUntilExpiration > 5) {
        cout<<"your subscription will expire soon. Renew now!"<<endl;

    }else if(daysUntilExpiration <= 5 && daysUntilExpiration > 1){
        cout<<"your subscription is expired in" << daysUntilExpiration << "days. Renew now and save 10%!"<<endl;
    
    }else if(daysUntilExpiration == 1){
        cout<<"your subscription is expires within a day! Renew now and save 20%!"<<endl;
    
    }else if(daysUntilExpiration == 0){
        cout<<"your subscription is expired."<<endl;
    
    }else{
        cout<<"you have and active subscription."<<endl;
    }
    return 0;
}