#ifndef LLVM_CLASSTYPE_H
#define LLVM_CLASSTYPE_H

namespace bra {

    // TODO split this into two enums: RepresentativeType and DomainType
    enum class ClassType {
        Variable, Constant, EqualityDomain
    };

}


#endif //LLVM_CLASSTYPE_H
