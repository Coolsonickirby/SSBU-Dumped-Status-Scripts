
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterInkling::status::Attack100_exec(long this)

{
  int iVar1;
  int iVar2;
  Hash40 HVar3;
  ulong uVar4;
  ulong uVar5;
  L2CValue *return_value;
  float fVar6;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  HVar3 = app::lua_bind::MotionModule__motion_kind_impl
                    (*(BattleObjectModuleAccessor **)(this + 0x40));
  lib::L2CValue::L2CValue(aLStack80,HVar3);
  lib::L2CValue::L2CValue(aLStack64,0xea34e5703);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_ATTACK_WORK_INT_100_INK_COUNT);
    iVar1 = lib::L2CValue::as_integer(aLStack64);
    iVar1 = app::lua_bind::WorkModule__get_int_impl
                      (*(BattleObjectModuleAccessor **)(this + 0x40),iVar1);
    lib::L2CValue::L2CValue(aLStack80,iVar1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INKLING_STATUS_ATTACK_WORK_INT_100_INK_COUNT);
      iVar1 = lib::L2CValue::as_integer(aLStack64);
      app::lua_bind::WorkModule__dec_int_impl(*(BattleObjectModuleAccessor **)(this + 0x40),iVar1);
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack112,0x126d6ce4b8);
      uVar4 = lib::L2CValue::as_integer(aLStack96);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      fVar6 = (float)app::lua_bind::WorkModule__get_param_float_impl
                               (*(BattleObjectModuleAccessor **)(this + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack64,fVar6);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,aLStack64);
      FUN_71000052b0(this,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack128,0xdf05c072b);
      lib::L2CValue::L2CValue(aLStack144,0x1825f2309e);
      uVar4 = lib::L2CValue::as_integer(aLStack128);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      iVar1 = app::lua_bind::WorkModule__get_param_int_impl
                        (*(BattleObjectModuleAccessor **)(this + 0x40),uVar4,uVar5);
      lib::L2CValue::L2CValue(aLStack112,iVar1);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INKLING_STATUS_ATTACK_WORK_INT_100_INK_COUNT);
      iVar1 = lib::L2CValue::as_integer(aLStack112);
      iVar2 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__set_int_impl
                (*(BattleObjectModuleAccessor **)(this + 0x40),iVar1,iVar2);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue(return_value,0);
  return;
}

