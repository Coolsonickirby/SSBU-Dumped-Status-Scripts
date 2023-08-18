
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKirby::SetStatusScripts(L2CFighterKirby *this)

{
  int iVar1;
  uint uVar2;
  L2CValue *pLVar3;
  L2CValue *pLVar4;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar1 = _FIGHTER_KIRBY_STATUS_KIND_NUM;
  pLVar4 = (L2CValue *)(this + 200);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0xc);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0xc);
  uVar2 = lib::L2CValue::as_integer(pLVar3);
  lua2cpp::L2CAgentBase::reserve_status_data_array((L2CAgentBase *)this,uVar2);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x27);
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100000e00);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x26);
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100000e10);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x29);
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100000e00);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x2b);
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100000e00);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::sub_set_fighter_common_table((L2CFighterCommon *)this);
  FUN_71000010d0(this);
  FUN_7100003c30(this);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_STATUS_KIND_SPECIAL_N);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_CHECK_ATTACK);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNLoop_check_atk);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_N_LOOP);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_CHECK_ATTACK);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialNLoop_check_atk);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KIRBY_STATUS_KIND_SPECIAL_HI2);
  lib::L2CValue::L2CValue(aLStack96,_LUA_SCRIPT_STATUS_FUNC_CHECK_ATTACK);
  lua2cpp::L2CAgentBase::sv_set_status_func
            ((L2CAgentBase *)this,aLStack80,aLStack96,status::SpecialHi2_check_atk);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lua2cpp::L2CFighterCommon::sub_fighter_common_settings((L2CFighterCommon *)this);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x38);
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100008090);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x3c);
  lib::L2CValue::L2CValue(aLStack80,&DAT_7100008450);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar1 = _FIGHTER_STATUS_KIND_THROW_KIRBY;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x45);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar1 = _FIGHTER_STATUS_KIND_THROW_KIRBY;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x46);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::operator_(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar1 = _FIGHTER_STATUS_KIND_THROW_KIRBY;
  pLVar4 = (L2CValue *)lib::L2CValue::operator__(pLVar4,0x47);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::operator_(pLVar4,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

