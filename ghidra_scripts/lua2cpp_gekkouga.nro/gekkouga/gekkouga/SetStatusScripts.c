
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterGekkouga::SetStatusScripts(L2CFighterGekkouga *this)

{
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue aLStack64 [16];
  
  iVar1 = _FIGHTER_GEKKOUGA_STATUS_KIND_NUM;
  pLVar4 = (L2CValue *)(this + 200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0xc);
  lib::L2CValue::L2CValue(aLStack64,iVar1);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0xc);
  uVar2 = lib::L2CValue::as_integer(pLVar3);
  lua2cpp::L2CAgentBase::reserve_status_data_array((L2CAgentBase *)this,uVar2);
  lua2cpp::L2CFighterCommon::sub_set_fighter_common_table((L2CFighterCommon *)this);
  FUN_71000009d0(this);
  FUN_71000024c0(this);
  lua2cpp::L2CFighterCommon::sub_fighter_common_settings((L2CFighterCommon *)this);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x27);
  lib::L2CValue::L2CValue(aLStack64,&DAT_71000040d0);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x26);
  lib::L2CValue::L2CValue(aLStack64,&DAT_71000040e0);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x29);
  lib::L2CValue::L2CValue(aLStack64,&DAT_71000040d0);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x2a);
  lib::L2CValue::L2CValue(aLStack64,&DAT_71000040d0);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x2b);
  lib::L2CValue::L2CValue(aLStack64,&DAT_71000040d0);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x34);
  lib::L2CValue::L2CValue(aLStack64,&DAT_71000040d0);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x35);
  lib::L2CValue::L2CValue(aLStack64,&DAT_71000040d0);
  lib::L2CValue::operator_(pLVar3,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x4e);
  lib::L2CValue::L2CValue(aLStack64,&DAT_71000041e0);
  lib::L2CValue::operator_(pLVar4,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

