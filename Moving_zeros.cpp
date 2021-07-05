
//move_zeros({1, 0, 1, 2, 0, 1, 3}) // returns {1, 1, 2, 1, 3, 0, 0}

auto move_zeroes(std::vector<int> v) {
  stable_partition(begin(v), end(v), std::negate());
  return v;
}
