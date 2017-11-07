/**
 * Copyright (C) 2013 - 2017 : Kathrin Hanauer
 *
 * This file is part of Algora.
 *
 * Algora is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Algora is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Algora.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Contact information:
 *   http://algora.xaikal.org
 */

#ifndef TARJANSCCALGORITHM_H
#define TARJANSCCALGORITHM_H

#include "algorithm/propertycomputingalgorithm.h"

namespace Algora {

class Vertex;

class TarjanSCCAlgorithm : public PropertyComputingAlgorithm<int, int>
{
public:
    TarjanSCCAlgorithm();
    virtual ~TarjanSCCAlgorithm();

    // DiGraphAlgorithm interface
public:
    virtual void run() override;
    virtual std::string getName() const noexcept override { return "TarjanSCC"; }
    virtual std::string getShortName() const noexcept override { return "tarjan"; }

    // ValueComputingAlgorithm interface
public:
    virtual int deliver() override;

private:
    int numSccs;
};

}

#endif // TARJANSCCALGORITHM_H
