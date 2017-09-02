#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include "params/BaseSetAssoc.hh"
#include "python/pybind11/core.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/tags/base_set_assoc.hh"

#include "base/types.hh"
namespace py = pybind11;

static void
module_init(py::module &m_internal)
{
    py::module m = m_internal.def_submodule("param_BaseSetAssoc");
    py::class_<BaseSetAssocParams, BaseTagsParams, std::unique_ptr<BaseSetAssocParams, py::nodelete>>(m, "BaseSetAssocParams")
        .def_readwrite("assoc", &BaseSetAssocParams::assoc)
        ;

    py::class_<BaseSetAssoc, BaseTags, std::unique_ptr<BaseSetAssoc, py::nodelete>>(m, "BaseSetAssoc")
        ;

}

static EmbeddedPyBind embed_obj("BaseSetAssoc", module_init, "BaseTags");
