/** \file DMA_TBE.cc
 *
 * Auto generated C++ code started by /home/vsm2/coursework/ECE511/gem5_master/src/mem/slicc/symbols/Type.py:411
 */

#include <iostream>
#include <memory>

#include "mem/protocol/DMA_TBE.hh"
#include "mem/ruby/system/RubySystem.hh"

using namespace std;
/** \brief Print the state of this object */
void
DMA_TBE::print(ostream& out) const
{
    out << "[DMA_TBE: ";
    out << "address = " << printAddress(m_address) << " ";
    out << "NumAcks = " << m_NumAcks << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "]";
}
