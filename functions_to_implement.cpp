/* String functions section */
#include <iostream>
#include <vector>
#include <sstream>
#include <string>


using namespace std;


// Splits a single string on separator into a vector of strings
vector <string> Split( string whole,  string separator) {
    size_t pos_start = 0, pos_end, delim_len = separator.length();
    string token;
    vector<string> res;

    while ((pos_end = whole.find (separator, pos_start)) != string::npos) {
        token = whole.substr (pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back (token);
    }

    res.push_back (whole.substr (pos_start));
    return res;
}

// takes two strings and returns a new string that is the result of removing all occurrences of s2 from s1.
 string RemoveAllSubstrings( string s1,  string s2) {
    size_t pos = string::npos;
    while ((pos != s1.find(s2)) != string::npos) {
        s1.erase(pos, s2.length());
    }
    return s1;
 }

// takes two strings and returns a new string that is the result of removing the first occurrence of s2 from s1.
 string RemoveFirstSubstring( string s1,  string s2) {
    size_t pos = s1.find(s2);
    if (pos != string::npos) {
        s1.erase(pos, s2.length());
    }
    return s1;
 }

// Joins all strings in a vector together, using the glue string in between them
 string Join( vector< string> pieces,  string glue){
    string s = "";
    for(int i = 0; i < pieces.size() - 1; i++) {
        s.append(pieces[i]);
        s.append(glue);
    }
    s.append(pieces[pieces.size()]);
 }

// takes two vectors of integers, a and b. The function then removes elements from a if they are also in b.
// If the integer is in b, but not in a, nothing happens.
 vector<int> MatchVectors( vector<int> a,  vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (a[i] == b[j]) {
                a.erase(a.begin() + i);
            }
            
        }
    }
 }

// divides an input integer by 2 until it is impossible to do so, then returns the final number.
// (16 = 2 * 2 * 2 * 2 * 1 -> 1, 7 -> 7, 26 = 2 * 13 -> 13, 52 = 2 * 2 * 13 -> 13)
int RemoveTwos(int original);

// takes a vector of integers and removes all elements evenly divisible by the passed in int
 vector<int> MultiplesFilter( vector<int>, int divides_by);

// returns a vector with true for even numbers and false for odd numbers
 vector<bool> EvenMask( vector<int>);

// returns a vector with true for odd numbers and false for even numbers
 vector<bool> OddMask( vector<int>);

// Sums all numbers in a vector and returns the resulting value
int Sum( vector<int> nums);

// Multiplies all numbers in a vector together and returns the resulting value
int Product( vector<int> nums);

// Adds an integer n to each element of a given vector
 vector<int> VectorPlusN( vector<int> v, int n);

// Multiples an integer n with each element of a given vector
 vector<int> VectorTimesN( vector<int> v, int n);

// takes in two integers and returns a vector of size n with
// values n*1, n*2, n*3... up to n*m
 vector<int> Multiples(int n, int m);

// takes an integer n that is >= 0 and returns a vector of all squares up to n^n (1^1, 2^2, 3^3, .... n^n)
 vector<int> SquaresUntil(int n);

// takes an int, n, and returns the nth value of the fibonacci sequence (1, 1, 2, 3, 5, 8, 13, ...)
int NthFibonacci(int n);

// takes an int, n, and returns the factorial of that int (n!)
int Factorial(int n);

// returns -1 if the number is negative and 1 if positive
int Sign(int num);

// takes two vectors of doubles, a and b. The function then removes elements from a if they are also in b.
// If the double is in b, but not in a, nothing happens.
 vector<double> MatchVectors( vector<double> a,  vector<double> b);

// takes a vector of doubles and removes all elements evenly divisible by the passed in double
 vector<double> MultiplesFilter( vector<double>, double divides_by);

// returns a vector with true for numbers greater than the second parameters and false for those less than or equal to
 vector<bool> GreaterMask( vector<double> nums, double greater_than);

// returns a vector with true for numbers less than the second parameters and false for those greater than or equal to
 vector<bool> LessMask( vector<double> nums, double less_than);

// returns a vector with true for numbers greater than the second parameters and false for those less than or equal to
 vector<bool> GreaterMask( vector<int> nums, int greater_than);

// returns a vector with true for numbers less than the second parameters and false for those greater than or equal to
 vector<bool> LessMask( vector<int> nums, int less_than);

// Sums all numbers in a vector and returns the resulting value
double Sum( vector<double> nums);

// Multiplies all numbers in a vector together and returns the resulting value
double Product( vector<double> nums);

// Adds an double n to each element of a given vector
 vector<double> VectorPlusN( vector<double> v, double n);

// Multiples an double n with each element of a given vector
 vector<double> VectorTimesN( vector<double> v, double n);

// takes in two doubles and returns a vector of size n with
// values n*1, n*2, n*3... up to n*m
 vector<double> Multiples(double n, double m);

// returns -1 if the number is negative and 1 if positive
double Sign(double num);


// adds n to each element of the vector
 vector<int> AddN( vector<int>, int n);

// adds n to each element of the vector
 vector<double> AddN( vector<double>, double n);

// adds n to each element of the vector
 vector< string> AddN( vector< string>,  string n);


// subtracts n to each element of the vector
 vector<int> SubtractN( vector<int>, int n);

// subtracts n to each element of the vector
 vector<double> SubtractN( vector<double>, double n);
