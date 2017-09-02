#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include "params/MinorCPU.hh"
#include "python/pybind11/core.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/minor/cpu.hh"

#include "cpu/pred/bpred_unit.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "cpu/minor/func_unit.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "enums/ThreadPolicy.hh"
namespace py = pybind11;

static void
module_init(py::module &m_internal)
{
    py::module m = m_internal.def_submodule("param_MinorCPU");
    py::class_<MinorCPUParams, BaseCPUParams, std::unique_ptr<MinorCPUParams, py::nodelete>>(m, "MinorCPUParams")
        .def(py::init<>())
        .def("create", &MinorCPUParams::create)
        .def_readwrite("branchPred", &MinorCPUParams::branchPred)
        .def_readwrite("decodeCycleInput", &MinorCPUParams::decodeCycleInput)
        .def_readwrite("decodeInputBufferSize", &MinorCPUParams::decodeInputBufferSize)
        .def_readwrite("decodeInputWidth", &MinorCPUParams::decodeInputWidth)
        .def_readwrite("decodeToExecuteForwardDelay", &MinorCPUParams::decodeToExecuteForwardDelay)
        .def_readwrite("enableIdling", &MinorCPUParams::enableIdling)
        .def_readwrite("executeAllowEarlyMemoryIssue", &MinorCPUParams::executeAllowEarlyMemoryIssue)
        .def_readwrite("executeBranchDelay", &MinorCPUParams::executeBranchDelay)
        .def_readwrite("executeCommitLimit", &MinorCPUParams::executeCommitLimit)
        .def_readwrite("executeCycleInput", &MinorCPUParams::executeCycleInput)
        .def_readwrite("executeFuncUnits", &MinorCPUParams::executeFuncUnits)
        .def_readwrite("executeInputBufferSize", &MinorCPUParams::executeInputBufferSize)
        .def_readwrite("executeInputWidth", &MinorCPUParams::executeInputWidth)
        .def_readwrite("executeIssueLimit", &MinorCPUParams::executeIssueLimit)
        .def_readwrite("executeLSQMaxStoreBufferStoresPerCycle", &MinorCPUParams::executeLSQMaxStoreBufferStoresPerCycle)
        .def_readwrite("executeLSQRequestsQueueSize", &MinorCPUParams::executeLSQRequestsQueueSize)
        .def_readwrite("executeLSQStoreBufferSize", &MinorCPUParams::executeLSQStoreBufferSize)
        .def_readwrite("executeLSQTransfersQueueSize", &MinorCPUParams::executeLSQTransfersQueueSize)
        .def_readwrite("executeMaxAccessesInMemory", &MinorCPUParams::executeMaxAccessesInMemory)
        .def_readwrite("executeMemoryCommitLimit", &MinorCPUParams::executeMemoryCommitLimit)
        .def_readwrite("executeMemoryIssueLimit", &MinorCPUParams::executeMemoryIssueLimit)
        .def_readwrite("executeMemoryWidth", &MinorCPUParams::executeMemoryWidth)
        .def_readwrite("executeSetTraceTimeOnCommit", &MinorCPUParams::executeSetTraceTimeOnCommit)
        .def_readwrite("executeSetTraceTimeOnIssue", &MinorCPUParams::executeSetTraceTimeOnIssue)
        .def_readwrite("fetch1FetchLimit", &MinorCPUParams::fetch1FetchLimit)
        .def_readwrite("fetch1LineSnapWidth", &MinorCPUParams::fetch1LineSnapWidth)
        .def_readwrite("fetch1LineWidth", &MinorCPUParams::fetch1LineWidth)
        .def_readwrite("fetch1ToFetch2BackwardDelay", &MinorCPUParams::fetch1ToFetch2BackwardDelay)
        .def_readwrite("fetch1ToFetch2ForwardDelay", &MinorCPUParams::fetch1ToFetch2ForwardDelay)
        .def_readwrite("fetch2CycleInput", &MinorCPUParams::fetch2CycleInput)
        .def_readwrite("fetch2InputBufferSize", &MinorCPUParams::fetch2InputBufferSize)
        .def_readwrite("fetch2ToDecodeForwardDelay", &MinorCPUParams::fetch2ToDecodeForwardDelay)
        .def_readwrite("threadPolicy", &MinorCPUParams::threadPolicy)
        ;

    py::class_<MinorCPU, BaseCPU, std::unique_ptr<MinorCPU, py::nodelete>>(m, "MinorCPU")
        ;

}

static EmbeddedPyBind embed_obj("MinorCPU", module_init, "BaseCPU");
