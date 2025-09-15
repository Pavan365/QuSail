# Use FetchContent to configure header libraries.
include(FetchContent)

# Eigen (3.4.0).
FetchContent_Declare(
    Eigen
    GIT_REPOSITORY  https://gitlab.com/libeigen/eigen.git
    GIT_TAG         3147391d946bb4b6c68edd901f2add6ac1f31f8c
)
# Configure header libraries.
FetchContent_MakeAvailable(Eigen)

# Check for Boost.
find_package(
    Boost
    REQUIRED
)
# Check for PKG-CONFIG && FFTW3.
find_package(
    PkgConfig
    REQUIRED
)
pkg_check_modules(
    FFTW
    REQUIRED
    IMPORTED_TARGET
    fftw3
)

# Check for Catch2.
find_package(Catch2)
