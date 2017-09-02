#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include "params/LRU.hh"
#include "python/pybind11/core.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/tags/lru.hh"

namespace py = pybind11;

static void
module_init(py::module &m_internal)
{
    py::module m = m_internal.def_submodule("param_LRU");
    py::class_<LRUParams, BaseSetAssocParams, std::unique_ptr<LRUParams, py::nodelete>>(m, "LRUParams")
        .def(py::init<>())
        .def("create", &LRUParams::create)
        ;

    py::class_<LRU, BaseSetAssoc, std::unique_ptr<LRU, py::nodelete>>(m, "LRU")
        ;

}

static EmbeddedPyBind embed_obj("LRU", module_init, "BaseSetAssoc");
