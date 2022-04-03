#include <iostream>
#include <string>
#include <list>
#include <cstdlib>
#include <ctime>

using namespace std;

void printi(int text){ cout << text << endl; }
void prints(string text){ cout << text << endl; }

long int random(int to) {
    srand((unsigned) time(0));
    int RandomNumber = rand(); string output;
    for(short int c = 0; c < to; c++){
        output += to_string(RandomNumber)[c];
    }
    return stoi(output);
}

class encrypt_phone_number{
    private:
        long int pseudo_random_number = random(6);
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

            dissolvePhoneNumber = pseudo_random_number*120000 - dissolvePhoneNumber;

            cout << "( " << pseudo_random_number*120000 << " - " << dissolvePhoneNumber << " )" << " * ";
            for(auto v: numbers)
                cout << v << " * ";
            cout << "1" << endl;
        }
};

int main() {
    encrypt_phone_number userphone;
    userphone.phonenumber = 0; // Your phone number here
    userphone.dissolve();
    return 0;

}
