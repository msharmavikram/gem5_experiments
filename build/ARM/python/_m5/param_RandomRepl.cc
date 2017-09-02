#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include "params/RandomRepl.hh"
#include "python/pybind11/core.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/tags/random_repl.hh"

namespace py = pybind11;

static void
module_init(py::module &m_internal)
{
    py::module m = m_internal.def_submodule("param_RandomRepl");
    py::class_<RandomReplParams, BaseSetAssocParams, std::unique_ptr<RandomReplParams, py::nodelete>>(m, "RandomReplParams")
        .def(py::init<>())
        .def("create", &RandomReplParams::create)
        ;

    py::class_<RandomRepl, BaseSetAssoc, std::unique_ptr<RandomRepl, py::nodelete>>(m, "RandomRepl")
        ;

}

static EmbeddedPyBind embed_obj("RandomRepl", module_init, "BaseSetAssoc");
