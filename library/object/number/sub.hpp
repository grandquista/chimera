// Copyright (c) 2017 Adam Grandquist <grandquista@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

#include "object/number/number.hpp"

namespace chimera {
  namespace library {
    namespace object {
      namespace number {
        Number operator-(std::uint64_t left, Base right);
        Number operator-(std::uint64_t left, const Natural &right);
        Number operator-(std::uint64_t left, const Negative &right);
        Number operator-(std::uint64_t left, const Rational &right);
        Number operator-(std::uint64_t left, const Imag &right);
        Number operator-(std::uint64_t left, const Complex &right);

        Number operator-(Base left, std::uint64_t right);
        Number operator-(Base left, Base right);
        Number operator-(Base left, const Natural &right);
        Number operator-(Base left, const Negative &right);
        Number operator-(Base left, const Rational &right);
        Number operator-(Base left, const Imag &right);
        Number operator-(Base left, const Complex &right);

        Number operator-(const Natural &left, std::uint64_t right);
        Number operator-(const Natural &left, Base right);
        Number operator-(const Natural &left, const Natural &right);
        Number operator-(const Natural &left, const Negative &right);
        Number operator-(const Natural &left, const Rational &right);
        Number operator-(const Natural &left, const Imag &right);
        Number operator-(const Natural &left, const Complex &right);

        Number operator-(const Negative &left, std::uint64_t right);
        Number operator-(const Negative &left, Base right);
        Number operator-(const Negative &left, const Natural &right);
        Number operator-(const Negative &left, const Negative &right);
        Number operator-(const Negative &left, const Rational &right);
        Number operator-(const Negative &left, const Imag &right);
        Number operator-(const Negative &left, const Complex &right);

        Number operator-(const Rational &left, std::uint64_t right);
        Number operator-(const Rational &left, Base right);
        Number operator-(const Rational &left, const Natural &right);
        Number operator-(const Rational &left, const Negative &right);
        Number operator-(const Rational &left, const Rational &right);
        Number operator-(const Rational &left, const Imag &right);
        Number operator-(const Rational &left, const Complex &right);

        Number operator-(const Imag &left, std::uint64_t right);
        Number operator-(const Imag &left, Base right);
        Number operator-(const Imag &left, const Natural &right);
        Number operator-(const Imag &left, const Negative &right);
        Number operator-(const Imag &left, const Rational &right);
        Number operator-(const Imag &left, const Imag &right);
        Number operator-(const Imag &left, const Complex &right);

        Number operator-(const Complex &left, std::uint64_t right);
        Number operator-(const Complex &left, Base right);
        Number operator-(const Complex &left, const Natural &right);
        Number operator-(const Complex &left, const Negative &right);
        Number operator-(const Complex &left, const Rational &right);
        Number operator-(const Complex &left, const Imag &right);
        Number operator-(const Complex &left, const Complex &right);
      } // namespace number
    }   // namespace object
  }     // namespace library
} // namespace chimera
