
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PurinSpecialNHoldMax_exec(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  iVar1 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  lib::L2CValue::L2CValue(aLStack112,aLStack96);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack128,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0.0);
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_FLOAT_RESERVE_DIR);
  fVar4 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack144);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar4,iVar1);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  FUN_71001bf150(this);
  uVar3 = lib::L2CValue::operator__(aLStack112,aLStack128);
  if ((uVar3 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar3 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      FUN_71001bfcd0(this);
    }
    else {
      FUN_71001bf960(this);
    }
  }
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PURIN_STATUS_SPECIAL_N_WORK_INT_SITUATION_PRE);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar2 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar1,iVar2);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

