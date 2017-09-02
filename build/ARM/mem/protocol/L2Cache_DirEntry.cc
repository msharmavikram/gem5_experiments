/** \file L2Cache_DirEntry.cc
 *
 * Auto generated C++ code started by /home/vsm2/coursework/ECE511/gem5_master/src/mem/slicc/symbols/Type.py:411
 */

#include <iostream>
#include <memory>

#include "mem/protocol/L2Cache_DirEntry.hh"
#include "mem/ruby/system/RubySystem.hh"

using namespace std;
/** \brief Print the state of this object */
void
L2Cache_DirEntry::print(ostream& out) const
{
    out << "[L2Cache_DirEntry: ";
    out << "Sharers = " << m_Sharers << " ";
    out << "Owner = " << m_Owner << " ";
    out << "OwnerValid = " << m_OwnerValid << " ";
    out << "DirState = " << m_DirState << " ";
    out << "]";
}
