
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CWeaponPickelTrolley::SetStatusScripts(L2CWeaponPickelTrolley *this)

{
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar1 = _WEAPON_PICKEL_TROLLEY_STATUS_KIND_NUM;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),0xc);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),0xc);
  uVar2 = lib::L2CValue::as_integer(pLVar3);
  lua2cpp::L2CAgentBase::reserve_status_data_array((L2CAgentBase *)this,uVar2);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_TROLLEY_STATUS_KIND_START);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Start_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_TROLLEY_STATUS_KIND_DRIVE);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Drive_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_TROLLEY_STATUS_KIND_START);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Start_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_TROLLEY_STATUS_KIND_DRIVE);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_MAIN);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Drive_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_TROLLEY_STATUS_KIND_START);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Start_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_TROLLEY_STATUS_KIND_DRIVE);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Drive_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_TROLLEY_STATUS_KIND_START);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_LINE_WAZA_CUSTOMIZE._4_4_);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Start_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_PICKEL_TROLLEY_STATUS_KIND_DRIVE);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_LINE_WAZA_CUSTOMIZE._4_4_);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::Drive_exec);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CWeaponCommon::sub_weapon_common_settings((L2CWeaponCommon *)this);
  return;
}

