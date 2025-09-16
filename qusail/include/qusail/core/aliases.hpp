/**
 * Semantic type aliases for the QuSail framework.
 *
 * Abbreviations
 * -------------
 * R : Real
 * C : Complex
 *
 * Seq : Sequence
 */

#pragma once

// Include standard modules.
#include <vector>

// Include external modules.
#include <Eigen/Dense>

namespace qusail::core {

using RVector = Eigen::VectorXd;
using CVector = Eigen::VectorXcd;

using RVectorSeq = std::vector<RVector>;
using CVectorSeq = std::vector<CVector>;

using RMatrix = Eigen::MatrixXd;
using CMatrix = Eigen::MatrixXcd;

using RMatrixSeq = std::vector<RMatrix>;
using CMatrixSeq = std::vector<CMatrix>;

} // namespace qusail::core
