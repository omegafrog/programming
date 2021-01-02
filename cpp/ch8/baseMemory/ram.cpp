#include "ram.hpp"

RAM::RAM(int capacity) : BaseMemory(capacity) { size = 0; }

void RAM::write(int index, char ch) {
  put(ch, index);
  size++;
}

char RAM::read(int index) { return get(index); }
