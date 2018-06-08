// Copyright (c) 2018 Adam Grandquist <grandquista@gmail.com>
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
        Base floor_div(std::uint64_t left, Base right);
        Base floor_div(std::uint64_t left, const Natural &right);
        Base floor_div(std::uint64_t left, const Positive &right);
        Negative floor_div(std::uint64_t left, const Negative &right);
        Base floor_div(std::uint64_t left, const Integer &right);
        Integer floor_div(std::uint64_t left, const Rational &right);

        Base floor_div(Base left, std::uint64_t right);
        Base floor_div(Base left, Base right);
        Base floor_div(Base left, const Natural &right);
        Base floor_div(Base left, const Positive &right);
        Negative floor_div(Base left, const Negative &right);
        Base floor_div(Base left, const Integer &right);
        Integer floor_div(Base left, const Rational &right);

        Positive floor_div(const Natural &left, std::uint64_t right);
        Positive floor_div(const Natural &left, Base right);
        Positive floor_div(const Natural &left, const Natural &right);
        Positive floor_div(const Natural &left, const Positive &right);
        Negative floor_div(const Natural &left, const Negative &right);
        Integer floor_div(const Natural &left, const Integer &right);
        Integer floor_div(const Natural &left, const Rational &right);

        Positive floor_div(const Positive &left, std::uint64_t right);
        Positive floor_div(const Positive &left, Base right);
        Positive floor_div(const Positive &left, const Natural &right);
        Positive floor_div(const Positive &left, const Positive &right);
        Negative floor_div(const Positive &left, const Negative &right);
        Integer floor_div(const Positive &left, const Integer &right);
        Integer floor_div(const Positive &left, const Rational &right);

        Negative floor_div(const Negative &left, std::uint64_t right);
        Negative floor_div(const Negative &left, Base right);
        Negative floor_div(const Negative &left, const Natural &right);
        Negative floor_div(const Negative &left, const Positive &right);
        Positive floor_div(const Negative &left, const Negative &right);
        Integer floor_div(const Negative &left, const Integer &right);
        Integer floor_div(const Negative &left, const Rational &right);

        Integer floor_div(const Integer &left, std::uint64_t right);
        Integer floor_div(const Integer &left, Base right);
        Integer floor_div(const Integer &left, const Natural &right);
        Integer floor_div(const Integer &left, const Positive &right);
        Integer floor_div(const Integer &left, const Negative &right);
        Integer floor_div(const Integer &left, const Integer &right);
        Integer floor_div(const Integer &left, const Rational &right);

        Integer floor_div(const Rational &left, std::uint64_t right);
        Integer floor_div(const Rational &left, Base right);
        Integer floor_div(const Rational &left, const Natural &right);
        Integer floor_div(const Rational &left, const Positive &right);
        Integer floor_div(const Rational &left, const Negative &right);
        Integer floor_div(const Rational &left, const Integer &right);
        Integer floor_div(const Rational &left, const Rational &right);
      } // namespace number
    }   // namespace object
  }     // namespace library
} // namespace chimera
