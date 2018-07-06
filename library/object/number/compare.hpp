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

#include "object/number/details.hpp"

namespace chimera {
  namespace library {
    namespace object {
      namespace number {
        bool operator==(std::uint64_t left, Base right);
        bool operator==(std::uint64_t left, const Natural &right);
        bool operator==(std::uint64_t left, const Positive &right);
        bool operator==(std::uint64_t left, const Negative &right);
        bool operator==(std::uint64_t left, const Integer &right);
        bool operator==(std::uint64_t left, const Rational &right);

        bool operator==(std::uint64_t left, const Real &right);
        bool operator==(std::uint64_t left, const Imag &right);
        bool operator==(std::uint64_t left, const Complex &right);

        bool operator==(Base left, std::uint64_t right);
        bool operator==(Base left, Base right);
        bool operator==(Base left, const Natural &right);
        bool operator==(Base left, const Positive &right);
        bool operator==(Base left, const Negative &right);
        bool operator==(Base left, const Integer &right);
        bool operator==(Base left, const Rational &right);

        bool operator==(Base left, const Real &right);
        bool operator==(Base left, const Imag &right);
        bool operator==(Base left, const Complex &right);

        bool operator==(const Natural &left, std::uint64_t right);
        bool operator==(const Natural &left, Base right);
        bool operator==(const Natural &left, const Natural &right);
        bool operator==(const Natural &left, const Positive &right);
        bool operator==(const Natural &left, const Negative &right);
        bool operator==(const Natural &left, const Integer &right);
        bool operator==(const Natural &left, const Rational &right);

        bool operator==(const Natural &left, const Real &right);
        bool operator==(const Natural &left, const Imag &right);
        bool operator==(const Natural &left, const Complex &right);

        bool operator==(const Positive &left, std::uint64_t right);
        bool operator==(const Positive &left, Base right);
        bool operator==(const Positive &left, const Natural &right);
        bool operator==(const Positive &left, const Positive &right);
        bool operator==(const Positive &left, const Negative &right);
        bool operator==(const Positive &left, const Integer &right);
        bool operator==(const Positive &left, const Rational &right);
        bool operator==(const Positive &left, const Real &right);
        bool operator==(const Positive &left, const Imag &right);
        bool operator==(const Positive &left, const Complex &right);

        bool operator==(const Negative &left, std::uint64_t right);
        bool operator==(const Negative &left, Base right);
        bool operator==(const Negative &left, const Natural &right);
        bool operator==(const Negative &left, const Positive &right);
        bool operator==(const Negative &left, const Negative &right);
        bool operator==(const Negative &left, const Integer &right);
        bool operator==(const Negative &left, const Rational &right);

        bool operator==(const Negative &left, const Real &right);
        bool operator==(const Negative &left, const Imag &right);
        bool operator==(const Negative &left, const Complex &right);

        bool operator==(const Integer &left, std::uint64_t right);
        bool operator==(const Integer &left, Base right);
        bool operator==(const Integer &left, const Natural &right);
        bool operator==(const Integer &left, const Positive &right);
        bool operator==(const Integer &left, const Negative &right);
        bool operator==(const Integer &left, const Integer &right);
        bool operator==(const Integer &left, const Rational &right);

        bool operator==(const Integer &left, const Real &right);
        bool operator==(const Integer &left, const Imag &right);
        bool operator==(const Integer &left, const Complex &right);

        bool operator==(const Rational &left, std::uint64_t right);
        bool operator==(const Rational &left, Base right);
        bool operator==(const Rational &left, const Natural &right);
        bool operator==(const Rational &left, const Positive &right);
        bool operator==(const Rational &left, const Negative &right);
        bool operator==(const Rational &left, const Integer &right);
        bool operator==(const Rational &left, const Rational &right);
        bool operator==(const Rational &left, const Real &right);

        bool operator==(const Rational &left, const Imag &right);
        bool operator==(const Rational &left, const Complex &right);

        bool operator==(const Real &left, std::uint64_t right);
        bool operator==(const Real &left, Base right);
        bool operator==(const Real &left, const Natural &right);
        bool operator==(const Real &left, const Positive &right);
        bool operator==(const Real &left, const Negative &right);
        bool operator==(const Real &left, const Integer &right);
        bool operator==(const Real &left, const Rational &right);
        bool operator==(const Real &left, const Real &right);
        bool operator==(const Real &left, const Imag &right);
        bool operator==(const Real &left, const Complex &right);

        bool operator==(const Imag &left, std::uint64_t right);
        bool operator==(const Imag &left, Base right);
        bool operator==(const Imag &left, const Natural &right);
        bool operator==(const Imag &left, const Positive &right);
        bool operator==(const Imag &left, const Negative &right);
        bool operator==(const Imag &left, const Integer &right);
        bool operator==(const Imag &left, const Rational &right);
        bool operator==(const Imag &left, const Real &right);
        bool operator==(const Imag &left, const Imag &right);
        bool operator==(const Imag &left, const Complex &right);

        bool operator==(const Complex &left, std::uint64_t right);
        bool operator==(const Complex &left, Base right);
        bool operator==(const Complex &left, const Natural &right);
        bool operator==(const Complex &left, const Positive &right);
        bool operator==(const Complex &left, const Negative &right);
        bool operator==(const Complex &left, const Integer &right);
        bool operator==(const Complex &left, const Rational &right);
        bool operator==(const Complex &left, const Real &right);
        bool operator==(const Complex &left, const Imag &right);
        bool operator==(const Complex &left, const Complex &right);

      } // namespace number
    }   // namespace object
  }     // namespace library
} // namespace chimera
