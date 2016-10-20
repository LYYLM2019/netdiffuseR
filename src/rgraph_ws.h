/*******************************************************************************
* rgraph_ws.h header function for rgraph_ws,cpp
*******************************************************************************/
// [[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>
#ifndef NETDIFFUSER_RGRAPH_WS_
#define NETDIFFUSER_RGRAPH_WS_
using namespace Rcpp;

arma::sp_mat ring_lattice(int n, int k, bool undirected=true);

arma::sp_mat rewire_endpoints(
    const arma::sp_mat & graph, double p,
    bool both_ends=false, bool self=false, bool multiple=false,
    bool undirected=false);

arma::sp_mat permute_graph_cpp(const arma::sp_mat & x,
                               bool self = false,
                               bool multiple = false);

#endif
