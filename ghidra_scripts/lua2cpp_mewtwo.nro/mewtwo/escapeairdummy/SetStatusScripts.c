
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponMewtwoEscapeairdummy::SetStatusScripts(L2CWeaponMewtwoEscapeairdummy *this)

{
  int iVar1;
  L2CValue *this_00;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar1 = _WEAPON_MEWTWO_ESCAPEAIRDUMMY_STATUS_KIND_NUM;
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),0xc);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator_(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_MEWTWO_ESCAPEAIRDUMMY_STATUS_KIND_ESCAPE_AIR);
  lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack64,aLStack80,&DAT_7100013630);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_MEWTWO_ESCAPEAIRDUMMY_STATUS_KIND_ESCAPE_AIR);
  lib::L2CValue::L2CValue(aLStack80,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack64,aLStack80,&DAT_71000134c0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_WEAPON_MEWTWO_ESCAPEAIRDUMMY_STATUS_KIND_ESCAPE_AIR);
  lib::L2CValue::L2CValue(aLStack80,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack64,aLStack80,&LAB_71000134b0);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CWeaponCommon::sub_weapon_common_settings((L2CWeaponCommon *)this);
  return;
}

