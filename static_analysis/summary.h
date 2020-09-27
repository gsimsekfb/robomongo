// scan-build, debug, macOS
. after src/robomongo/ (after %50)
src/robomongo/ssh/ssh.c             7 warn
fatal error: 'Qt… file not found  192 fatal err

// clang-tidy, debug, macOS
src/robomongo/ssh/ssh.c     8 warn
src/robomongo/*             6 warn
error: no member named 'has_value' in 'boost::optional<bool>' [clang-diagnostic-error]   61 err
error: 'mongo/util/static_observer.h' file not found [clang-diagnostic-error]             1 err	
