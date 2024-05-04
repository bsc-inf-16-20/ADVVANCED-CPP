#include <iostream>
#include <random>


using namespace std;

int main() {
    // Seed the random number generator
    random_device rd;
    mt19937 gen(rd());

         // Generate a random number between 0 and 11
    uniform_int_distribution<> dis (0,11);
      int daysUntilExpiration =dis(gen);

    cout<<"Days until explaration: " <<daysUntilExpiration <<endl;

    // Output message based on conditions using switch statement
    switch (daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day! " << endl;
            cout<<"Renew now and save 20%!"<<endl;
 
            break;
        case 2 ... 5:
         cout << "Your subscription expires in " << daysUntilExpiration << " days. " <<endl;
         cout<<"Renew now and save 10%!"<<endl;

            break;
        case 6 ... 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;

            break;
        default:
            cout << "You have an active subscription." << endl;
            break;
    }

    return 0;
}