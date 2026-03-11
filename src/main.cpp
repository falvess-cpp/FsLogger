#include "fslogging.hpp"
#include "fsexc.hpp"
#include <iostream>

using namespace std;

void subFunction() {
    LOG_FUNC_ENTRY(); // Automatically logs entry with file and line
    
    LOG_INFO("Doing some work in subFunction...");
    
    // Simulate an error and throw your custom exception
    FUNC_TRY() // Macro for standardized try blocks
        LOG_WARN("Something looks suspicious, throwing exception.");
        throw FsException(1001, "Simulated Logistics Error");
    FUNC_CATCH() // Automatically captures call stack and rethrows

    LOG_FUNC_EXIT();
}

int main() {
    // Enable Trace via environment variable check in fslogger.cpp
    // To see TRACE logs, run: export LOG_TRACE=TRUE
    
    LOG_INFO("=== Starting FsLogger Integrated Test ===");

    try {
        subFunction();
    } catch (const FsException& ex) {
        LOG_ERROR("Caught exception in main: " + ex.getErrorMessage());
        // The call stack was already printed by the FUNC_CATCH macro
    }

    LOG_INFO("=== Test Completed ===");
    return 0;
}