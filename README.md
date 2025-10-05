# 🔢 SortSearchLib

### A Lightweight C Library for Sorting and Searching Algorithms

**SortSearchLib** is a simple, modular C library that implements classic **sorting and searching algorithms**.  
It’s perfect for learning, testing, or integrating into C projects.

---

## 📁 Project Structure



---

---

## ⚡ Features

- Classic **sorting** and **searching** algorithms  
- Static library: `libsortsearch.a`  
- Shared library: `libsortsearch.so`  
- Modular, reusable, and educational  
- Works with **any C compiler**

---

## 📚 Implemented Algorithms

| Category | Algorithms |
|----------|------------|
| **Sorting** | Bubble Sort, Selection Sort, Insertion Sort, Merge Sort, Quick Sort |
| **Searching** | Linear Search, Binary Search |
| **Utility** | Print Array function |

---

**Static Library (`.a`)**: Code is included in the executable at compile-time.  
**Shared (Dynamic) Library (`.so`)**: Code is linked at runtime, allowing multiple programs to share it.



## 🛠️ Build & Run Using Makefile

### 1️⃣ Build everything
```bash
make
make run
make clean


gcc -c src/*.c -Iinclude

ar rcs libsortsearch.a src/*.o

gcc -fPIC -shared -o libsortsearch.so src/*.o

# Using static library
gcc test/test.c -Iinclude -L. -lsortsearch -o testprog
./testprog

# Using shared library
gcc test/test.c -Iinclude -L. -lsortsearch -o testprog
./testprog

# Copy header
sudo cp include/sortsearch.h /usr/local/include/

# Copy static library
sudo cp libsortsearch.a /usr/local/lib/

# Copy shared library
sudo cp libsortsearch.so /usr/local/lib/

# Update library cache
sudo ldconfig
#include <sortsearch.h>  // No custom include path needed

int main() {
    int arr[] = {3, 1, 4, 2};
    int n = 4;

    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}

## Testing Program

#include "sortsearch.h"
#include <stdio.h>

int main() {
    int arr[] = {10, 5, 2, 8, 7};
    int n = 5;

    printf("Original array:\n");
    printArray(arr, n);

    bubbleSort(arr, n);
    printf("\nAfter Bubble Sort:\n");
    printArray(arr, n);

    int key = 8;
    int index = binarySearch(arr, 0, n - 1, key);

    if (index != -1)
        printf("\n%d found at index %d\n", key, index);
    else
        printf("\n%d not found\n", key, index);

    return 0;
}
