//-------------------------------------------------------------------
//  redis-cpp
//  https://github.com/tdv/redis-cpp
//  Created:     03.2020
//  Copyright 2020 Dmitry Tkachenko (tkachenkodmitryv@gmail.com)
//  Distributed under the MIT License
//  (See accompanying file LICENSE)
//-------------------------------------------------------------------

#ifndef REDISCPP_DETAIL_CONFIG_H_
#define REDISCPP_DETAIL_CONFIG_H_

#if __cplusplus < 201703L
#error "RedisCpp. Requires C++ 17 or higher."
#endif

#ifdef REDISCPP_HEADER_ONLY
#   define REDISCPP_INLINE inline
#else
#   define REDISCPP_INLINE
#endif  // !REDISCPP_HEADER_ONLY

#endif  // !REDISCPP_DETAIL_CONFIG_H_
