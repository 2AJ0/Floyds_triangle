# Floyd's Triangle — Multi-Language Implementation

A clean, consistent implementation of **Floyd's Triangle** in five languages: **C, C++, Java, Python, and JavaScript**. All five versions use the exact same underlying algorithm, so you can compare syntax across languages side by side.

## 📐 Algorithm

Floyd's Triangle is a right-angled triangle filled with **consecutive natural numbers**, where row `i` contains `i` numbers.

**Approach — single running counter:**
1. Start a counter at `1`.
2. For each row `i` from `1` to `numRows`:
   - Print `i` numbers, starting from the current counter value.
   - Increment the counter after every number printed.
3. Move to the next row and repeat.

No formulas or row-start calculations are needed — the counter naturally flows across rows, since it's never reset.

This gives an **O(n²) time, O(1) extra space** solution (excluding output) — just one integer counter and two loops.

## 📁 Project Structure

```
├── floyds_triangle.c      # C implementation
├── floyds_triangle.cpp    # C++ implementation
├── FloydsTriangle.java    # Java implementation
├── floyds_triangle.py     # Python implementation
├── floyds_triangle.js     # JavaScript implementation
└── README.md
```

## ▶️ How to Run

### C
```bash
gcc floyds_triangle.c -o floyds_triangle
./floyds_triangle
```

### C++
```bash
g++ floyds_triangle.cpp -o floyds_triangle
./floyds_triangle
```

### Java
```bash
javac FloydsTriangle.java
java FloydsTriangle
```

### Python
```bash
python3 floyds_triangle.py
```

### JavaScript (Node.js)
```bash
node floyds_triangle.js
```

Each program will prompt:
```
Enter number of rows:
```

## 📊 Sample Output (5 rows)

```
   1
   2   3
   4   5   6
   7   8   9  10
  11  12  13  14  15
```

## ✅ Why This Approach?

| Feature | Benefit |
|---|---|
| Single running counter | No need to recompute row-start values |
| Same logic across languages | Easy to compare syntax and idioms |
| No extra arrays or recursion | Constant extra space, very memory-efficient |
| Simple loop structure | Easy to read, extend, or port to other languages |

## 🛠️ Requirements

- **C**: GCC or any standard C compiler
- **C++**: g++ (C++11 or later)
- **Java**: JDK 8+
- **Python**: Python 3.6+
- **JavaScript**: Node.js 12+

## 📄 License

Feel free to use, modify, and share this project for learning purposes.
