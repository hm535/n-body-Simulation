#include "utility_functions.hpp"

#include <vector>

using namespace std;


namespace tests {

void test_print()
{
  vector<int> v = {5, 10, 15, 20};
  utility::print<int>(v);
  cout << endl;

  vector<vector<int>> v2 = {{5, 10, 15, 20}, { 2, 4, 8, 16}};
  utility::print<int>(v2);
  cout << endl;
}

}