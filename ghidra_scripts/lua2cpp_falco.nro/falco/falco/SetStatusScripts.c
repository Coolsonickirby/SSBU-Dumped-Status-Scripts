
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterFalco::SetStatusScripts(L2CFighterFalco *this)

{
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue aLStack64 [16];
  
  iVar1 = _FIGHTER_FALCO_STATUS_KIND_NUM;
  pLVar4 = (L2CValue *)(this + 200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0xc);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0xc);
  uVar2 = lib::L2CValue::as_integer(pLVar3);
  lua2cpp::L2CAgentBase::reserve_status_data_array((L2CAgentBase *)this,uVar2);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x26);
  lib::L2CValue::L2CValue(aLStack64,&DAT_7100001e60);
  lib::L2CValue::operator_(pLVar4,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lua2cpp::L2CFighterCommon::sub_set_fighter_common_table((L2CFighterCommon *)this);
  FUN_7100001f50(this);
  FUN_7100002ed0(this);
  lua2cpp::L2CFighterCommon::sub_fighter_common_settings((L2CFighterCommon *)this);
  return;
}

