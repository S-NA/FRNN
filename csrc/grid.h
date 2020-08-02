#include <torch/extension.h>
#include "grid.cuh"

std::tuple<at::Tensor, at::Tensor> TestGrid(
    const at::Tensor Points, int K, float r);
std::tuple<at::Tensor, at::Tensor> TestGridCUDA(
        const at::Tensor Points,
        const at::Tensor bbox_max,
        const at::Tensor bbox_min,
        int K,
        float r);
 
void SetupGridParams(
    const at::Tensor Points,
    float cell_size,
    GridParams& params);
 

std::tuple<at::Tensor, at::Tensor> FindNbrsGridCUDA(
    at::Tensor Points,
    at::Tensor GridCnt,
    at::Tensor GridCell,
    at::Tensor SortedIdx,
    const GridParams* params,
    int K,
    float r2); 
 

/*
std::tuple<at::Tensor, at::Tensor> FindNbrsGridNoSortingCUDA(
    at::Tensor Points,
    at::Tensor Grid,
    at::Tensor GridCell,
    at::Tensor GridNext,
    const GridParams* params,
    int K,
    float r2);
*/