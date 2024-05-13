#include <iostream>
#include <random>      // to generate absolute values for rand()  and Srand()
#include <ctime>        // Ctime hearder for time() function

using namespace std;    

int main(){

    //initialize the random number generator of current time
    srand(time(0));

    // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12; 
    //declare duration
    const int subscriptionDuration = 10;

    //use switch statement condtion to check out message for validation of subscription
    switch(daysUntilExpiration){
        case 0:
            cout << "your subscription has expired." <<endl;
            break;

        case 1:
            cout << "your subscription expires within a day! Renew now and save 20%!" <<endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout<< "Your subscription expires in " <<daysUntilExpiration << "days. Renew now and save 10%!" <<endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout<< "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout<< "You have an active subscription. " <<endl;
            break;
    }
    return 0;
}