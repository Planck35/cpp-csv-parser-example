#include "csv.h"
#include <string>
#include <iostream>
#include "config.h"

int main() {
  std::string source_dir(PROJECT_SOURCE_DIR);
  io::CSVReader<3> csv_reader(source_dir + "/ram.csv");
  csv_reader.read_header(io::ignore_missing_column, "vendor", "size", "speed");
  std::string vendor;
  int size;
  double speed;
  while (csv_reader.read_row(vendor, size, speed)) {
    std::cout << "vendor:" <<  vendor << ",size:" << size << ",speed:" << speed << std::endl;
  }
}