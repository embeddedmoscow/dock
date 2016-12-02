﻿#pragma once

/*
-------------------------------------------------------------------------------
foreman - unit-testing library for modern C++
-------------------------------------------------------------------------------
Version: 0.2.0
<https://github.com/emdc/foreman/>
-------------------------------------------------------------------------------

    Licensed under the MIT License <http://opensource.org/licenses/MIT>.
    Copyright (c) 2016 Eduard Pikhno <https://emdc.ru/> 
        aka emdc <https://github.com/emdc/>

Permission is hereby  granted, free of charge, to any  person obtaining a copy
of this software and associated  documentation files (the "Software"), to deal
in the Software  without restriction, including without  limitation the rights
to  use, copy,  modify, merge,  publish, distribute,  sublicense, and/or  sell
copies  of  the Software,  and  to  permit persons  to  whom  the Software  is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE  IS PROVIDED "AS  IS", WITHOUT WARRANTY  OF ANY KIND,  EXPRESS OR
IMPLIED,  INCLUDING BUT  NOT  LIMITED TO  THE  WARRANTIES OF  MERCHANTABILITY,
FITNESS FOR  A PARTICULAR PURPOSE AND  NONINFRINGEMENT. IN NO EVENT  SHALL THE
AUTHORS  OR COPYRIGHT  HOLDERS  BE  LIABLE FOR  ANY  CLAIM,  DAMAGES OR  OTHER
LIABILITY, WHETHER IN AN ACTION OF  CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE  OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
-------------------------------------------------------------------------------
*/

#include <cstdint>
#include <cstddef>
#include <iostream>
#include <functional>
#include <vector>
#include <tuple>

#include "format.hpp"
#include "assert.hpp"
#include "result.hpp"
#include "core.hpp"

namespace foreman {}