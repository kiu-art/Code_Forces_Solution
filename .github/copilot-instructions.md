# Copilot Instructions for Codeforces Solutions

## Project Overview
This repository contains solutions to Codeforces competitive programming problems. Each file represents an independent problem solution, named using the Codeforces problem ID and human-readable title (e.g., `1030A_In_Search_of_an_Easy_Problem.cpp`). The project started August 19, 2025.

## Architecture & Code Organization
- **Flat structure**: One C++ file per problem solution (no subdirectories)
- **Independence**: Each solution is completely standalone - no shared utilities or cross-file dependencies
- **Build artifacts**: Compiled `.exe` files and `.cph/` directory (competitive programming helper cache) are present

## Code Patterns & Conventions

### Standard Template
Every solution follows this structure:
```cpp
#include <bits/stdc++.h>    // or specific includes
using namespace std;
#define int long long       // Often used for 64-bit integers

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

signed main() {  // or int main() when #define int not used
    fast_io();
    int t;
    cin >> t;           // Read number of test cases
    while(t--) {        // Process each test case
        // Problem-specific logic
    }
    return 0;
}
```

### Key Practices
1. **`#define int long long`**: Used to avoid integer overflow; requires `signed main()` instead of `int main()`
2. **Fast I/O**: Always call `fast_io()` to optimize input/output (critical for large test cases)
3. **Test case loops**: Most problems use `while(t--)` pattern for multiple test cases
4. **Headers**: Mix of `#include <bits/stdc++.h>` (includes everything) and specific headers like `<vector>`, `<algorithm>`
5. **Variable naming**: Concise single/double-letter variable names are common (`a`, `b`, `t`, `x`)

### Common Algorithmic Patterns
- **Sorting**: `sort(v.rbegin(), v.rend())` for descending order
- **Vector operations**: Frequent use of `push_back()`, size tracking
- **Modular arithmetic**: Heavy use of `%` operator for divisibility checks
- **Greedy approaches**: Many solutions use sorting followed by greedy selection

## Compilation & Execution
- **Compiler**: Assumes g++ (Windows MinGW based on `.exe` artifacts)
- **Quick test**: Solutions can be compiled with `g++ -o program.exe program.cpp`
- **Input/output**: Uses standard cin/cout for competitive programming judge compatibility

## Important Context for Development
- **Problem-first focus**: Each file solves a specific Codeforces problem statement
- **Competitive mindset**: Code prioritizes correctness and speed over maintainability
- **Learning progression**: Files are roughly ordered by problem ID (time added), showing learning progression
- **Single solution per file**: No multiple attempts or versioning within files (older approaches are sometimes commented out)

## When Adding New Solutions
1. Follow the standard template with `#include <bits/stdc++.h>` and `fast_io()`
2. Use `#define int long long` unless the problem specifically requires smaller data types
3. Handle multiple test cases with the `while(t--)` pattern
4. Name files as `{ProblemID}_{Problem_Title}.cpp` (e.g., `2176C_Problem_Name.cpp`)
5. Test locally before committing

## Common Headers to Consider
- `<bits/stdc++.h>`: Preferred in competitive programming (includes STL)
- `<vector>`: Dynamic arrays
- `<algorithm>`: sort, min, max, etc.
- `<iostream>`: cin, cout
- `<string>`: String operations
