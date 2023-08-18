
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDonkey::status::ThrowFLw_main_loop(L2CFighterDonkey *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *this_00;
  BattleObjectModuleAccessor *pBVar6;
  float fVar7;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  FUN_7100021af0(aLStack80,this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar1 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_THROW_FLAG_STOP);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack112,0x13a4988083);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack80,iVar3);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      lib::L2CValue::L2CValue(aLStack96,1.0);
      pBVar6 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(this_00);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      fVar7 = (float)lib::L2CValue::as_number(aLStack96);
      app::FighterUtil::start_catch_stop(pBVar6,iVar3,fVar7);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_THROW_FLAG_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

