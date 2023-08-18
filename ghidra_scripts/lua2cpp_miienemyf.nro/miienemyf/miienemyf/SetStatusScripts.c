
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterMiienemyf::SetStatusScripts(L2CFighterMiienemyf *this)

{
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar1 = _FIGHTER_MIIENEMYF_STATUS_KIND_NUM;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),0xc);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)(this + 200),0xc);
  uVar2 = lib::L2CValue::as_integer(pLVar3);
  lua2cpp::L2CAgentBase::reserve_status_data_array((L2CAgentBase *)this,uVar2);
  lua2cpp::L2CFighterCommon::sub_set_fighter_common_table((L2CFighterCommon *)this);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
  lib::L2CValue::L2CValue(aLStack96,LUA_SCRIPT_STATUS_FUNC_INIT_STATUS);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::LandingAttackAir_init);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::sub_fighter_common_settings((L2CFighterCommon *)this);
  return;
}

