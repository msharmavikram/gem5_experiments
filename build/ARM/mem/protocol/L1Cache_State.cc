/** \file L1Cache_State.hh
 *
 * Auto generated C++ code started by /home/vsm2/coursework/ECE511/gem5_master/src/mem/slicc/symbols/Type.py:569
 */

#include <cassert>
#include <iostream>
#include <string>

#include "base/misc.hh"
#include "mem/protocol/L1Cache_State.hh"

using namespace std;

// Code to convert the current state to an access permission
AccessPermission L1Cache_State_to_permission(const L1Cache_State& obj)
{
    switch(obj) {
      case L1Cache_State_I:
        return AccessPermission_Invalid;
      case L1Cache_State_S:
        return AccessPermission_Read_Only;
      case L1Cache_State_O:
        return AccessPermission_Read_Only;
      case L1Cache_State_M:
        return AccessPermission_Read_Only;
      case L1Cache_State_M_W:
        return AccessPermission_Read_Only;
      case L1Cache_State_MM:
        return AccessPermission_Read_Write;
      case L1Cache_State_MM_W:
        return AccessPermission_Read_Write;
      case L1Cache_State_IM:
        return AccessPermission_Busy;
      case L1Cache_State_SM:
        return AccessPermission_Read_Only;
      case L1Cache_State_OM:
        return AccessPermission_Read_Only;
      case L1Cache_State_IS:
        return AccessPermission_Busy;
      case L1Cache_State_SI:
        return AccessPermission_Busy;
      case L1Cache_State_OI:
        return AccessPermission_Busy;
      case L1Cache_State_MI:
        return AccessPermission_Busy;
      case L1Cache_State_II:
        return AccessPermission_Busy;
      default:
        panic("Unknown state access permission converstion for L1Cache_State");
    }
}

// Code for output operator
ostream&
operator<<(ostream& out, const L1Cache_State& obj)
{
    out << L1Cache_State_to_string(obj);
    out << flush;
    return out;
}

// Code to convert state to a string
string
L1Cache_State_to_string(const L1Cache_State& obj)
{
    switch(obj) {
      case L1Cache_State_I:
        return "I";
      case L1Cache_State_S:
        return "S";
      case L1Cache_State_O:
        return "O";
      case L1Cache_State_M:
        return "M";
      case L1Cache_State_M_W:
        return "M_W";
      case L1Cache_State_MM:
        return "MM";
      case L1Cache_State_MM_W:
        return "MM_W";
      case L1Cache_State_IM:
        return "IM";
      case L1Cache_State_SM:
        return "SM";
      case L1Cache_State_OM:
        return "OM";
      case L1Cache_State_IS:
        return "IS";
      case L1Cache_State_SI:
        return "SI";
      case L1Cache_State_OI:
        return "OI";
      case L1Cache_State_MI:
        return "MI";
      case L1Cache_State_II:
        return "II";
      default:
        panic("Invalid range for type L1Cache_State");
    }
}

// Code to convert from a string to the enumeration
L1Cache_State
string_to_L1Cache_State(const string& str)
{
    if (str == "I") {
        return L1Cache_State_I;
    } else if (str == "S") {
        return L1Cache_State_S;
    } else if (str == "O") {
        return L1Cache_State_O;
    } else if (str == "M") {
        return L1Cache_State_M;
    } else if (str == "M_W") {
        return L1Cache_State_M_W;
    } else if (str == "MM") {
        return L1Cache_State_MM;
    } else if (str == "MM_W") {
        return L1Cache_State_MM_W;
    } else if (str == "IM") {
        return L1Cache_State_IM;
    } else if (str == "SM") {
        return L1Cache_State_SM;
    } else if (str == "OM") {
        return L1Cache_State_OM;
    } else if (str == "IS") {
        return L1Cache_State_IS;
    } else if (str == "SI") {
        return L1Cache_State_SI;
    } else if (str == "OI") {
        return L1Cache_State_OI;
    } else if (str == "MI") {
        return L1Cache_State_MI;
    } else if (str == "II") {
        return L1Cache_State_II;
    } else {
        panic("Invalid string conversion for %s, type L1Cache_State", str);
    }
}

// Code to increment an enumeration type
L1Cache_State&
operator++(L1Cache_State& e)
{
    assert(e < L1Cache_State_NUM);
    return e = L1Cache_State(e+1);
}
