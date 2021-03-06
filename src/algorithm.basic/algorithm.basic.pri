########################################################################
# Copyright (C) 2013 - 2018 : Kathrin Hanauer                          #
#                                                                      #
# This file is part of Algora.                                         #
#                                                                      #
# Algora is free software: you can redistribute it and/or modify       #
# it under the terms of the GNU General Public License as published by #
# the Free Software Foundation, either version 3 of the License, or    #
# (at your option) any later version.                                  #
#                                                                      #
# Algora is distributed in the hope that it will be useful,            #
# but WITHOUT ANY WARRANTY; without even the implied warranty of       #
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the        #
# GNU General Public License for more details.                         #
#                                                                      #
# You should have received a copy of the GNU General Public License    #
# along with Algora.  If not, see <http://www.gnu.org/licenses/>.      #
#                                                                      #
# Contact information:                                                 #
#   http://algora.xaikal.org                                           #
########################################################################

message("pri file being processed: $$PWD")

HEADERS += \
    $$PWD/finddipathalgorithm.h \
    $$PWD/basic_algorithms.h \
    $$PWD/tarjansccalgorithm.h \
    $$PWD/topsortalgorithm.h \
    $$PWD/biconnectedcomponentsalgorithm.h \
    $$PWD/accessibilityalgorithm.h \
    $$PWD/eccentricityalgorithm.h \
    $$PWD/radiusdiameteralgorithm.h

SOURCES += \
    $$PWD/finddipathalgorithm.cpp \
    $$PWD/tarjansccalgorithm.cpp \
    $$PWD/topsortalgorithm.cpp \
    $$PWD/basic_algorithms.cpp \
    $$PWD/biconnectedcomponentsalgorithm.cpp \
    $$PWD/accessibilityalgorithm.cpp \
    $$PWD/eccentricityalgorithm.cpp \
    $$PWD/radiusdiameteralgorithm.cpp
