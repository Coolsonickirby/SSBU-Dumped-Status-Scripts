
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponKirbyRosettaticomissile::SetStatusScripts(L2CWeaponKirbyRosettaticomissile *this)

{
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar1 = _WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_NUM;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),0xc);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),0xc);
  uVar2 = lib::L2CValue::as_integer(pLVar3);
  lua2cpp::L2CAgentBase::reserve_status_data_array((L2CAgentBase *)this,uVar2);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_START);
  lib::L2CValue::L2CValue(aLStack96,(int)LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNStart_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_START);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_PRE._4_4_);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNStart_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_START);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNStart_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_CHARGE);
  lib::L2CValue::L2CValue(aLStack96,(int)LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNCharge_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_CHARGE);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_PRE._4_4_);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNCharge_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_CHARGE);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNCharge_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_SHOOT);
  lib::L2CValue::L2CValue(aLStack96,(int)LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNShoot_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_SHOOT);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_PRE._4_4_);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNShoot_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_SHOOT);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNShoot_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_END);
  lib::L2CValue::L2CValue(aLStack96,(int)LUA_SCRIPT_STATUS_FUNC_STATUS_PRE);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd_pre);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_END);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_STATUS_PRE._4_4_);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd_main);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_WEAPON_KIRBY_ROSETTATICOMISSILE_STATUS_KIND_SPECIAL_N_END);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_STATUS_END);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNEnd_end);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CWeaponCommon::sub_weapon_common_settings((L2CWeaponCommon *)this);
  return;
}

