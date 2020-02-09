#ifndef INLASSLE_H
#define INLASSLE_H

#include <RcppArmadillo.h> 
//#include <RcppParallel.h> 
#include <boost/math/special_functions/polygamma.hpp>
#include <boost/math/special_functions/gamma.hpp>
#include <boost/math/special_functions/bessel.hpp>

// [[Rcpp::depends(RcppArmadillo,RcppParallel,BH)]]
// [[Rcpp::plugins(cpp11)]]

bad

//using vec   = arma::vec;
//using uvec  = arma::uvec;
//using mat   = arma::mat;
//using uword = arma::uword;
//using cube  = arma::cube;

using boost::math::polygamma;
using boost::math::lgamma;
using boost::math::cyl_bessel_k;

//using Worker = RcppParallel::Worker;
//using Split  = RcppParallel::Split;

#endif /* INLASSLE_H */
