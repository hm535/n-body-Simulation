#ifndef UTILITY_FUNCTIONS_HPP_
#define UTILITY_FUNCTIONS_HPP_

#include <cstdlib>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

namespace utility
{

template <typename T>
void print( vector<T>& matrix );

template <typename T>
void print( vector<vector<T>>& matrix );

}

#endif // UTILITY_FUNCTIONS_HPP_