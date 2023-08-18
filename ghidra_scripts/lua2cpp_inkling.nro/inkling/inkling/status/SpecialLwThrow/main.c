
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::SpecialLwThrow_main(L2CFighterInkling *this,L2CValue *return_value)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_INKLING_STATUS_SPECIAL_LW_WORK_FLOAT_CHARGE_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar4 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar4);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack96,0x1018dfb2f4);
  lib::L2CValue::L2CValue(aLStack112,0x137bbefd82);
  uVar2 = lib::L2CValue::as_integer(aLStack96);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar2,uVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INKLING_STATUS_SPECIAL_LW_WORK_INT_MAX_CHARGE_FRAME);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack96,iVar1);
  uVar2 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar2 & 1) == 0) {
    uVar2 = lib::L2CValue::operator_(aLStack80,aLStack64);
    if ((uVar2 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack96,0xe4925c6c3);
      lib::L2CValue::L2CValue(aLStack112,0x120b77330c);
      lib::L2CValue::L2CValue(aLStack128,false);
      FUN_7100017060(this,aLStack96,aLStack112,aLStack128);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0x116eff6729);
      lib::L2CValue::L2CValue(aLStack112,0x1518a29336);
      lib::L2CValue::L2CValue(aLStack128,false);
      FUN_7100017060(this,aLStack96,aLStack112,aLStack128);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,0xe7528f99a);
    lib::L2CValue::L2CValue(aLStack112,0x12377a0c55);
    lib::L2CValue::L2CValue(aLStack128,false);
    FUN_7100017060(this,aLStack96,aLStack112,aLStack128);
  }
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack144,SpecialLwThrow_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x70);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

