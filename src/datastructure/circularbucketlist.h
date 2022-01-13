/**
 * Copyright (C) 2013 - 2020 : Kathrin Hanauer
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

#ifndef CIRCULARBUCKETLIST_H
#define CIRCULARBUCKETLIST_H

#include <vector>

template<typename value_type,
         template <typename... Ts>
         typename bucket_container_type = std::vector>
class CircularBucketList
{
public:
    typedef bucket_container_type<value_type> bucket_type;
    typedef std::vector<bucket_type> container_type;
    typedef typename container_type::size_type size_type;

    CircularBucketList(size_type size)
        : buckets(size), head(0)
    {  }

    bucket_type &operator[](size_type i) {
        return buckets[(head + i) % buckets.size()];
    }

    const bucket_type &operator[](size_type i) const {
        return buckets[(head + i) % buckets.size()];
    }

    bucket_type &front() {
        return buckets[head];
    }

    const bucket_type &front() const {
        return buckets[head];
    }

    bucket_type &back() {
        return buckets[(head + size() - 1) % size()];
    }

    const bucket_type &back() const {
        return buckets[(head + size() - 1) % size()];
    }

    void shift(size_type s = 1U) {
        head = (head + s) % buckets.size();
    }

    size_type size() const {
        return buckets.size();
    }

    void resize(size_type new_size) {
        if (new_size == size()) {
            return;
        }
        container_type buckets_new(new_size);
        for (auto i = 0U; i < new_size; i++) {
            buckets_new[i].swap(operator[](i));
        }
        buckets.swap(buckets_new);
        head = 0;
    }

private:
    container_type buckets;
    typename bucket_type::size_type head;
};

#endif // CIRCULARBUCKETLIST_H
