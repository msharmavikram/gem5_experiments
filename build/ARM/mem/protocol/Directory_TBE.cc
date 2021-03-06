/** \file Directory_TBE.cc
 *
 * Auto generated C++ code started by /home/vsm2/coursework/ECE511/gem5_master/src/mem/slicc/symbols/Type.py:411
 */

#include <iostream>
#include <memory>

#include "mem/protocol/Directory_TBE.hh"
#include "mem/ruby/system/RubySystem.hh"

using namespace std;
/** \brief Print the state of this object */
void
Directory_TBE::print(ostream& out) const
{
    out << "[Directory_TBE: ";
    out << "PhysicalAddress = " << printAddress(m_PhysicalAddress) << " ";
    out << "Len = " << m_Len << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Requestor = " << m_Requestor << " ";
    out << "]";
}
