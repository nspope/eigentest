#ifndef RESISTANCESOLVER_H
#define RESISTANCESOLVER_H

#include <RcppEigen.h>
#include <RcppParallel.h> 

// [[Rcpp::depends(RcppEigen,RcppParallel)]]
// [[Rcpp::plugins(cpp11)]]

using MatrixXd = Eigen::MatrixXd;
using MatrixXi = Eigen::MatrixXi;
using VectorXd = Eigen::VectorXd;
using VectorXi = Eigen::VectorXi;
using SpMatrix = Eigen::SparseMatrix<double>;
using SpSolver = Eigen::SimplicialLDLT<SpMatrix>;
using LuDecomp = Eigen::PartialPivLU<MatrixXd>;
using UiVector = std::vector<unsigned>;
using UiMap    = std::map<unsigned,unsigned>;

#endif /* RESISTANCESOLVER_H */
