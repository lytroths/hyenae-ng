/*
 * Hyenae NG
 *   Advanced Network Packet Generator (NextGen)
 *
 * Copyright (C) 2020 Robin Richter
 *
 *   Contact  : hyenae.tool@googlemail.com
 *   Homepage : https://github.com/r-richter/hyenae-ng
 *
 * This file is part of Hyenae NG.
 *
 * Hyenae NG is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Hyenae NG is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Hyenae NG.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef FIXED_DURATION_GENERATOR_H
#define FIXED_DURATION_GENERATOR_H

#include "duration_generator.h"

namespace hyenae::model
{
    /*---------------------------------------------------------------------- */

    class fixed_duration_generator :
        public duration_generator
    {
        private:
            duration_t _duration;

        public:
            fixed_duration_generator(duration_t duration);
            duration_t get_duration() const;
            duration_t next();
            void reset() {}

    }; /* fixed_duration_generator */

    /*---------------------------------------------------------------------- */

} /* hyenae::model */

#endif /* FIXED_DURATION_GENERATOR_H */
