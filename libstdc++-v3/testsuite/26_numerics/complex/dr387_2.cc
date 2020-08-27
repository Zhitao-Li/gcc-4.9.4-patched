// { dg-options "-std=gnu++0x" }
// { dg-do compile }
//
// Copyright (C) 2009-2014 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <complex>

// DR 387. std::complex over-encapsulated.
// http://gcc.gnu.org/ml/gcc/2009-03/msg00264.html
typedef std::complex<double> C;

C f1(C& c) { return c+1.0; }
C f2(C& c) { return c-1.0; }
C f3(C& c) { return 1.0+c; }
C f4(C& c) { return 1.0-c; }
