#include<iostream>
using namespace std;
 
int main(){
cout << "Hello World!" << endl;
cout << "how are hungry ? " << endl;
int n;
cin >> n;
if(n == 1){
    cout << "Eat Sanwich";
}

else if(n == 2){
    cout << "Eat Pizza";
}

else{
    cout << "Drink Water";
}
cout << "Are you still hungry ? ";


return 0;
}