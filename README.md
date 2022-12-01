# cpp-csv-parser-example
This is a CMake project example.

I load the csv parse library from https://github.com/ben-strasser/fast-cpp-csv-parser

* `ignore_no_column`: The default behavior, no flags are set
* `ignore_extra_column`: If a column with a name is in the file but not in the argument list, then it is silently ignored.
* `ignore_missing_column`: If a column with a name is not in the file but is in the argument list, then read_row will not modify the corresponding variable.
