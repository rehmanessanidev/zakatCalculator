#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float calculateZakat(int income, float zakatRate) {
  float payableZakat = income * zakatRate;
  return payableZakat;
}

int main() {
  int annualIncome = 0;
  const float zakatRate = 0.025;

  cout << "--Welcome To Zakat Calculator--" << endl;
  cout << "Enter Annual Income (Only Enter Positive Integer Values): " << endl;
  cin >> annualIncome;
  
  while (annualIncome < 0) {
    cout << "Incorrect Value" << endl;
    cout << "Enter Annual Income: " << endl;
    cin >> annualIncome;
    }

  cout << "Annual Income: $" << annualIncome << endl;
  cout << "Zakat Rate: " << zakatRate << endl;
  cout << "Total Payable Zakat: $" << calculateZakat(annualIncome, zakatRate) << endl;
  cout << "Thank You!" << endl;

  
}