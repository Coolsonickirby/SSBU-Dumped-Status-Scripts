
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKen::status::FinalHit_exec_stop(L2CFighterKen *this,L2CValue *return_value)

{
  int iVar1;
  float *pfVar2;
  L2CValue *pLVar3;
  float fVar4;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  pfVar2 = (float *)app::lua_bind::PostureModule__pos_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack144,*pfVar2);
  lib::L2CValue::L2CValue(aLStack128,pfVar2[1]);
  lib::L2CValue::L2CValue(aLStack112,pfVar2[2]);
  FUN_7100009f90(aLStack96,this,aLStack144);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x18cdc1683);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_PREV_POS_X);
  fVar4 = (float)lib::L2CValue::as_number(pLVar3);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack96,0x1fbdb2615);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_RYU_STATUS_WORK_ID_FINAL_FLOAT_PREV_POS_Y);
  fVar4 = (float)lib::L2CValue::as_number(pLVar3);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

