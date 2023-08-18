
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::RefletSpecialNTronHold_init(L2CFighterKirby *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue *this_00;
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  iVar2 = app::lua_bind::StatusModule__status_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,iVar2);
  lib::L2CValue::L2CValue(aLStack96,aLStack80);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_HOLD);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_HOLD);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_71000b1eb4;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_SHOOT);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
LAB_71000b2138:
      lib::L2CValue::L2CValue(aLStack64,0xaec2db62e);
      HVar5 = lib::L2CValue::as_hash(aLStack64);
      app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar5);
      this_00 = aLStack64;
      goto LAB_71000b2288;
    }
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_SHOOT);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) goto LAB_71000b2138;
  }
  else {
LAB_71000b1eb4:
    lib::L2CValue::L2CValue(aLStack64,-1);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,-1);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE2);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,-1);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE3);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar2,iVar3);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_INSTANCE_WORK_ID_INT_SPECIAL_N_THUNDER_KIND);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    iVar2 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack112,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack128,0);
    lib::L2CValue::L2CValue(aLStack144,0);
    lib::L2CValue::L2CValue(aLStack160,aLStack112);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_MAGIC_KIND_THUNDER);
    uVar4 = lib::L2CValue::operator__(aLStack160,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_MAGIC_KIND_EL_THUNDER);
      uVar4 = lib::L2CValue::operator__(aLStack160,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_MAGIC_KIND_GIGA_THUNDER);
        uVar4 = lib::L2CValue::operator__(aLStack160,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        if ((uVar4 & 1) == 0) {
          lib::L2CValue::L2CValue((L2CValue *)return_value,0);
          lib::L2CValue::_L2CValue(aLStack160);
          lib::L2CValue::_L2CValue(aLStack144);
          lib::L2CValue::_L2CValue(aLStack128);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue(aLStack96);
          goto LAB_71000b22a0;
        }
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE3);
        lib::L2CValue::operator_(aLStack144,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0x1575a578d7);
        lib::L2CValue::operator_(aLStack128,aLStack64);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE2);
        lib::L2CValue::operator_(aLStack144,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,0x1502a24841);
        lib::L2CValue::operator_(aLStack128,aLStack64);
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_REFLET_STATUS_SPECIAL_N_HOLD_EFFECT_HANDLE);
      lib::L2CValue::operator_(aLStack144,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::L2CValue(aLStack64,0x14c0b13bd7);
      lib::L2CValue::operator_(aLStack128,aLStack64);
    }
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack160,aLStack128);
    lib::L2CValue::L2CValue(aLStack176,aLStack144);
    lib::L2CValue::L2CValue(aLStack192,aLStack112);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KIRBY_STATUS_KIND_REFLET_SPECIAL_N_HOLD);
    bVar1 = lib::L2CValue::operator__(aLStack64,aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    FUN_710019b430(this,aLStack160,aLStack176,aLStack192,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack128);
    this_00 = aLStack112;
LAB_71000b2288:
    lib::L2CValue::_L2CValue(this_00);
  }
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_71000b22a0:
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

