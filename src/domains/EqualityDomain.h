//
// Created by vanessa on 11/7/18.
//

#ifndef EQUALITYDOMAIN_H
#define EQUALITYDOMAIN_H

#include <map>
#include <unordered_map>
#include <unordered_set>
#include "../common/AbstractDomain.h"
#include "../common/Representative.h"
#include "../common/Variable.h"
#include "../common/Constant.h"
#include "../common/RepresentativeHasher.h"


namespace bra {
    class EqualityDomain : public AbstractDomain {
    public:
    protected:
        //assignment transforms
        void transform_unknown_assignment(Variable);

    public:
        void add() override;

        void move() override;

        std::shared_ptr<AbstractDomain> leastUpperBound(std::vector<std::shared_ptr<AbstractDomain>> domains) override;

        std::shared_ptr<AbstractDomain> bottom() override;

    protected:
        void transform_constant_assignment(Variable, Constant);

        void transform_variable_assignment(Variable, Variable);

    private:
        std::unordered_map<Representative, std::unordered_set<Variable>, std::hash<Representative>> forwardMap;
        std::unordered_map<Variable, Representative, std::hash<Variable>> backwardMap;
    };

}

#endif //EQUALITYDOMAIN_H
