//This code is supposed to sort, then find the missing number.
//Programmers: David Gomez, David Vazquez, Abraham Tinajero
#include <iostream>
using namespace std;
int main() {
  int ans;
  //This is the array of the numbers
  int numb[19] =  {17, 14, 12, 5, 3, 2, 10, 20, 4, 9, 1, 16, 13, 6, 19, 8, 15, 18, 11};
  
  //This is the bubble sort that sorts the numbers in ascending order

  int j,k;
  for (j=0;j<20;j++){
    for (k=j+1;k<19;k++){
      int temp;
      if (numb[j] > numb[k]){
        temp = numb[j];
        numb[j] = numb[k];
        numb[k] = temp;
      }
    }
  }
  //Prints out the numbers
  for (int i = 0;i < 19;i++){
    cout << numb[i] << endl;
   
  }
  //The end of the bubble sort
  //The beginning of checking for the finding the missing number
  for (int i = 0;i< 18;i++){
    if(numb[i]+1==numb[i+1]){

    }
    else{
      ans = numb[i]+1;
    }
  }
  cout << "\nThe missing Number is " << ans;
}

//Inc
//Make it check the first number and try to find the next number that should come next 
