#include <assert.h>
#include <complex.h>
#include <ctype.h>
#include <errno.h>
#include <fenv.h>
#include <float.h>
#include <inttypes.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdalign.h>
#include <stdarg.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdnoreturn.h>
#include <string.h>
#include <tgmath.h>
#include <threads.h>
#include <time.h>
#include <uchar.h>
#include <wchar.h>
#include <wctype.h>


#include <string>
#include <xiosbase>
#include <algorithm>
#include <type_traits>
#include <iterator>
#include <stdlib.h>
#include <cstddef>
#include <cmath>
#include <set>
#include <iosfwd>
#include <streambuf>
#include <ostream>
#include <fstream>
#include <memory>
#include <stdexcept>
#include <vector>
#include <sstream>
#include <iomanip>
#include <limits>
#include <tuple>
#include <cstdlib>
#include <csignal>
#include <csetjmp>
#include <cstdarg>
#include <typeinfo>
#include <typeindex>
#include <type_traits>
#include <bitset>
#include <functional>
#include <utility>
#include <ctime>
#include <chrono>
#include <cstddef>
#include <initializer_list>
#include <tuple>
#include <any>
#include <optional>
#include <variant>
#include <new>
#include <memory>
#include <scoped_allocator>
#include <memory_resource>
#include <climits>
#include <cfloat>
#include <cstdint>
#include <cinttypes>
#include <limits>
#include <exception>
#include <stdexcept>
#include <cassert>
#include <system_error>
#include <cerrno>
#include <cctype>
#include <cwctype>
#include <cstring>
#include <cwchar>
#include <cuchar>
#include <string>
#include <string_view>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <execution>
#include <iterator>
#include <cmath>
#include <complex>
#include <valarray>
#include <random>
#include <numeric>
#include <ratio>
#include <cfenv>
#include <iosfwd>
#include <ios>
#include <istream>
#include <ostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <strstream>
#include <iomanip>
#include <streambuf>
#include <cstdio>
#include <locale>
#include <clocale>
#include <codecvt>
#include <regex>
#include <atomic>
#include <thread>
#include <mutex>
#include <shared_mutex>
#include <future>
#include <condition_variable>
#include <filesystem>

/*
OUTPUT:
{
  "last_modification_time": 1,
  "dependencies": ["C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/vadefs.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/vcruntime.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/assert.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/complex.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_wctype.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/ctype.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/errno.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/float.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/fenv.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/stdint.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/inttypes.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/locale.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/math.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/setjmp.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/signal.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/stddef.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_stdio_config.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_wstdio.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/stdio.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_malloc.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_search.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_wstdlib.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/stdlib.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/vcruntime_string.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_memcpy_s.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_memory.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_wstring.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/string.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_wtime.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/time.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/uchar.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_wconio.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_wdirect.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_wio.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_wprocess.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/sys/types.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/sys/stat.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/wchar.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/wctype.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/yvals.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cmath", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cstdlib", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xtr1common", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xtgmath.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cstdio", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cstring", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cstddef", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/initializer_list", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xstddef", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/type_traits", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/exception", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/malloc.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/corecrt_terminate.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/eh.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/vcruntime_exception.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cstdint", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/ymath.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cwchar", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/limits", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/vcruntime_new.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/new", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/vcruntime_new_debug.h", "C:/Program Files (x86)/Windows Kits/10/Include/10.0.14393.0/ucrt/crtdbg.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/iosfwd", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/utility", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xutility", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xmemory0", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xatomic0.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/mmintrin.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xmmintrin.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/emmintrin.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/pmmintrin.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/tmmintrin.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/smmintrin.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/nmmintrin.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/wmmintrin.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/immintrin.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/ammintrin.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/intrin.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xstring", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/stdexcept", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/vcruntime_typeinfo.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xlocinfo.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xlocinfo", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xfacet", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xlocale", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/system_error", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xiosbase", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/streambuf", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xlocnum", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/ios", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/ostream", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/istream", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/string", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xmemory", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/algorithm", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/iterator", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xtree", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/set", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/fstream", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/memory", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/vector", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/sstream", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xlocmon", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/ctime", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xloctime", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/iomanip", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/tuple", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/csignal", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/csetjmp", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cstdarg", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/typeindex", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/bitset", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xfunctional", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/functional", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/ratio", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/thr/xthrcommon.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/thr/xtimec.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/chrono", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/scoped_allocator", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cinttypes", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cctype", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cwctype", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cuchar", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/array", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/deque", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/list", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/forward_list", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/map", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xhash", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/unordered_set", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/unordered_map", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/stack", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/queue", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/complex", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xcomplex", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/valarray", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/random", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/numeric", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/cfenv", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/iostream", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/strstream", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xlocbuf", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xlocmes", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/locale", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/clocale", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/codecvt", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/regex", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xatomic.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/atomic", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/xxatomic", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/thr/xtime", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/thr/xthreads.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/thr/xthread", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/thread", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/mutex", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/condition_variable", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/shared_mutex", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/pplinterface.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/ppltaskscheduler.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/pplwin.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/pplcancellation_token.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/ppltasks.h", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/future", "C:/Program Files (x86)/Microsoft Visual Studio 14.0/VC/include/filesystem"]
}
*/
