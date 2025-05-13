// An Evolving project (changes are based on better c++ concepts)
#include <iostream>
using namespace std;

//function declaration
    double sum(double num1, double num2){
        return num1+num2;
    }
    double difference(double num1, double num2){
        return num1-num2;
    }
    double product(double num1, double num2){
        return num1*num2;
    }
    double division(double num1, double num2){
        if (num2==0){
            cout<<"Invalid Operation on division: Division by Zero"<<endl;
            return 0; // this line indicated to stop the rest of execution in division function. 
            // So return wont be executed if value of num2 is 0
            // if the "if statement" is false, execution will proceed to return which is the correct logic.
        }
            
        return num1/num2;

int main() {
    double num1, num2;

    // Input two numbers. which is also possible this way. Much efficient.
    cin >> num1 >> num2;

    // Output the sum
   cout << "The sum is "<<sum(num1, num2) << endl;
   cout << "The difference is "<<difference(num1, num2) << endl;
   cout << "The product is "<<product(num1, num2)<< endl;
   cout << "The quotient is "<<division(num1, num2) << endl;
        
    return 0;
}

 









