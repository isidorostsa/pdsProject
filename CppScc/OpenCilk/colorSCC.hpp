#pragma once

#include <iostream>
#include <vector>

#include "sparse_util.hpp"

#define DEB(x) if(DEBUG) {std::cout << x << std::endl;}

// only for the first time, where all SCC_ids are -1
size_t trimVertices_inplace_first_time(const Sparse_matrix& inb, const Sparse_matrix& onb, std::vector<size_t>& SCC_id, const size_t SCC_count);

size_t trimVertices_inplace_first_time_single_direction(const Sparse_matrix& nb, std::vector<size_t>& SCC_id, const size_t SCC_count);

// normal trimmer
size_t trimVertices_inplace(const Sparse_matrix& inb, const Sparse_matrix& onb, const std::vector<bool>& vleft,
                                    std::vector<size_t>& SCC_id, size_t SCC_count);

size_t trimVertices_inplace_single_direction(const Sparse_matrix& inb, const std::vector<bool>& vleft,
                                    std::vector<size_t>& SCC_id, size_t SCC_count);

void bfs_colors_inplace(const Sparse_matrix& nb, const size_t source, std::vector<size_t>& SCC_id,
    const size_t SCC_count, const std::vector<size_t>& colors, const size_t color);

std::vector<size_t> colorSCC_no_conversion(const Sparse_matrix& inb, const Sparse_matrix& onb, bool USE_ONB, bool DEBUG);


