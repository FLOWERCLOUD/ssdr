#pragma once

#include <vector>
#include <DirectXMath.h>
#include "RigidTransform.h"

namespace SSDR
{
    // Input data structure
    struct Input
    {
        //Number of vertices
        int numVertices;
        //Number of example data
        int numExamples;
        //! Bound vertex coordinates (number of vertices)
        std::vector<DirectX::XMFLOAT3A> bindModel;
        //! Exemplary shape vertex coordinates (number of example data x number of vertices)
        std::vector<DirectX::XMFLOAT3A> sample;

        Input() : numVertices(0), numExamples(0) {}
        ~Input() {}
    };

    // output data structure
    struct Output
    {
        // Number of bones
        int numBones;
        //! Skinning weight (number of vertices x index number)
        std::vector<float> weight;
        //! Index (number of vertices x number of indexes)
        std::vector<int> index;
        //! Skinning matrix (number of example data x number of bones)
        std::vector<RigidTransform> boneTrans;
    };

//calculation parameter structure
    struct Parameter
    {
		//Minimum bone count
        int numMinBones;
        // Maximum number of bones bound per vertex
        int numIndices;
		// Maximum number of iterations
        int numMaxIterations;
    };

    extern double Decompose(Output& output, const Input& input, const Parameter& param);
    extern double ComputeApproximationErrorSq(const Output& output, const Input& input, const Parameter& param);
}
