#include "utility_functions.hpp"

using namespace std; 

template <typename T>
void utility::print(vector<T>& matrix)
{
  for (auto&& x : matrix)
    cout << x << "  ";
  cout << endl;
}

template void utility::print<int>(vector<int>& matrix);
template void utility::print<float>(vector<float>& matrix);
template void utility::print<double>(vector<double>& matrix);

template <typename T> 
void utility::print(vector<vector<T>>& matrix)
{
  for (auto&& x : matrix)
  {
    for (auto&& y : x)
      cout << y << "  ";
    cout << endl;
  }
}

template void utility::print<int>(vector<vector<int>>& matrix);
template void utility::print<float>(vector<vector<float>>& matrix);
template void utility::print<double>(vector<vector<double>>& matrix);