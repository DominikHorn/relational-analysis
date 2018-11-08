//===----------------------------------------------------------------------===//
//
// Implementation of lib/Analysis/RelationalAnalysis/src/common/Representative.h
// A constant has a specific int value
//
//===----------------------------------------------------------------------===//
#ifndef LLVM_CONSTANT_H
#define LLVM_CONSTANT_H

#include "Representative.h"

namespace basic_relational_abstractions {

    class Constant : public Representative {
    public:
        Constant(int value);

        bool operator<(const Constant& other) const {
            return value < other.value;
        }

        bool operator==(const Constant& other) const {
            return value == other.value;
        }

    private:
        int value;
    };

}

#endif //LLVM_CONSTANT_H
