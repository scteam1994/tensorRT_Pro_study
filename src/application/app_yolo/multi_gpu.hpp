#ifndef YOLO_MULTI_GPU_HPP
#define YOLO_MULTI_GPU_HPP

#include "yolo.hpp"
#include "global_export.h"
namespace Yolo{

    class TRT_EXPORT MultiGPUInfer : public Yolo::Infer{};

    TRT_EXPORT shared_ptr<MultiGPUInfer> create_multi_gpu_infer(
        const string& engine_file, Type type, const vector<int> gpuids, 
        float confidence_threshold=0.25f, float nms_threshold=0.5f,
        NMSMethod nms_method = NMSMethod::FastGPU, int max_objects = 1024
    );
};


#endif // YOLO_MULTI_GPU_HPP