# FsLogger
A thread-safe, high-precision C++ logging and exception handling library.

## Features
* **Thread-Safety**: Uses `std::mutex` to synchronize console output across multiple threads.
* **Temporal Accuracy**: `FsDate` provides millisecond-level precision (YYYY/MM/DD HH:MM:SS.mmm).
* **Macro-Driven**: Automatically captures `__FILE__` and `__LINE__` for every log entry.
* **Exception Tracing**: Custom `FsException` with call stack tracking.

## Build
```bash
mkdir build && cd build
cmake ..
make

---

### 3. Push to GitHub (WSL Commands)
Since you are on **WSL Debian**, you will use the command line to push your code. Replace `your-username` with your actual GitHub handle:

```bash
cd ~/projects/FsLogger

# Initialize and commit
git init
git add .
git commit -m "Initial commit: Thread-safe FsLogger with temporal precision"

# Create the repo on GitHub (do this in your browser first), then link it:
git remote add origin https://github.com/your-username/FsLogger.git
git branch -M main
git push -u origin main
