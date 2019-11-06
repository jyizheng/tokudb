/*
   Copyright (C) 2003, 2005, 2006 MySQL AB
    All rights reserved. Use is subject to license terms.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License, version 2.0,
   as published by the Free Software Foundation.

   This program is also distributed with certain software (including
   but not limited to OpenSSL) that is licensed under separate terms,
   as designated in a particular file or component or in included license
   documentation.  The authors of MySQL hereby grant you an additional
   permission to link the program and your derivative works with the
   separately licensed software that they have included with MySQL.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License, version 2.0, for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
*/

#ifndef KEY_TABLE_HPP
#define KEY_TABLE_HPP

#include <DLHashTable.hpp>

/**
 * KeyTable2 is DLHashTable2 with hardcoded Uint32 key named "key".
 */
template <typename P, typename T>
class KeyTableImpl : public DLHashTableImpl<P, T> {
public:
  KeyTableImpl(P & pool) :
    DLHashTableImpl<P, T>(pool) {
  }

  bool find(Ptr<T>& ptr, const T& rec) const {
    return DLHashTableImpl<P, T>::find(ptr, rec);
  }

  bool find(Ptr<T>& ptr, Uint32 key) const {
    T rec;
    rec.key = key;
    return DLHashTableImpl<P, T>::find(ptr, rec);
  }
};

// Specializations

template <typename T>
class KeyTable : public KeyTableImpl<ArrayPool<T>, T>
{
public:
  KeyTable(ArrayPool<T> & p) : KeyTableImpl<ArrayPool<T>, T>(p) {}
};

#endif
