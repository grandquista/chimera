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

//! global context singleton

#include "virtual_machine/global_context.hpp"

#include <fstream>
#include <iostream>
#include <string_view>

#include "object/object.hpp"
#include "version.hpp"
#include "virtual_machine/process_context.hpp"
#include "virtual_machine/thread_context.hpp"
#include "virtual_machine/virtual_machine.hpp"

namespace chimera {
  namespace library {
    namespace virtual_machine {
      int GlobalContext::interactive() {
        if (!options.dont_display_copyright) {
          std::cout << "chimera " CHIMERA_VERSION " (default, " __DATE__
                       ", " __TIME__ ")\n"
                       "[" __VERSION__ "] on darwin\n"
                       R"(Type "help", "copyright", "credits" or "license" )"
                       "for more information.\n";
        }
        ProcessContext processContext{*this};
        auto main = processContext.make_module("__main__");
        while (!std::cin.eof()) {
          std::cout << ">>> ";
          auto interactive = processContext.parse_input(std::cin, "<string>");
          ThreadContext{processContext, main}.evaluate(interactive);
        }
        return 0;
      }
      int GlobalContext::execute_script() {
        std::ifstream input(options.script);
        ProcessContext processContext{*this};
        auto module = processContext.parse_file(input, options.script);
        ThreadContext{processContext, processContext.make_module("__main__")}
            .evaluate(module);
        return 0;
      }
      int GlobalContext::execute_script_string() {
        ProcessContext processContext{*this};
        auto module = processContext.parse_file(options.command, "<string>");
        ThreadContext{processContext, processContext.make_module("__main__")}
            .evaluate(module);
        return 0;
      }
      int GlobalContext::execute_script_input() {
        ProcessContext processContext{*this};
        auto module = processContext.parse_file(std::cin, "<input>");
        ThreadContext{processContext, processContext.make_module("__main__")}
            .evaluate(module);
        return 0;
      }
      int GlobalContext::execute_module() {
        ProcessContext processContext{*this};
        if (auto importModule =
                processContext.import_module(options.module_name);
            importModule) {
          auto main = processContext.make_module("__main__");
          ThreadContext{processContext, main}.evaluate(*importModule);
          return 0;
        }
        return 1;
      }
    } // namespace virtual_machine
  }   // namespace library
} // namespace chimera
