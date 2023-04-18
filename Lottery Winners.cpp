#include <iostream>
using namespace std;

int main(){
   int winner;
   int user[] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
   cout << "Enter this week's 5-digit winning lottery number: ";
   cin >> winner;
   for(int i = 0; i < 10; i++){
       if(user[i] == winner){
           cout << "You won this week's lottery\n";
           return 0;
       }
   }
   cout << "You did not win this week\n";
   return 0;
}
