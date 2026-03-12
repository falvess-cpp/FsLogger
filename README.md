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
