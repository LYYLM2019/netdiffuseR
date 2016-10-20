// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// toa_mat_cpp
List toa_mat_cpp(const IntegerVector& year, int t0, int t1);
RcppExport SEXP netdiffuseR_toa_mat_cpp(SEXP yearSEXP, SEXP t0SEXP, SEXP t1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type year(yearSEXP);
    Rcpp::traits::input_parameter< int >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< int >::type t1(t1SEXP);
    rcpp_result_gen = Rcpp::wrap(toa_mat_cpp(year, t0, t1));
    return rcpp_result_gen;
END_RCPP
}
// edgelist_to_adjmat_cpp
arma::sp_mat edgelist_to_adjmat_cpp(const arma::mat& edgelist, NumericVector weights, int n, bool undirected, bool self, bool multiple);
RcppExport SEXP netdiffuseR_edgelist_to_adjmat_cpp(SEXP edgelistSEXP, SEXP weightsSEXP, SEXP nSEXP, SEXP undirectedSEXP, SEXP selfSEXP, SEXP multipleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type edgelist(edgelistSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    Rcpp::traits::input_parameter< bool >::type multiple(multipleSEXP);
    rcpp_result_gen = Rcpp::wrap(edgelist_to_adjmat_cpp(edgelist, weights, n, undirected, self, multiple));
    return rcpp_result_gen;
END_RCPP
}
// adjmat_to_edgelist_cpp
arma::mat adjmat_to_edgelist_cpp(const arma::sp_mat& adjmat, bool undirected);
RcppExport SEXP netdiffuseR_adjmat_to_edgelist_cpp(SEXP adjmatSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    rcpp_result_gen = Rcpp::wrap(adjmat_to_edgelist_cpp(adjmat, undirected));
    return rcpp_result_gen;
END_RCPP
}
// toa_diff_cpp
IntegerMatrix toa_diff_cpp(const IntegerVector& year);
RcppExport SEXP netdiffuseR_toa_diff_cpp(SEXP yearSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector& >::type year(yearSEXP);
    rcpp_result_gen = Rcpp::wrap(toa_diff_cpp(year));
    return rcpp_result_gen;
END_RCPP
}
// isolated_cpp
arma::icolvec isolated_cpp(const arma::sp_mat& adjmat, bool undirected);
RcppExport SEXP netdiffuseR_isolated_cpp(SEXP adjmatSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    rcpp_result_gen = Rcpp::wrap(isolated_cpp(adjmat, undirected));
    return rcpp_result_gen;
END_RCPP
}
// drop_isolated_cpp
arma::sp_mat drop_isolated_cpp(const arma::sp_mat& adjmat, arma::icolvec isolated, bool undirected);
RcppExport SEXP netdiffuseR_drop_isolated_cpp(SEXP adjmatSEXP, SEXP isolatedSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type adjmat(adjmatSEXP);
    Rcpp::traits::input_parameter< arma::icolvec >::type isolated(isolatedSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    rcpp_result_gen = Rcpp::wrap(drop_isolated_cpp(adjmat, isolated, undirected));
    return rcpp_result_gen;
END_RCPP
}
// egonet_attrs_cpp
List egonet_attrs_cpp(const arma::sp_mat& graph, const arma::uvec V, bool outer, bool self, bool self_attrs, bool valued);
RcppExport SEXP netdiffuseR_egonet_attrs_cpp(SEXP graphSEXP, SEXP VSEXP, SEXP outerSEXP, SEXP selfSEXP, SEXP self_attrsSEXP, SEXP valuedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::uvec >::type V(VSEXP);
    Rcpp::traits::input_parameter< bool >::type outer(outerSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    Rcpp::traits::input_parameter< bool >::type self_attrs(self_attrsSEXP);
    Rcpp::traits::input_parameter< bool >::type valued(valuedSEXP);
    rcpp_result_gen = Rcpp::wrap(egonet_attrs_cpp(graph, V, outer, self, self_attrs, valued));
    return rcpp_result_gen;
END_RCPP
}
// infection_cpp
NumericVector infection_cpp(List graph, const arma::colvec& times, bool normalize, int K, double r, bool expdiscount, int n, bool valued, bool outgoing);
RcppExport SEXP netdiffuseR_infection_cpp(SEXP graphSEXP, SEXP timesSEXP, SEXP normalizeSEXP, SEXP KSEXP, SEXP rSEXP, SEXP expdiscountSEXP, SEXP nSEXP, SEXP valuedSEXP, SEXP outgoingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type times(timesSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize(normalizeSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< bool >::type expdiscount(expdiscountSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type valued(valuedSEXP);
    Rcpp::traits::input_parameter< bool >::type outgoing(outgoingSEXP);
    rcpp_result_gen = Rcpp::wrap(infection_cpp(graph, times, normalize, K, r, expdiscount, n, valued, outgoing));
    return rcpp_result_gen;
END_RCPP
}
// susceptibility_cpp
NumericVector susceptibility_cpp(List graph, const arma::colvec& times, bool normalize, int K, double r, bool expdiscount, int n, bool valued, bool outgoing);
RcppExport SEXP netdiffuseR_susceptibility_cpp(SEXP graphSEXP, SEXP timesSEXP, SEXP normalizeSEXP, SEXP KSEXP, SEXP rSEXP, SEXP expdiscountSEXP, SEXP nSEXP, SEXP valuedSEXP, SEXP outgoingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type times(timesSEXP);
    Rcpp::traits::input_parameter< bool >::type normalize(normalizeSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    Rcpp::traits::input_parameter< bool >::type expdiscount(expdiscountSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type valued(valuedSEXP);
    Rcpp::traits::input_parameter< bool >::type outgoing(outgoingSEXP);
    rcpp_result_gen = Rcpp::wrap(susceptibility_cpp(graph, times, normalize, K, r, expdiscount, n, valued, outgoing));
    return rcpp_result_gen;
END_RCPP
}
// moran_cpp
std::vector<double> moran_cpp(const arma::colvec& x, const arma::sp_mat& w);
RcppExport SEXP netdiffuseR_moran_cpp(SEXP xSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(moran_cpp(x, w));
    return rcpp_result_gen;
END_RCPP
}
// sparse_indexes
arma::umat sparse_indexes(const arma::sp_mat& mat);
RcppExport SEXP netdiffuseR_sparse_indexes(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(sparse_indexes(mat));
    return rcpp_result_gen;
END_RCPP
}
// angle
double angle(double x0, double y0, double x1, double y1);
RcppExport SEXP netdiffuseR_angle(SEXP x0SEXP, SEXP y0SEXP, SEXP x1SEXP, SEXP y1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< double >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< double >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< double >::type y1(y1SEXP);
    rcpp_result_gen = Rcpp::wrap(angle(x0, y0, x1, y1));
    return rcpp_result_gen;
END_RCPP
}
// sp_trimatl
arma::sp_mat sp_trimatl(const arma::sp_mat& x);
RcppExport SEXP netdiffuseR_sp_trimatl(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sp_trimatl(x));
    return rcpp_result_gen;
END_RCPP
}
// sp_diag
arma::sp_mat sp_diag(const arma::sp_mat& x, const arma::vec& v);
RcppExport SEXP netdiffuseR_sp_diag(SEXP xSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(sp_diag(x, v));
    return rcpp_result_gen;
END_RCPP
}
// unif_rand_w_exclusion
int unif_rand_w_exclusion(int n, int e);
RcppExport SEXP netdiffuseR_unif_rand_w_exclusion(SEXP nSEXP, SEXP eSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type e(eSEXP);
    rcpp_result_gen = Rcpp::wrap(unif_rand_w_exclusion(n, e));
    return rcpp_result_gen;
END_RCPP
}
// sp_as_undirected
arma::sp_mat sp_as_undirected(const arma::sp_mat& x);
RcppExport SEXP netdiffuseR_sp_as_undirected(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(sp_as_undirected(x));
    return rcpp_result_gen;
END_RCPP
}
// grid_distribution
List grid_distribution(const arma::vec& x, const arma::vec& y, int nlevels);
RcppExport SEXP netdiffuseR_grid_distribution(SEXP xSEXP, SEXP ySEXP, SEXP nlevelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type nlevels(nlevelsSEXP);
    rcpp_result_gen = Rcpp::wrap(grid_distribution(x, y, nlevels));
    return rcpp_result_gen;
END_RCPP
}
// edges_coords
NumericMatrix edges_coords(const arma::sp_mat& graph, const arma::colvec& toa, const arma::colvec& x, const arma::colvec& y, const arma::colvec& vertex_cex, bool undirected, bool no_contemporary, NumericVector dev, NumericVector ran);
RcppExport SEXP netdiffuseR_edges_coords(SEXP graphSEXP, SEXP toaSEXP, SEXP xSEXP, SEXP ySEXP, SEXP vertex_cexSEXP, SEXP undirectedSEXP, SEXP no_contemporarySEXP, SEXP devSEXP, SEXP ranSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type toa(toaSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type vertex_cex(vertex_cexSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< bool >::type no_contemporary(no_contemporarySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dev(devSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ran(ranSEXP);
    rcpp_result_gen = Rcpp::wrap(edges_coords(graph, toa, x, y, vertex_cex, undirected, no_contemporary, dev, ran));
    return rcpp_result_gen;
END_RCPP
}
// edges_arrow
arma::mat edges_arrow(const double& x0, const double& y0, const double& x1, const double& y1, const double& height, const double& width, const double beta, NumericVector dev, NumericVector ran);
RcppExport SEXP netdiffuseR_edges_arrow(SEXP x0SEXP, SEXP y0SEXP, SEXP x1SEXP, SEXP y1SEXP, SEXP heightSEXP, SEXP widthSEXP, SEXP betaSEXP, SEXP devSEXP, SEXP ranSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< const double& >::type y0(y0SEXP);
    Rcpp::traits::input_parameter< const double& >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< const double& >::type y1(y1SEXP);
    Rcpp::traits::input_parameter< const double& >::type height(heightSEXP);
    Rcpp::traits::input_parameter< const double& >::type width(widthSEXP);
    Rcpp::traits::input_parameter< const double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dev(devSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ran(ranSEXP);
    rcpp_result_gen = Rcpp::wrap(edges_arrow(x0, y0, x1, y1, height, width, beta, dev, ran));
    return rcpp_result_gen;
END_RCPP
}
// vertices_coords
List vertices_coords(const arma::colvec& x, const arma::colvec& y, const arma::colvec& size, const arma::colvec& nsides, const arma::colvec& rot, NumericVector dev, NumericVector ran);
RcppExport SEXP netdiffuseR_vertices_coords(SEXP xSEXP, SEXP ySEXP, SEXP sizeSEXP, SEXP nsidesSEXP, SEXP rotSEXP, SEXP devSEXP, SEXP ranSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type nsides(nsidesSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type rot(rotSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dev(devSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ran(ranSEXP);
    rcpp_result_gen = Rcpp::wrap(vertices_coords(x, y, size, nsides, rot, dev, ran));
    return rcpp_result_gen;
END_RCPP
}
// rewire_swap
arma::sp_mat rewire_swap(const arma::sp_mat& graph, int nsteps, bool self, bool multiple, bool undirected, double pr_rewire, bool althexagons);
RcppExport SEXP netdiffuseR_rewire_swap(SEXP graphSEXP, SEXP nstepsSEXP, SEXP selfSEXP, SEXP multipleSEXP, SEXP undirectedSEXP, SEXP pr_rewireSEXP, SEXP althexagonsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< int >::type nsteps(nstepsSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    Rcpp::traits::input_parameter< bool >::type multiple(multipleSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< double >::type pr_rewire(pr_rewireSEXP);
    Rcpp::traits::input_parameter< bool >::type althexagons(althexagonsSEXP);
    rcpp_result_gen = Rcpp::wrap(rewire_swap(graph, nsteps, self, multiple, undirected, pr_rewire, althexagons));
    return rcpp_result_gen;
END_RCPP
}
// rgraph_ba_cpp
arma::sp_mat rgraph_ba_cpp(const arma::sp_mat& graph, const arma::colvec& dgr, int m, int t, bool self);
RcppExport SEXP netdiffuseR_rgraph_ba_cpp(SEXP graphSEXP, SEXP dgrSEXP, SEXP mSEXP, SEXP tSEXP, SEXP selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type dgr(dgrSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    rcpp_result_gen = Rcpp::wrap(rgraph_ba_cpp(graph, dgr, m, t, self));
    return rcpp_result_gen;
END_RCPP
}
// rgraph_ba_new_cpp
arma::sp_mat rgraph_ba_new_cpp(int m0, int m, int t, bool self);
RcppExport SEXP netdiffuseR_rgraph_ba_new_cpp(SEXP m0SEXP, SEXP mSEXP, SEXP tSEXP, SEXP selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    rcpp_result_gen = Rcpp::wrap(rgraph_ba_new_cpp(m0, m, t, self));
    return rcpp_result_gen;
END_RCPP
}
// rgraph_er_cpp
arma::sp_mat rgraph_er_cpp(int n, double p, bool undirected, bool weighted, bool self);
RcppExport SEXP netdiffuseR_rgraph_er_cpp(SEXP nSEXP, SEXP pSEXP, SEXP undirectedSEXP, SEXP weightedSEXP, SEXP selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    Rcpp::traits::input_parameter< bool >::type weighted(weightedSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    rcpp_result_gen = Rcpp::wrap(rgraph_er_cpp(n, p, undirected, weighted, self));
    return rcpp_result_gen;
END_RCPP
}
// ring_lattice
arma::sp_mat ring_lattice(int n, int k, bool undirected);
RcppExport SEXP netdiffuseR_ring_lattice(SEXP nSEXP, SEXP kSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    rcpp_result_gen = Rcpp::wrap(ring_lattice(n, k, undirected));
    return rcpp_result_gen;
END_RCPP
}
// rewire_endpoints
arma::sp_mat rewire_endpoints(const arma::sp_mat& graph, double p, bool both_ends, bool self, bool multiple, bool undirected);
RcppExport SEXP netdiffuseR_rewire_endpoints(SEXP graphSEXP, SEXP pSEXP, SEXP both_endsSEXP, SEXP selfSEXP, SEXP multipleSEXP, SEXP undirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type both_ends(both_endsSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    Rcpp::traits::input_parameter< bool >::type multiple(multipleSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected(undirectedSEXP);
    rcpp_result_gen = Rcpp::wrap(rewire_endpoints(graph, p, both_ends, self, multiple, undirected));
    return rcpp_result_gen;
END_RCPP
}
// rewire_ws
arma::sp_mat rewire_ws(arma::sp_mat G, int K, double p, bool self, bool multiple);
RcppExport SEXP netdiffuseR_rewire_ws(SEXP GSEXP, SEXP KSEXP, SEXP pSEXP, SEXP selfSEXP, SEXP multipleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::sp_mat >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    Rcpp::traits::input_parameter< bool >::type multiple(multipleSEXP);
    rcpp_result_gen = Rcpp::wrap(rewire_ws(G, K, p, self, multiple));
    return rcpp_result_gen;
END_RCPP
}
// permute_graph_cpp
arma::sp_mat permute_graph_cpp(const arma::sp_mat& x, bool self, bool multiple);
RcppExport SEXP netdiffuseR_permute_graph_cpp(SEXP xSEXP, SEXP selfSEXP, SEXP multipleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    Rcpp::traits::input_parameter< bool >::type multiple(multipleSEXP);
    rcpp_result_gen = Rcpp::wrap(permute_graph_cpp(x, self, multiple));
    return rcpp_result_gen;
END_RCPP
}
// select_egoalter_cpp
DataFrame select_egoalter_cpp(const arma::sp_mat& adjmat_t0, const arma::sp_mat& adjmat_t1, const NumericVector& adopt_t0, const NumericVector& adopt_t1);
RcppExport SEXP netdiffuseR_select_egoalter_cpp(SEXP adjmat_t0SEXP, SEXP adjmat_t1SEXP, SEXP adopt_t0SEXP, SEXP adopt_t1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type adjmat_t0(adjmat_t0SEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type adjmat_t1(adjmat_t1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type adopt_t0(adopt_t0SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type adopt_t1(adopt_t1SEXP);
    rcpp_result_gen = Rcpp::wrap(select_egoalter_cpp(adjmat_t0, adjmat_t1, adopt_t0, adopt_t1));
    return rcpp_result_gen;
END_RCPP
}
// vertex_covariate_dist
arma::sp_mat vertex_covariate_dist(const arma::sp_mat& graph, const arma::mat& X, double p);
RcppExport SEXP netdiffuseR_vertex_covariate_dist(SEXP graphSEXP, SEXP XSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(vertex_covariate_dist(graph, X, p));
    return rcpp_result_gen;
END_RCPP
}
// vertex_mahalanobis_dist_cpp
arma::sp_mat vertex_mahalanobis_dist_cpp(const arma::sp_mat& graph, const arma::mat& X, const arma::mat& S);
RcppExport SEXP netdiffuseR_vertex_mahalanobis_dist_cpp(SEXP graphSEXP, SEXP XSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(vertex_mahalanobis_dist_cpp(graph, X, S));
    return rcpp_result_gen;
END_RCPP
}
// vertex_covariate_compare
arma::sp_mat vertex_covariate_compare(const arma::sp_mat& graph, const NumericVector& X, std::string funname);
RcppExport SEXP netdiffuseR_vertex_covariate_compare(SEXP graphSEXP, SEXP XSEXP, SEXP funnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< std::string >::type funname(funnameSEXP);
    rcpp_result_gen = Rcpp::wrap(vertex_covariate_compare(graph, X, funname));
    return rcpp_result_gen;
END_RCPP
}
// struct_equiv_cpp
List struct_equiv_cpp(const arma::sp_mat& graph, double v, bool unscaled, bool inv, double invrep);
RcppExport SEXP netdiffuseR_struct_equiv_cpp(SEXP graphSEXP, SEXP vSEXP, SEXP unscaledSEXP, SEXP invSEXP, SEXP invrepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< double >::type v(vSEXP);
    Rcpp::traits::input_parameter< bool >::type unscaled(unscaledSEXP);
    Rcpp::traits::input_parameter< bool >::type inv(invSEXP);
    Rcpp::traits::input_parameter< double >::type invrep(invrepSEXP);
    rcpp_result_gen = Rcpp::wrap(struct_equiv_cpp(graph, v, unscaled, inv, invrep));
    return rcpp_result_gen;
END_RCPP
}
// struct_test_mean
double struct_test_mean(NumericVector& y, std::string funname, bool self);
RcppExport SEXP netdiffuseR_struct_test_mean(SEXP ySEXP, SEXP funnameSEXP, SEXP selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type funname(funnameSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    rcpp_result_gen = Rcpp::wrap(struct_test_mean(y, funname, self));
    return rcpp_result_gen;
END_RCPP
}
// struct_test_var
double struct_test_var(NumericVector& y, std::string funname, bool self);
RcppExport SEXP netdiffuseR_struct_test_var(SEXP ySEXP, SEXP funnameSEXP, SEXP selfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type funname(funnameSEXP);
    Rcpp::traits::input_parameter< bool >::type self(selfSEXP);
    rcpp_result_gen = Rcpp::wrap(struct_test_var(y, funname, self));
    return rcpp_result_gen;
END_RCPP
}
// ego_variance
NumericVector ego_variance(const arma::sp_mat& graph, const NumericVector& Y, std::string funname, bool all);
RcppExport SEXP netdiffuseR_ego_variance(SEXP graphSEXP, SEXP YSEXP, SEXP funnameSEXP, SEXP allSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< std::string >::type funname(funnameSEXP);
    Rcpp::traits::input_parameter< bool >::type all(allSEXP);
    rcpp_result_gen = Rcpp::wrap(ego_variance(graph, Y, funname, all));
    return rcpp_result_gen;
END_RCPP
}
