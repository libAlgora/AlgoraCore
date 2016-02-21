/**
 * Copyright (C) 2013 - 2016 : Kathrin Hanauer
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


#ifndef DIGRAPHPROVIDER_H
#define DIGRAPHPROVIDER_H

namespace Algora {

class DiGraph;

class DiGraphProvider
{
public:
    DiGraphProvider() { }
    virtual ~DiGraphProvider() { }

    virtual bool isGraphAvailable() = 0;
    virtual bool provideDiGraph(DiGraph *graph) = 0;
};

}

#endif // DIGRAPHPROVIDER_H