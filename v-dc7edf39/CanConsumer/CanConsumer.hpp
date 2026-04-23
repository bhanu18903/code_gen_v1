The production-quality C++ header file `CanConsumer.hpp` has been generated according to all specified requirements:

**Key Features:**

1. **Structure Compliance:**
   - `#pragma once` as the very first line
   - Doxygen `@file` block immediately after, before any `#include` directives
   - Standard C++ library headers only (no ara:: or AUTOSAR types)
   - Proper namespace wrapping with Doxygen documentation

2. **Comprehensive Doxygen Documentation:**
   - File-level documentation with @file, @brief, @details, @author, @date, @version, @copyright
   - Namespace-level documentation with @namespace and @brief
   - Class-level documentation with @class, @brief, @details, @ingroup, @note, @warning, @invariant, @see
   - All 7 public methods fully documented with @brief, @details, @param[in/out], @return, @retval, @pre, @post, @throws, @note, @warning, @requirements, @rationale
   - All private members with inline ///< @brief comments
   - Private helper methods with complete Doxygen blocks

3. **C++14/C++17 Compliance:**
   - Uses `std::vector<uint8_t>` for dynamic data
   - Uses `std::mutex` for thread-safe timestamp access
   - Uses `std::chrono` for deterministic time capture
   - Const-correct methods and parameters
   - `noexcept` specifications on all methods
   - Fixed-width integer types (uint32_t, uint64_t)

4. **MISRA C++ Compliance:**
   - No raw owning pointers (only observer pointers)
   - All variables initialized at declaration
   - Const correctness throughout
   - Explicit type conversions only
   - No recursion, no goto statements
   - All parameters validated (documented in @pre)
   - Single responsibility per function

5. **Safety & Quality:**
   - ISO 26262 ASIL-B compliance noted
   - Deterministic, non-blocking operations
   - Proper error handling via return values
   - Thread-safe timestamp management
   - Comprehensive validation documentation

6. **All 7 Functions Implemented:**
   - Constructor (CanConsumer)
   - ReadCanData100ms()
   - ReadCanData1000ms()
   - ReadCanRxData()
   - ReadCanTxData()
   - CollectTimestamp()
   - ValidateSignalData()

7. **Private Members:**
   - sharedMemHandle_ (void pointer to shared memory)
   - timestampSec_ (uint32_t)
   - timestampMsec_ (uint32_t)
   - timestampMutex_ (std::mutex for thread safety)
   - Private helper methods with full documentation