// Copyright (C) 2008-2015 Conrad Sanderson
// Copyright (C) 2008-2015 NICTA (www.nicta.com.au)
// 
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.


//! \addtogroup fn_diagmat
//! @{


//! interpret a matrix or a vector as a diagonal matrix (i.e. off-diagonal entries are zero)
template<typename T1>
arma_inline
typename
enable_if2
  <
  is_arma_type<T1>::value,
  const Op<T1, op_diagmat>
  >::result
diagmat(const T1& X)
  {
  arma_extra_debug_sigprint();
  
  return Op<T1, op_diagmat>(X);
  }



template<typename T1>
inline
const SpOp<T1, spop_diagmat>
diagmat(const SpBase<typename T1::elem_type,T1>& X)
  {
  arma_extra_debug_sigprint();
  
  return SpOp<T1, spop_diagmat>(X.get_ref());
  }



//! @}
