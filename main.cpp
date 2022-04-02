#include <iostream>
#include <string>
#include <list>
#include <time.h>       /* time */

using namespace std;

void printi(int text){ cout << text << endl; }
void prints(string text){ cout << text << endl; }

class encrypt_phone_number{
    public:
        long int phonenumber;
        void dissolve() {
            std::list<int> numbers = { }; // contains divided numbers
            std::list<int> accepted = { 2, 3, 5 }; // contains accepted numbers
            long int dissolvePhoneNumber = encrypt_phone_number::phonenumber; // dissolve phone number

            while(true){
                long int dissolvePhoneNumberHistory = dissolvePhoneNumber;
                for(auto v: accepted)
                    if (dissolvePhoneNumber % v == 0){
                        dissolvePhoneNumber = dissolvePhoneNumber / v;
                        numbers.push_back(v);
                    }
                if(dissolvePhoneNumberHistory == dissolvePhoneNumber) { break; }
            }
            cout << dissolvePhoneNumber << " * ";
            for(auto v: numbers)
                cout << v << " * ";
            
        }
};

int main() {
    encrypt_phone_number userphone;
    userphone.phonenumber = 0; // your phone number here
    userphone.dissolve();

    return 0;
}
