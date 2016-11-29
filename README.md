Computer Graphics Gems JP 2015: 5. "Skinning decomposition" sample code

This code is an implementation sample of the algorithm "Smooth Skinning Decomposition with Rigid Bones" introduced in Chapter 7 "Skinning Decomposition" of Computer Graphics Gems JP 2015.

Build and run method

This sample is created as a Visual Studio 2013 Professional project. Also, Eigen and QuadProg ++ are required as a library to build this project. Eigen 3.2.4 and QuadProg ++ 1.2.1 were used for build and execution tests.

It is also necessary to download mesh animation data from Mesh Data from Deformation Transfer for Triangle Meshes and place it in a predetermined folder.

The simplest procedure for building and running is as follows.

Pass the include path to the Eigen installation folder.
Download QuadProg ++ and copy the following 4 files to the ssdr folder.
QuadProg ++. Hh
QuadProg ++. Cc
Array.hh
Array.cc
Download "Horse gallop animation from the video." From the page of Mesh Data from Deformation Transfer for Triangle Meshes and add "horse-gallop-01.obj" to "horse-gallop-reference.obj" included in the compressed archive Copy the obj file in ssdr / data folder.
Build & run with Visual Studio
Adjustment of calculation parameters

The main calculation parameters of SSDR are specified in the ssdrParam structure in HorseObject :: OnInit, HorseObject.cpp line 339, and so on.

NumIndices: Maximum number of bones allocated per vertex
NumMinBones: Minimum number of bones used for vertex animation approximation
NumMaxIterations: maximum number of iterations
By changing these three parameters, I think that you can check the change in the calculation result accordingly.

References

Binh Huy Le and Zhigang Deng, Smooth Skinning Decomposition with Rigid Bones, ACM Transactions on Graphics, 31 (6), (2012), 199: 1-199: 10.
Binh Huy Le and Zhigang Deng, Robust and Accurate Skeletal Rigging from Mesh Sequences, ACM Transactions on Graphics, 33 (4), (2014), 84: 1-84: 10.
change history

2015/08/24 Initial publication