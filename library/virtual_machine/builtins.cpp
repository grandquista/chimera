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

//! generated file see tools/builtins.cpp

#include "virtual_machine/builtins.hpp"

#include "object/object.hpp"

using namespace std::literals;

namespace chimera {
  namespace library {
    namespace virtual_machine {
      namespace modules {
        void init(const object::Object &module) {
          auto builtins = module;
          builtins.set_attribute("__builtins__"s, builtins);
          object::Object builtinsFalse(object::False{},
                                       {{"__class__", {/*set below*/}}});
          builtins.set_attribute("False"s, builtinsFalse);
          builtins.set_attribute("__debug__"s, builtinsFalse);
          object::Object builtinsNone(object::None{}, {});
          builtins.set_attribute("None"s, builtinsNone);
          object::Object builtinsTrue(object::True{},
                                      {{"__class__", {/*set below*/}}});
          builtins.set_attribute("True"s, builtinsTrue);
          object::Object builtinsClass(object::Instance{},
                                       {{"__class__", {/*set below*/}}});
          builtins.set_attribute("__class__"s, builtinsClass);
          object::Object builtinsName(object::String("builtins"s),
                                      {{"__class__", {/*set below*/}}});
          builtins.set_attribute("__name__"s, builtinsName);
          object::Object builtinsBool(object::Instance{},
                                      {{"__abs__", builtinsNone},
                                       {"__add__", builtinsNone},
                                       {"__and__", builtinsNone},
                                       {"__bool__", builtinsNone},
                                       {"__ceil__", builtinsNone},
                                       {"__class__", {/*set below*/}},
                                       {"__divmod__", builtinsNone},
                                       {"__doc__", builtinsNone},
                                       {"__eq__", builtinsNone},
                                       {"__float__", builtinsNone},
                                       {"__floor__", builtinsNone},
                                       {"__floordiv__", builtinsNone},
                                       {"__format__", builtinsNone},
                                       {"__ge__", builtinsNone},
                                       {"__getnewargs__", builtinsNone},
                                       {"__gt__", builtinsNone},
                                       {"__hash__", builtinsNone},
                                       {"__index__", builtinsNone},
                                       {"__init__", builtinsNone},
                                       {"__init_subclass__", builtinsNone},
                                       {"__int__", builtinsNone},
                                       {"__invert__", builtinsNone},
                                       {"__le__", builtinsNone},
                                       {"__lshift__", builtinsNone},
                                       {"__lt__", builtinsNone},
                                       {"__mod__", builtinsNone},
                                       {"__mul__", builtinsNone},
                                       {"__ne__", builtinsNone},
                                       {"__neg__", builtinsNone},
                                       {"__new__", builtinsNone},
                                       {"__or__", builtinsNone},
                                       {"__pos__", builtinsNone},
                                       {"__pow__", builtinsNone},
                                       {"__radd__", builtinsNone},
                                       {"__rand__", builtinsNone},
                                       {"__rdivmod__", builtinsNone},
                                       {"__reduce__", builtinsNone},
                                       {"__reduce_ex__", builtinsNone},
                                       {"__rfloordiv__", builtinsNone},
                                       {"__rlshift__", builtinsNone},
                                       {"__rmod__", builtinsNone},
                                       {"__rmul__", builtinsNone},
                                       {"__ror__", builtinsNone},
                                       {"__round__", builtinsNone},
                                       {"__rpow__", builtinsNone},
                                       {"__rrshift__", builtinsNone},
                                       {"__rshift__", builtinsNone},
                                       {"__rsub__", builtinsNone},
                                       {"__rtruediv__", builtinsNone},
                                       {"__rxor__", builtinsNone},
                                       {"__sub__", builtinsNone},
                                       {"__truediv__", builtinsNone},
                                       {"__trunc__", builtinsNone},
                                       {"__xor__", builtinsNone},
                                       {"bit_length", builtinsNone},
                                       {"conjugate", builtinsNone},
                                       {"denominator", builtinsNone},
                                       {"from_bytes", builtinsNone},
                                       {"imag", builtinsNone},
                                       {"numerator", builtinsNone},
                                       {"real", builtinsNone},
                                       {"to_bytes", builtinsNone}});
          builtins.set_attribute("bool"s, builtinsBool);
          builtinsFalse.set_attribute("__class__"s, builtinsBool);
          builtinsTrue.set_attribute("__class__"s, builtinsBool);
          object::Object builtinsBytes(object::Instance{},
                                       {{"__add__", builtinsNone},
                                        {"__class__", {/*set below*/}},
                                        {"__contains__", builtinsNone},
                                        {"__doc__", builtinsNone},
                                        {"__eq__", builtinsNone},
                                        {"__format__", builtinsNone},
                                        {"__ge__", builtinsNone},
                                        {"__getitem__", builtinsNone},
                                        {"__getnewargs__", builtinsNone},
                                        {"__gt__", builtinsNone},
                                        {"__hash__", builtinsNone},
                                        {"__init__", builtinsNone},
                                        {"__init_subclass__", builtinsNone},
                                        {"__iter__", builtinsNone},
                                        {"__le__", builtinsNone},
                                        {"__len__", builtinsNone},
                                        {"__lt__", builtinsNone},
                                        {"__mod__", builtinsNone},
                                        {"__mul__", builtinsNone},
                                        {"__ne__", builtinsNone},
                                        {"__new__", builtinsNone},
                                        {"__reduce__", builtinsNone},
                                        {"__reduce_ex__", builtinsNone},
                                        {"__rmod__", builtinsNone},
                                        {"__rmul__", builtinsNone},
                                        {"capitalize", builtinsNone},
                                        {"center", builtinsNone},
                                        {"count", builtinsNone},
                                        {"decode", builtinsNone},
                                        {"endswith", builtinsNone},
                                        {"expandtabs", builtinsNone},
                                        {"find", builtinsNone},
                                        {"fromhex", builtinsNone},
                                        {"hex", builtinsNone},
                                        {"index", builtinsNone},
                                        {"isalnum", builtinsNone},
                                        {"isalpha", builtinsNone},
                                        {"isdigit", builtinsNone},
                                        {"islower", builtinsNone},
                                        {"isspace", builtinsNone},
                                        {"istitle", builtinsNone},
                                        {"isupper", builtinsNone},
                                        {"join", builtinsNone},
                                        {"ljust", builtinsNone},
                                        {"lower", builtinsNone},
                                        {"lstrip", builtinsNone},
                                        {"maketrans", builtinsNone},
                                        {"partition", builtinsNone},
                                        {"replace", builtinsNone},
                                        {"rfind", builtinsNone},
                                        {"rindex", builtinsNone},
                                        {"rjust", builtinsNone},
                                        {"rpartition", builtinsNone},
                                        {"rsplit", builtinsNone},
                                        {"rstrip", builtinsNone},
                                        {"split", builtinsNone},
                                        {"splitlines", builtinsNone},
                                        {"startswith", builtinsNone},
                                        {"strip", builtinsNone},
                                        {"swapcase", builtinsNone},
                                        {"title", builtinsNone},
                                        {"translate", builtinsNone},
                                        {"upper", builtinsNone},
                                        {"zfill", builtinsNone}});
          builtins.set_attribute("bytes"s, builtinsBytes);
          object::Object builtinsCompile(object::SysCall::COMPILE,
                                         {{"__class__", {/*set below*/}},
                                          {"__doc__", builtinsNone},
                                          {"__name__", builtinsNone},
                                          {"__qualname__", builtinsNone}});
          builtins.set_attribute("compile"s, builtinsCompile);
          object::Object builtinsEval(object::SysCall::EVAL,
                                      {{"__class__", {/*set below*/}},
                                       {"__doc__", builtinsNone},
                                       {"__name__", builtinsNone},
                                       {"__qualname__", builtinsNone}});
          builtins.set_attribute("eval"s, builtinsEval);
          object::Object builtinsExec(object::SysCall::EXEC,
                                      {{"__class__", {/*set below*/}},
                                       {"__doc__", builtinsNone},
                                       {"__name__", builtinsNone},
                                       {"__qualname__", builtinsNone}});
          builtins.set_attribute("exec"s, builtinsExec);
          object::Object builtinsFloat(object::Instance{},
                                       {{"__abs__", builtinsNone},
                                        {"__add__", builtinsNone},
                                        {"__bool__", builtinsNone},
                                        {"__class__", {/*set below*/}},
                                        {"__divmod__", builtinsNone},
                                        {"__doc__", builtinsNone},
                                        {"__eq__", builtinsNone},
                                        {"__float__", builtinsNone},
                                        {"__floordiv__", builtinsNone},
                                        {"__format__", builtinsNone},
                                        {"__ge__", builtinsNone},
                                        {"__getformat__", builtinsNone},
                                        {"__getnewargs__", builtinsNone},
                                        {"__gt__", builtinsNone},
                                        {"__hash__", builtinsNone},
                                        {"__init__", builtinsNone},
                                        {"__init_subclass__", builtinsNone},
                                        {"__int__", builtinsNone},
                                        {"__le__", builtinsNone},
                                        {"__lt__", builtinsNone},
                                        {"__mod__", builtinsNone},
                                        {"__mul__", builtinsNone},
                                        {"__ne__", builtinsNone},
                                        {"__neg__", builtinsNone},
                                        {"__new__", builtinsNone},
                                        {"__pos__", builtinsNone},
                                        {"__pow__", builtinsNone},
                                        {"__radd__", builtinsNone},
                                        {"__rdivmod__", builtinsNone},
                                        {"__reduce__", builtinsNone},
                                        {"__reduce_ex__", builtinsNone},
                                        {"__rfloordiv__", builtinsNone},
                                        {"__rmod__", builtinsNone},
                                        {"__rmul__", builtinsNone},
                                        {"__round__", builtinsNone},
                                        {"__rpow__", builtinsNone},
                                        {"__rsub__", builtinsNone},
                                        {"__rtruediv__", builtinsNone},
                                        {"__setformat__", builtinsNone},
                                        {"__sub__", builtinsNone},
                                        {"__truediv__", builtinsNone},
                                        {"__trunc__", builtinsNone},
                                        {"as_integer_ratio", builtinsNone},
                                        {"conjugate", builtinsNone},
                                        {"fromhex", builtinsNone},
                                        {"hex", builtinsNone},
                                        {"imag", builtinsNone},
                                        {"is_integer", builtinsNone},
                                        {"real", builtinsNone}});
          builtins.set_attribute("float"s, builtinsFloat);
          object::Object builtinsGlobals(object::SysCall::GLOBALS,
                                         {{"__class__", {/*set below*/}},
                                          {"__doc__", builtinsNone},
                                          {"__name__", builtinsNone},
                                          {"__qualname__", builtinsNone}});
          builtins.set_attribute("globals"s, builtinsGlobals);
          object::Object builtinsId(object::SysCall::ID,
                                    {{"__class__", {/*set below*/}},
                                     {"__doc__", builtinsNone},
                                     {"__name__", builtinsNone},
                                     {"__qualname__", builtinsNone}});
          builtins.set_attribute("id"s, builtinsId);
          object::Object builtinsInput(object::SysCall::INPUT,
                                       {{"__class__", {/*set below*/}},
                                        {"__doc__", builtinsNone},
                                        {"__name__", builtinsNone},
                                        {"__qualname__", builtinsNone}});
          builtins.set_attribute("input"s, builtinsInput);
          object::Object builtinsInt(object::Instance{},
                                     {{"__abs__", builtinsNone},
                                      {"__add__", builtinsNone},
                                      {"__and__", builtinsNone},
                                      {"__bool__", builtinsNone},
                                      {"__ceil__", builtinsNone},
                                      {"__class__", {/*set below*/}},
                                      {"__divmod__", builtinsNone},
                                      {"__doc__", builtinsNone},
                                      {"__eq__", builtinsNone},
                                      {"__float__", builtinsNone},
                                      {"__floor__", builtinsNone},
                                      {"__floordiv__", builtinsNone},
                                      {"__format__", builtinsNone},
                                      {"__ge__", builtinsNone},
                                      {"__getnewargs__", builtinsNone},
                                      {"__gt__", builtinsNone},
                                      {"__hash__", builtinsNone},
                                      {"__index__", builtinsNone},
                                      {"__init__", builtinsNone},
                                      {"__init_subclass__", builtinsNone},
                                      {"__int__", builtinsNone},
                                      {"__invert__", builtinsNone},
                                      {"__le__", builtinsNone},
                                      {"__lshift__", builtinsNone},
                                      {"__lt__", builtinsNone},
                                      {"__mod__", builtinsNone},
                                      {"__mul__", builtinsNone},
                                      {"__ne__", builtinsNone},
                                      {"__neg__", builtinsNone},
                                      {"__new__", builtinsNone},
                                      {"__or__", builtinsNone},
                                      {"__pos__", builtinsNone},
                                      {"__pow__", builtinsNone},
                                      {"__radd__", builtinsNone},
                                      {"__rand__", builtinsNone},
                                      {"__rdivmod__", builtinsNone},
                                      {"__reduce__", builtinsNone},
                                      {"__reduce_ex__", builtinsNone},
                                      {"__rfloordiv__", builtinsNone},
                                      {"__rlshift__", builtinsNone},
                                      {"__rmod__", builtinsNone},
                                      {"__rmul__", builtinsNone},
                                      {"__ror__", builtinsNone},
                                      {"__round__", builtinsNone},
                                      {"__rpow__", builtinsNone},
                                      {"__rrshift__", builtinsNone},
                                      {"__rshift__", builtinsNone},
                                      {"__rsub__", builtinsNone},
                                      {"__rtruediv__", builtinsNone},
                                      {"__rxor__", builtinsNone},
                                      {"__sub__", builtinsNone},
                                      {"__truediv__", builtinsNone},
                                      {"__trunc__", builtinsNone},
                                      {"__xor__", builtinsNone},
                                      {"bit_length", builtinsNone},
                                      {"conjugate", builtinsNone},
                                      {"denominator", builtinsNone},
                                      {"from_bytes", builtinsNone},
                                      {"imag", builtinsNone},
                                      {"numerator", builtinsNone},
                                      {"real", builtinsNone},
                                      {"to_bytes", builtinsNone}});
          builtins.set_attribute("int"s, builtinsInt);
          object::Object builtinsLocals(object::SysCall::LOCALS,
                                        {{"__class__", {/*set below*/}},
                                         {"__doc__", builtinsNone},
                                         {"__name__", builtinsNone},
                                         {"__qualname__", builtinsNone}});
          builtins.set_attribute("locals"s, builtinsLocals);
          object::Object builtinsObject(object::Instance{},
                                        {{"__abstractmethods__", builtinsNone},
                                         {"__base__", {/*set below*/}},
                                         {"__basicsize__", builtinsNone},
                                         {"__call__", builtinsNone},
                                         {"__class__", {/*set below*/}},
                                         {"__delattr__", {/*set below*/}},
                                         {"__dict__", builtinsNone},
                                         {"__dictoffset__", builtinsNone},
                                         {"__dir__", {/*set below*/}},
                                         {"__doc__", builtinsNone},
                                         {"__eq__", builtinsNone},
                                         {"__flags__", builtinsNone},
                                         {"__format__", builtinsNone},
                                         {"__ge__", builtinsNone},
                                         {"__getattribute__", {/*set below*/}},
                                         {"__gt__", builtinsNone},
                                         {"__hash__", builtinsNone},
                                         {"__init__", builtinsNone},
                                         {"__init_subclass__", builtinsNone},
                                         {"__instancecheck__", builtinsNone},
                                         {"__itemsize__", builtinsNone},
                                         {"__le__", builtinsNone},
                                         {"__lt__", builtinsNone},
                                         {"__module__", builtins},
                                         {"__mro__", builtinsNone},
                                         {"__name__", builtinsNone},
                                         {"__ne__", builtinsNone},
                                         {"__new__", builtinsNone},
                                         {"__prepare__", builtinsNone},
                                         {"__qualname__", builtinsNone},
                                         {"__reduce__", builtinsNone},
                                         {"__reduce_ex__", builtinsNone},
                                         {"__setattr__", {/*set below*/}},
                                         {"__sizeof__", builtinsNone},
                                         {"__str__", builtinsNone},
                                         {"__subclasscheck__", builtinsNone},
                                         {"__subclasses__", builtinsNone},
                                         {"__subclasshook__", builtinsNone},
                                         {"__text_signature__", builtinsNone},
                                         {"__weakrefoffset__", builtinsNone},
                                         {"mro", builtinsNone}});
          builtins.set_attribute("object"s, builtinsObject);
          builtinsObject.set_attribute("__base__"s, builtinsObject);
          object::Object builtinsOpen(object::SysCall::OPEN,
                                      {{"__class__", {/*set below*/}},
                                       {"__doc__", builtinsNone},
                                       {"__name__", builtinsNone},
                                       {"__qualname__", builtinsNone}});
          builtins.set_attribute("open"s, builtinsOpen);
          object::Object builtinsPrint(object::SysCall::PRINT,
                                       {{"__class__", {/*set below*/}},
                                        {"__doc__", builtinsNone},
                                        {"__name__", builtinsNone},
                                        {"__qualname__", builtinsNone}});
          builtins.set_attribute("print"s, builtinsPrint);
          object::Object builtinsStr(object::Instance{},
                                     {{"__add__", builtinsNone},
                                      {"__class__", {/*set below*/}},
                                      {"__contains__", builtinsNone},
                                      {"__doc__", builtinsNone},
                                      {"__eq__", builtinsNone},
                                      {"__format__", builtinsNone},
                                      {"__ge__", builtinsNone},
                                      {"__getitem__", builtinsNone},
                                      {"__getnewargs__", builtinsNone},
                                      {"__gt__", builtinsNone},
                                      {"__hash__", builtinsNone},
                                      {"__init__", builtinsNone},
                                      {"__init_subclass__", builtinsNone},
                                      {"__iter__", builtinsNone},
                                      {"__le__", builtinsNone},
                                      {"__len__", builtinsNone},
                                      {"__lt__", builtinsNone},
                                      {"__mod__", builtinsNone},
                                      {"__mul__", builtinsNone},
                                      {"__ne__", builtinsNone},
                                      {"__new__", builtinsNone},
                                      {"__reduce__", builtinsNone},
                                      {"__reduce_ex__", builtinsNone},
                                      {"__rmod__", builtinsNone},
                                      {"__rmul__", builtinsNone},
                                      {"capitalize", builtinsNone},
                                      {"casefold", builtinsNone},
                                      {"center", builtinsNone},
                                      {"count", builtinsNone},
                                      {"encode", builtinsNone},
                                      {"endswith", builtinsNone},
                                      {"expandtabs", builtinsNone},
                                      {"find", builtinsNone},
                                      {"format", builtinsNone},
                                      {"format_map", builtinsNone},
                                      {"index", builtinsNone},
                                      {"isalnum", builtinsNone},
                                      {"isalpha", builtinsNone},
                                      {"isdecimal", builtinsNone},
                                      {"isdigit", builtinsNone},
                                      {"isidentifier", builtinsNone},
                                      {"islower", builtinsNone},
                                      {"isnumeric", builtinsNone},
                                      {"isprintable", builtinsNone},
                                      {"isspace", builtinsNone},
                                      {"istitle", builtinsNone},
                                      {"isupper", builtinsNone},
                                      {"join", builtinsNone},
                                      {"ljust", builtinsNone},
                                      {"lower", builtinsNone},
                                      {"lstrip", builtinsNone},
                                      {"maketrans", builtinsNone},
                                      {"partition", builtinsNone},
                                      {"replace", builtinsNone},
                                      {"rfind", builtinsNone},
                                      {"rindex", builtinsNone},
                                      {"rjust", builtinsNone},
                                      {"rpartition", builtinsNone},
                                      {"rsplit", builtinsNone},
                                      {"rstrip", builtinsNone},
                                      {"split", builtinsNone},
                                      {"splitlines", builtinsNone},
                                      {"startswith", builtinsNone},
                                      {"strip", builtinsNone},
                                      {"swapcase", builtinsNone},
                                      {"title", builtinsNone},
                                      {"translate", builtinsNone},
                                      {"upper", builtinsNone},
                                      {"zfill", builtinsNone}});
          builtins.set_attribute("str"s, builtinsStr);
          builtinsName.set_attribute("__class__"s, builtinsStr);
          object::Object builtinsTuple(object::Instance{},
                                       {{"__add__", builtinsNone},
                                        {"__class__", {/*set below*/}},
                                        {"__contains__", builtinsNone},
                                        {"__doc__", builtinsNone},
                                        {"__eq__", builtinsNone},
                                        {"__format__", builtinsNone},
                                        {"__ge__", builtinsNone},
                                        {"__getitem__", builtinsNone},
                                        {"__getnewargs__", builtinsNone},
                                        {"__gt__", builtinsNone},
                                        {"__hash__", builtinsNone},
                                        {"__init__", builtinsNone},
                                        {"__init_subclass__", builtinsNone},
                                        {"__iter__", builtinsNone},
                                        {"__le__", builtinsNone},
                                        {"__len__", builtinsNone},
                                        {"__lt__", builtinsNone},
                                        {"__mul__", builtinsNone},
                                        {"__ne__", builtinsNone},
                                        {"__new__", builtinsNone},
                                        {"__reduce__", builtinsNone},
                                        {"__reduce_ex__", builtinsNone},
                                        {"__repr__", builtinsNone},
                                        {"__rmul__", builtinsNone},
                                        {"count", builtinsNone},
                                        {"index", builtinsNone}});
          builtins.set_attribute("tuple"s, builtinsTuple);
          object::Object builtinsType(object::Instance{},
                                      {{"__base__", builtinsObject},
                                       {"__bases__", builtinsNone},
                                       {"__class__", {/*set below*/}},
                                       {"__doc__", builtinsNone},
                                       {"__module__", builtins},
                                       {"__mro__", {/*set below*/}},
                                       {"__name__", builtinsNone},
                                       {"__qualname__", builtinsNone}});
          builtins.set_attribute("type"s, builtinsType);
          builtinsClass.set_attribute("__class__"s, builtinsType);
          builtinsBool.set_attribute("__class__"s, builtinsType);
          builtinsBytes.set_attribute("__class__"s, builtinsType);
          builtinsFloat.set_attribute("__class__"s, builtinsType);
          builtinsInt.set_attribute("__class__"s, builtinsType);
          builtinsStr.set_attribute("__class__"s, builtinsType);
          builtinsTuple.set_attribute("__class__"s, builtinsType);
          builtinsType.set_attribute("__class__"s, builtinsType);
          object::Object builtinsCompileClass(
              object::Instance{}, {{"__call__", builtinsNone},
                                   {"__class__", builtinsType},
                                   {"__doc__", builtinsNone},
                                   {"__eq__", builtinsNone},
                                   {"__format__", builtinsNone},
                                   {"__ge__", builtinsNone},
                                   {"__gt__", builtinsNone},
                                   {"__hash__", builtinsNone},
                                   {"__init__", builtinsNone},
                                   {"__init_subclass__", builtinsNone},
                                   {"__le__", builtinsNone},
                                   {"__lt__", builtinsNone},
                                   {"__module__", builtins},
                                   {"__name__", builtinsNone},
                                   {"__ne__", builtinsNone},
                                   {"__new__", builtinsNone},
                                   {"__qualname__", builtinsNone},
                                   {"__reduce__", builtinsNone},
                                   {"__reduce_ex__", builtinsNone},
                                   {"__repr__", builtinsNone},
                                   {"__text_signature__", builtinsNone}});
          builtinsCompile.set_attribute("__class__"s, builtinsCompileClass);
          builtinsEval.set_attribute("__class__"s, builtinsCompileClass);
          builtinsExec.set_attribute("__class__"s, builtinsCompileClass);
          builtinsGlobals.set_attribute("__class__"s, builtinsCompileClass);
          builtinsId.set_attribute("__class__"s, builtinsCompileClass);
          builtinsInput.set_attribute("__class__"s, builtinsCompileClass);
          builtinsLocals.set_attribute("__class__"s, builtinsCompileClass);
          builtinsOpen.set_attribute("__class__"s, builtinsCompileClass);
          builtinsPrint.set_attribute("__class__"s, builtinsCompileClass);
          object::Object builtinsObjectClass(
              object::Instance{}, {{"__bool__", builtinsNone},
                                   {"__class__", builtinsType},
                                   {"__doc__", builtinsNone},
                                   {"__eq__", builtinsNone},
                                   {"__format__", builtinsNone},
                                   {"__ge__", builtinsNone},
                                   {"__gt__", builtinsNone},
                                   {"__hash__", builtinsNone},
                                   {"__init__", builtinsNone},
                                   {"__init_subclass__", builtinsNone},
                                   {"__le__", builtinsNone},
                                   {"__lt__", builtinsNone},
                                   {"__ne__", builtinsNone},
                                   {"__new__", builtinsNone},
                                   {"__reduce__", builtinsNone},
                                   {"__reduce_ex__", builtinsNone}});
          builtinsObject.set_attribute("__class__"s, builtinsObjectClass);
          object::Object builtinsObjectDelattr(
              object::ObjectMethod::DELATTR,
              {{"__class__", builtinsCompileClass},
               {"__doc__", builtinsNone},
               {"__name__", builtinsNone},
               {"__qualname__", builtinsNone}});
          builtinsObject.set_attribute("__delattr__"s, builtinsObjectDelattr);
          object::Object builtinsObjectDir(object::ObjectMethod::DIR,
                                           {{"__class__", builtinsCompileClass},
                                            {"__doc__", builtinsNone},
                                            {"__name__", builtinsNone},
                                            {"__qualname__", builtinsNone}});
          builtinsObject.set_attribute("__dir__"s, builtinsObjectDir);
          object::Object builtinsObjectGetattribute(
              object::ObjectMethod::GETATTRIBUTE,
              {{"__class__", builtinsCompileClass},
               {"__doc__", builtinsNone},
               {"__name__", builtinsNone},
               {"__qualname__", builtinsNone}});
          builtinsObject.set_attribute("__getattribute__"s,
                                       builtinsObjectGetattribute);
          object::Object builtinsObjectSetattr(
              object::ObjectMethod::SETATTR,
              {{"__class__", builtinsCompileClass},
               {"__doc__", builtinsNone},
               {"__name__", builtinsNone},
               {"__qualname__", builtinsNone}});
          builtinsObject.set_attribute("__setattr__"s, builtinsObjectSetattr);
          object::Object builtinsTypeMro(
              object::Tuple{builtinsType, builtinsObject},
              {{"__class__", builtinsTuple}});
          builtinsType.set_attribute("__mro__"s, builtinsTypeMro);
        }
      } // namespace modules
    }   // namespace virtual_machine
  }     // namespace library
} // namespace chimera
