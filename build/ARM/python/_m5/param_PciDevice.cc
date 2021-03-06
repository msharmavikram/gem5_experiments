#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include "params/PciDevice.hh"
#include "python/pybind11/core.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/pci/device.hh"

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
#include "dev/pci/host.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

static void
module_init(py::module &m_internal)
{
    py::module m = m_internal.def_submodule("param_PciDevice");
    py::class_<PciDeviceParams, DmaDeviceParams, std::unique_ptr<PciDeviceParams, py::nodelete>>(m, "PciDeviceParams")
        .def_readwrite("BAR0", &PciDeviceParams::BAR0)
        .def_readwrite("BAR0LegacyIO", &PciDeviceParams::BAR0LegacyIO)
        .def_readwrite("BAR0Size", &PciDeviceParams::BAR0Size)
        .def_readwrite("BAR1", &PciDeviceParams::BAR1)
        .def_readwrite("BAR1LegacyIO", &PciDeviceParams::BAR1LegacyIO)
        .def_readwrite("BAR1Size", &PciDeviceParams::BAR1Size)
        .def_readwrite("BAR2", &PciDeviceParams::BAR2)
        .def_readwrite("BAR2LegacyIO", &PciDeviceParams::BAR2LegacyIO)
        .def_readwrite("BAR2Size", &PciDeviceParams::BAR2Size)
        .def_readwrite("BAR3", &PciDeviceParams::BAR3)
        .def_readwrite("BAR3LegacyIO", &PciDeviceParams::BAR3LegacyIO)
        .def_readwrite("BAR3Size", &PciDeviceParams::BAR3Size)
        .def_readwrite("BAR4", &PciDeviceParams::BAR4)
        .def_readwrite("BAR4LegacyIO", &PciDeviceParams::BAR4LegacyIO)
        .def_readwrite("BAR4Size", &PciDeviceParams::BAR4Size)
        .def_readwrite("BAR5", &PciDeviceParams::BAR5)
        .def_readwrite("BAR5LegacyIO", &PciDeviceParams::BAR5LegacyIO)
        .def_readwrite("BAR5Size", &PciDeviceParams::BAR5Size)
        .def_readwrite("BIST", &PciDeviceParams::BIST)
        .def_readwrite("CacheLineSize", &PciDeviceParams::CacheLineSize)
        .def_readwrite("CapabilityPtr", &PciDeviceParams::CapabilityPtr)
        .def_readwrite("CardbusCIS", &PciDeviceParams::CardbusCIS)
        .def_readwrite("ClassCode", &PciDeviceParams::ClassCode)
        .def_readwrite("Command", &PciDeviceParams::Command)
        .def_readwrite("DeviceID", &PciDeviceParams::DeviceID)
        .def_readwrite("ExpansionROM", &PciDeviceParams::ExpansionROM)
        .def_readwrite("HeaderType", &PciDeviceParams::HeaderType)
        .def_readwrite("InterruptLine", &PciDeviceParams::InterruptLine)
        .def_readwrite("InterruptPin", &PciDeviceParams::InterruptPin)
        .def_readwrite("LatencyTimer", &PciDeviceParams::LatencyTimer)
        .def_readwrite("LegacyIOBase", &PciDeviceParams::LegacyIOBase)
        .def_readwrite("MSICAPBaseOffset", &PciDeviceParams::MSICAPBaseOffset)
        .def_readwrite("MSICAPCapId", &PciDeviceParams::MSICAPCapId)
        .def_readwrite("MSICAPMaskBits", &PciDeviceParams::MSICAPMaskBits)
        .def_readwrite("MSICAPMsgAddr", &PciDeviceParams::MSICAPMsgAddr)
        .def_readwrite("MSICAPMsgCtrl", &PciDeviceParams::MSICAPMsgCtrl)
        .def_readwrite("MSICAPMsgData", &PciDeviceParams::MSICAPMsgData)
        .def_readwrite("MSICAPMsgUpperAddr", &PciDeviceParams::MSICAPMsgUpperAddr)
        .def_readwrite("MSICAPNextCapability", &PciDeviceParams::MSICAPNextCapability)
        .def_readwrite("MSICAPPendingBits", &PciDeviceParams::MSICAPPendingBits)
        .def_readwrite("MSIXCAPBaseOffset", &PciDeviceParams::MSIXCAPBaseOffset)
        .def_readwrite("MSIXCAPCapId", &PciDeviceParams::MSIXCAPCapId)
        .def_readwrite("MSIXCAPNextCapability", &PciDeviceParams::MSIXCAPNextCapability)
        .def_readwrite("MSIXMsgCtrl", &PciDeviceParams::MSIXMsgCtrl)
        .def_readwrite("MSIXPbaOffset", &PciDeviceParams::MSIXPbaOffset)
        .def_readwrite("MSIXTableOffset", &PciDeviceParams::MSIXTableOffset)
        .def_readwrite("MaximumLatency", &PciDeviceParams::MaximumLatency)
        .def_readwrite("MinimumGrant", &PciDeviceParams::MinimumGrant)
        .def_readwrite("PMCAPBaseOffset", &PciDeviceParams::PMCAPBaseOffset)
        .def_readwrite("PMCAPCapId", &PciDeviceParams::PMCAPCapId)
        .def_readwrite("PMCAPCapabilities", &PciDeviceParams::PMCAPCapabilities)
        .def_readwrite("PMCAPCtrlStatus", &PciDeviceParams::PMCAPCtrlStatus)
        .def_readwrite("PMCAPNextCapability", &PciDeviceParams::PMCAPNextCapability)
        .def_readwrite("PXCAPBaseOffset", &PciDeviceParams::PXCAPBaseOffset)
        .def_readwrite("PXCAPCapId", &PciDeviceParams::PXCAPCapId)
        .def_readwrite("PXCAPCapabilities", &PciDeviceParams::PXCAPCapabilities)
        .def_readwrite("PXCAPDevCap2", &PciDeviceParams::PXCAPDevCap2)
        .def_readwrite("PXCAPDevCapabilities", &PciDeviceParams::PXCAPDevCapabilities)
        .def_readwrite("PXCAPDevCtrl", &PciDeviceParams::PXCAPDevCtrl)
        .def_readwrite("PXCAPDevCtrl2", &PciDeviceParams::PXCAPDevCtrl2)
        .def_readwrite("PXCAPDevStatus", &PciDeviceParams::PXCAPDevStatus)
        .def_readwrite("PXCAPLinkCap", &PciDeviceParams::PXCAPLinkCap)
        .def_readwrite("PXCAPLinkCtrl", &PciDeviceParams::PXCAPLinkCtrl)
        .def_readwrite("PXCAPLinkStatus", &PciDeviceParams::PXCAPLinkStatus)
        .def_readwrite("PXCAPNextCapability", &PciDeviceParams::PXCAPNextCapability)
        .def_readwrite("ProgIF", &PciDeviceParams::ProgIF)
        .def_readwrite("Revision", &PciDeviceParams::Revision)
        .def_readwrite("Status", &PciDeviceParams::Status)
        .def_readwrite("SubClassCode", &PciDeviceParams::SubClassCode)
        .def_readwrite("SubsystemID", &PciDeviceParams::SubsystemID)
        .def_readwrite("SubsystemVendorID", &PciDeviceParams::SubsystemVendorID)
        .def_readwrite("VendorID", &PciDeviceParams::VendorID)
        .def_readwrite("config_latency", &PciDeviceParams::config_latency)
        .def_readwrite("host", &PciDeviceParams::host)
        .def_readwrite("pci_bus", &PciDeviceParams::pci_bus)
        .def_readwrite("pci_dev", &PciDeviceParams::pci_dev)
        .def_readwrite("pci_func", &PciDeviceParams::pci_func)
        .def_readwrite("pio_latency", &PciDeviceParams::pio_latency)
        ;

    py::class_<PciDevice, DmaDevice, std::unique_ptr<PciDevice, py::nodelete>>(m, "PciDevice")
        ;

}

static EmbeddedPyBind embed_obj("PciDevice", module_init, "DmaDevice");
