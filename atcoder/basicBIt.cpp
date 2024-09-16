// Checks if kth bit of x is set (1) or not (0)
int check_kth_bit(int x, int k) {
  return (x >> k) & 1;
}
