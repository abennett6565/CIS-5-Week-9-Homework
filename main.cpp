#include <iostream>

// Homework 9 — Andrew Bennett
// CIS 5 Week 09 · Menu on the lab
// Paste your lab functions here, or fill the TODOs.

void printMenu() {
  std::cout << "1) Average  2) High  3) Quit\n";
}

// take in an array of integers to find the average of and how many integers there are in the array
double average(const int a[], int n) {
  // If n == 0, return 0
  if(n == 0)
  {
    return 0.0;
  }

  int sum = 0;

  // calculate the sum of all integers in the given array
  for(int i = 0; i < n; i++)
  {
    sum += a[i];
  }

  // convert sum into a float/double then calculate the average of sum using the given number of integers
  return sum * 1.0 / n;
  
}

// output the value of the given double shown as an average
void printSummary(double avg) {
  std::cout << "Average: " << avg << "\n";
}

int high(const int a[], int n) {
  //return the max. Seed from a[0].
  int max = a[0];

  for(int i = 0; i < n; i++)
  {
    if(max < a[i])
    {
      max = a[i];
    }
  }

  return max;  
}

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  int choice = 0;

  do {
    printMenu();

    std::cin >> choice;
    
    if (choice == 1) {
      double avg = average(scores, N);

      printSummary(avg);
    } 
    
    else if (choice == 2) {
      int top = high(scores, N);

      std::cout << "High: " << top << "\n";
    }
  } while (choice != 3);

  return 0;
}
