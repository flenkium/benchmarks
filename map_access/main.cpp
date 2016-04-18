#include <ctime>
#include <iomanip>
#include <iostream>
#include <map>
#include <unordered_map>
#include <utility>
#include <vector>

float to_sec(clock_t const clk) {
  return static_cast<float>(clk) / CLOCKS_PER_SEC;
}

int main() {
  std::map<int, int> mymap;
  std::unordered_map<int, int> myUmap;
  int limit = 10000000;
  clock_t results[16];

  std::cout << "fill map with []" << std::endl;

  clock_t clk = clock();
  for (int i = 0; i < limit; ++i) {
    mymap[i] = i;
  }
  results[0] = clock() - clk;

  std::cout << "fill unordered_map with []" << std::endl;

  clk = clock();
  for (int i = 0; i < limit; ++i) {
    myUmap[i] = i;
  }
  results[1] = clock() - clk;

  std::cout << "fill map with insert()" << std::endl;

  mymap.clear();
  myUmap.clear();
  clk = clock();
  for (int i = 0; i < limit; ++i) {
    mymap.insert(std::make_pair(i, i));
  }
  results[2] = clock() - clk;

  std::cout << "fill unordered_map with insert()" << std::endl;

  clk = clock();
  for (int i = 0; i < limit; ++i) {
    myUmap.insert(std::make_pair(i, i));
  }
  results[3] = clock() - clk;

  std::cout << "fill map with emplace()" << std::endl;

  mymap.clear();
  myUmap.clear();
  clk = clock();
  for (int i = 0; i < limit; ++i) {
    mymap.emplace(i, i);
  }
  results[4] = clock() - clk;

  std::cout << "fill unordered_map with emplace()" << std::endl;

  clk = clock();
  for (int i = 0; i < limit; ++i) {
    myUmap.emplace(i, i);
  }
  results[5] = clock() - clk;

  std::cout << "change map with []" << std::endl;

  clk = clock();
  for (int i = 0; i < limit; ++i) {
    mymap[i] = i + i;
  }
  results[6] = clock() - clk;

  std::cout << "change unordered_map with []" << std::endl;

  clk = clock();
  for (int i = 0; i < limit; ++i) {
    myUmap[i] = i + i;
  }
  results[7] = clock() - clk;

  std::cout << "change map with at()" << std::endl;

  clk = clock();
  for (int i = 0; i < limit; ++i) {
    mymap.at(i) = i + i;
  }
  results[8] = clock() - clk;

  std::cout << "change unordered_map with at()" << std::endl;

  clk = clock();
  for (int i = 0; i < limit; ++i) {
    myUmap.at(i) = i + i;
  }
  results[9] = clock() - clk;

  std::cout << "read map with []" << std::endl;

  std::vector<int> vec(limit);
  clk = clock();
  for (int i = 0; i < limit; ++i) {
    vec[i] = mymap[i];
  }
  results[10] = clock() - clk;

  std::cout << "read unordered_map with []" << std::endl;

  clk = clock();
  for (int i = 0; i < limit; ++i) {
    vec[i] = myUmap[i];
  }
  results[11] = clock() - clk;

  std::cout << "read map with at()" << std::endl;

  clk = clock();
  for (int i = 0; i < limit; ++i) {
    vec[i] = mymap.at(i);
  }
  results[12] = clock() - clk;

  std::cout << "read unordered_map with at()" << std::endl;

  clk = clock();
  for (int i = 0; i < limit; ++i) {
    vec[i] = myUmap.at(i);
  }
  results[13] = clock() - clk;

  std::cout << "remove map" << std::endl;

  clk = clock();
  for (int i = 0; i < limit; ++i) {
    mymap.erase(i);
  }
  results[14] = clock() - clk;

  std::cout << "remove unordered_map" << std::endl;

  clk = clock();
  for (int i = 0; i < limit; ++i) {
    myUmap.erase(i);
  }
  results[15] = clock() - clk;


  std::cout << std::setprecision(5) << "#### results\n"
            << "    func()   | map     | umap\n"
	    << "    ---------+---------+--------\n"
	    << "    fill[]   | " << to_sec(results[0]) << " | " << to_sec(results[1]) << "\n"
	    << "    insert   | " << to_sec(results[2]) << " | " << to_sec(results[3]) << "\n"
	    << "    emplace  | " << to_sec(results[4]) << " | " << to_sec(results[5]) << "\n"
	    << "    change[] | " << to_sec(results[6]) << " | " << to_sec(results[7]) << "\n"
	    << "    at()     | " << to_sec(results[8]) << " | " << to_sec(results[9]) << "\n"
	    << "    read []  | " << to_sec(results[10]) << " | " << to_sec(results[11]) << "\n"
	    << "    read at  | " << to_sec(results[12]) << " | " << to_sec(results[13]) << "\n"
	    << "    remove   | " << to_sec(results[14]) << " | " << to_sec(results[15]) << "\n";

  return 0;
}
