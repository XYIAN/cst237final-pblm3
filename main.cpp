#include <iostream> 
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <stdio.h>
#include <ctype.h>
#include <stack>
#include <limits.h>
#include <unordered_map>
using namespace std;

float circleC(float input){
    //get circumference 
    float circCir = 2*3.14*input;
    //print circumferenc
    cout << endl<<"The circumference of the circle with radius = "<< input<< " meters is "<< circCir <<" meters." <<endl; 
    return circCir; //success
}
float circleA(float input){
    //get area
    float circArea = (3.14)*(input*input); 
    //print area  
    cout << endl << "The area of the circle with radius="<< input<<" meters is "<< circArea <<" square meters."<<endl;
    return circArea; //success
}
float triangleP(float input){
    //get perimeter p = a + b + c 
    float triPerim = 0; 
    triPerim =  input + input + input;
    //print perimeter 
    cout << "The perimeter of the tiangle with side=" << input <<" meters is " << triPerim << " meters"; 
    return triPerim; 
}
float triangleA(float input){
     //get area 
    float height = (input* sqrt(3))/2;
    float triArea =(1/2)*(input)*(height); 
    //print area 
    cout << endl << "The area of the triangle with side="<<input<< " meters is "<<triArea<<" square meters."<<endl;
    return input; 
}
float squareP(float input){
    //get perimeter 
    float squarePer = input * 4; 
    //print perimeter 
    cout << endl<< "The perimeter of the square with side="<< input << " meters is "<<squarePer<<" meters."<< endl; 
    return squarePer; 
}
float squareA(float input){  
    //get area 
    float squareArea = input*input; 
    //print area
    cout << "The area of the square with side="<< input << " meters is "<< squareArea << " square meters."<<endl; 
    return squareArea; 
}

int main() {
  //fill 
  char choice = 'Y'; 
  while(choice == 'Y'){
      cout << "Please enter a shape(1=Circle, 2=Triangle, 3=Square)";
      int shape; 
      cin >> shape; 
      float val;  
      if(shape == 1){//circle
        cout <<endl<< "Please enter value:";
        //cout <<"val is"<<val;
        circleC(val);
        //cout <<"val is"<<val;
        circleA(val); 
      
      }
      if(shape == 2){//triangle 
        cout <<endl<< "Please enter value:";
        float val; 
        cin >> val;
        //cout <<"val is"<<val;  
        triangleP(val);
        //cout <<"val is"<<val;
        triangleA(val);  
      }
      if(shape == 3){//square
        cout <<endl<< "Please enter value:";
        float val; 
        cin >> val;  
        squareP(val);
        squareA(val);      
      }
      cout << endl<< "Would you like to enter a new shape and value?(Y/N)";
      cin >> choice;  
  }
  cout<<endl<<"Thank you for running cstfinal problem 3! Now exiting";
}