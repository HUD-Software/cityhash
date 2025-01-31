<div align="center">
  <img width="80%" background-color="white" src="https://hud-software.github.io/bande.png" alt="HUD-Software"/>
  <h1>Google CityHash</h1>
</div>

**_Table of contents_**

1. [Status](#status)
1. [Description](#description)
2. [Targets](#targets)
3. [Usage](#usage)
    1. [Fetch with CMake](#fetch-with-cmake)
    2. [Using portable CityHash functions](#using-portable-cityhash-functions)
    3. [Using CRC-32 intrinsic CityHash functions](#using-crc-32-intrinsic-cityhash-functions)
4. [Performance](#performance)
5. [For more informations](#for-more-informations)


</br>

# Status

| | |
| --- | --- |
| Windows build and test | [![msvc_2022_x86-64](https://img.shields.io/github/actions/workflow/status/hud-software/cityhash/windows_msvc_2022_x86-64.yml?label=MSVC%202022%20x86-64&logo=C%2B%2B&logoColor=lightgrey&style=flat-square)](https://github.com/HUD-Software/cityhash/actions/workflows/windows_msvc_2022_x86-64.yml) [![clang-cl_2022_x86-64](https://img.shields.io/github/actions/workflow/status/hud-software/cityhash/windows_clang_cl_2022_x86-64.yml?label=Clang-cl%202022%20x86-64&logo=C%2B%2B&logoColor=lightgrey&style=flat-square)](https://github.com/HUD-Software/cityhash/actions/workflows/windows_clang_cl_2022_x86-64.yml) [![mingw_x86_64](https://img.shields.io/github/actions/workflow/status/hud-software/cityhash/windows_mingw_x86_64.yml?label=MinGW%2064&logo=C%2B%2B&logoColor=lightgrey&style=flat-square)](https://github.com/HUD-Software/cityhash/actions/workflows/windows_mingw_x86_64.yml) [![wasm](https://img.shields.io/github/actions/workflow/status/hud-software/cityhash/windows_wasm.yml?label=WebAssembly&logo=C%2B%2B&logoColor=lightgrey&style=flat-square)](https://github.com/HUD-Software/cityhash/actions/workflows/windows_wasm.yml) |
| Ubuntu build and test | [![clang_14_x86-64](https://img.shields.io/github/actions/workflow/status/hud-software/cityhash/ubuntu_clang14_x86-64.yml?label=Clang%2014%20x86-64&logo=C%2B%2B&logoColor=lightgrey&style=flat-square)](https://github.com/HUD-Software/cityhash/actions/workflows/ubuntu_clang14_x86-64.yml) [![gcc_12_x86-64](https://img.shields.io/github/actions/workflow/status/hud-software/cityhash/ubuntu_gcc12_x86-64.yml?label=GCC%2012%20x86-64&logo=C%2B%2B&logoColor=lightgrey&style=flat-square)](https://github.com/HUD-Software/cityhash/actions/workflows/ubuntu_gcc12_x86-64.yml) |
| Sanitizer | [![MSVC](https://img.shields.io/github/actions/workflow/status/hud-software/cityhash/windows_msvc_2022_x86-64.yml?label=MSVC%202022%20x86-64&logo=C%2B%2B&logoColor=lightgrey&style=flat-square)](https://github.com/HUD-Software/cityhash/actions/workflows/sanitizer_msvc.yml) [![GCC](https://img.shields.io/github/actions/workflow/status/hud-software/cityhash/sanitizer_gcc12.yml?label=GCC%2012%20x86-64&logo=C%2B%2B&logoColor=lightgrey&style=flat-square)](https://github.com/HUD-Software/cityhash/actions/workflows/sanitizer_gcc12.yml) [![Clang](https://img.shields.io/github/actions/workflow/status/hud-software/cityhash/sanitizer_clang14.yml?label=Clang%2014%20x86-64&logo=C%2B%2B&logoColor=lightgrey&style=flat-square)](https://github.com/HUD-Software/cityhash/actions/workflows/sanitizer_clang14.yml) |
| Coverage | [![codecov](https://img.shields.io/codecov/c/github/hud-software/cityhash?label=Codecov&logo=Codecov&logoColor=lightgrey&style=flat-square)](https://app.codecov.io/gh/HUD-Software/cityhash) |
| Quality | [![codeql](https://img.shields.io/github/actions/workflow/status/hud-software/cityhash/codeQL.yml?label=CodeQL%20Quality&logo=C%2B%2B&logoColor=lightgrey&style=flat-square)](https://github.com/HUD-Software/cityhash/actions/workflows/codeQL.yml) [![codacy](https://img.shields.io/codacy/grade/8014adeaff854f95b7688b8bed741964?label=Codacy%20Quality&logo=Codacy&logoColor=lightgrey&style=flat-square)](https://app.codacy.com/gh/HUD-Software/cityhash/) |


</br>

# Description

`CityHash` is a [HUD-Software](https://github.com/HUD-Software) quality compliante [Google CityHash](https://github.com/google/cityhash) sources (SHA [ f5dc541](https://github.com/google/cityhash/commit/f5dc54147fcce12cefd16548c8e760d68ac04226)).

CityHash provides hash functions for strings. Functions mix the input bits thoroughly but are not suitable for cryptography.
CityHash-sys is tested on little-endian but should work on big-endian architecture.

</br>

# Targets

**_`cityhash` target_**

This is the library target. It produce a static library called `cityhash` that can be used with the interfaces describes in `src/cityhash` directory.

**_`cityhash_test` target_**

This is the test executable target. It produce a test executable that performs all `cityhash` tests.

</br>

# Usage

## Fetch with CMake
```CMake
include(FetchContent)
FetchContent_Declare(
    cityhash
    GIT_REPOSITORY  https://github.com/HUD-Software/cityhash.git
    GIT_TAG         /*Replace with SHA you want*/
)
FetchContent_MakeAvailable(cityhash)
target_link_libraries( my_bin_or_lib PRIVATE cityhash )
```

include(FetchContent)
## Using portable CityHash functions
</br>

**_32-bit hash_**

```C++
#include <cityhash/city.h>

// Retrieves a 32-bit hash of a slice of bytes.
const char* LIPSUM = "...";
uint32 hash_result = CityHash32(LIPSUM, strlen(LIPSUM)); // uint64 CityHash32(const char *buf, size_t len);
```

**_64-bit hash_**

```C++
#include <cityhash/city.h>

// Retrieves a 64-bit hash of a slice of bytes.
const char* LIPSUM = "...";
uint64 hash_result = CityHash64(LIPSUM, strlen(LIPSUM)); // uint64 CityHash64(const char *buf, size_t len);
```

```C++
#include <cityhash/city.h>

// Retrieves a 64-bit hash of a slice of bytes, a seed is also hashed into the result.
const char* LIPSUM = "...";
uint64 seed = 123;
uint64 hash_result = CityHash64WithSeed(LIPSUM, strlen(LIPSUM), seed); // uint64 CityHash64WithSeed(const char *, size_t, uint64);
```

```C++
#include <cityhash/city.h>

// Retrieves a 64-bit hash of a slice of bytes, two seeds is also hashed into the result.
const char* LIPSUM = "...";
uint64 seed_1 = 123;
uint64 seed_2 = 456;
uint64 hash_result = CityHash64WithSeeds(LIPSUM, strlen(LIPSUM), seed_1, seed_2); // uint64 CityHash64WithSeeds(const char *, size_t, uint64, uint64);
```

**_128-bit hash_**

```C++
#include <cityhash/city.h>

// Retrieves a 128-bit hash of a slice of bytes.
const char* LIPSUM = "...";
uint128 hash_result = CityHash128(LIPSUM, strlen(LIPSUM)); // uint128 CityHash128(const char *s, size_t len);
```

```C++
#include <cityhash/city.h>

// Retrieves a 128-bit hash of a slice of bytes, a seed is also hashed into the result.
const char* LIPSUM = "...";
uint128 seed = {low, high};
uint128 hash_result = CityHash128WithSeed(LIPSUM, strlen(LIPSUM), seed); // uint128 CityHash128WithSeed(const char *s, size_t len, uint128 seed);
```

```C++
#include <cityhash/city.h>

// Retrieves the 64 bits of a 128 bits input.
uint128 hash_128_bits = {low, high};
uint64 hash_64_bits = Hash128to64(hash_128_bits); // uint64 Hash128to64(const uint128 &x);
```

**_Note:_** _Depending on your compiler and hardware, it's likely faster than CityHash64() on sufficiently long strings.  It's slower than necessary on shorter strings._

</br>

## Using CRC-32 intrinsic CityHash functions

Some functions make usage of `sse 4.2` `x86_64` CRC-32 intrinsic (`_mm_crc32_u64`).

</br>

**_Caution:_** _Be sure that your target support `_mm_crc32_u64` intrinsic_ and that they are enabled (`sse 4.2` minimum and above (`avx` or `avx2`) )

Note that depending of the length of the buffer you want to hash, it can be faster to use the non-intrinsic version.
If the buffer to hash is less than 900 bytes, `CityHashCrc128WithSeed` and `CityHashCrc128` will respectivelly internally call `CityHash128WithSeed` and `CityHash128`, in this case, it is better to call directly `CityHash128WithSeed` or `CityHash128`.

</br>

**_128-bit hash with CRC-32 intrinsic_**

```C++
#include <cityhash/citycrc.h>

// Retrieves a 128-bit hash of a slice of bytes.
const char* LIPSUM = "...";
uint128 hash_result = CityHashCrc128(LIPSUM, strlen(LIPSUM)); // uint128 CityHashCrc128(const char *s, size_t len);
```

```C++
#include <cityhash/citycrc.h>

// Retrieves a 128-bit hash of a slice of bytes, a seed is also hashed into the result.
const char* LIPSUM = "...";
uint128 seed = {low, high};
uint128 hash_result = CityHashCrc128WithSeed(LIPSUM, strlen(LIPSUM), seed); // uint128 CityHashCrc128WithSeed(const char *s, size_t len, uint128 seed);
```

**_256-bit hash with CRC-32 intrinsic_**

```C++
#include <cityhash/citycrc.h>

// Retrieves a 256-bit hash fo a slice of bytes. The hash is a slice of u64 where [0..4] is [low..high] bits.
uint64 result[4] = {0};
CityHashCrc256(LIPSUM, strlen(LIPSUM), result); // void CityHashCrc256(const char *, size_t, uint64 *);
```

</br>

## Performance

On 64-bits hardware, CityHash is suitable for short string hashing, e.g., most hash table keys, especially `CityHash64` that is faster than `CityHash128`.

On 32-bits hardware, CityHash is the nearest competitor of Murmur3 on x86.

</br>

## For more informations

See the [Google Cityhash README](./src/google/README/)
