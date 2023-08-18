
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::LandingAttackAir_init(L2CFighterGekkouga *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  Hash40 HVar3;
  L2CValue *this_00;
  ulong uVar4;
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,0);
  HVar3 = app::lua_bind::MotionModule__motion_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,HVar3);
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack64,false);
  lib::L2CValue::operator_(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) goto LAB_710001ebd4;
  lib::L2CValue::L2CValue(aLStack64,0xd562c06c5);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
LAB_710001e870:
    lib::L2CValue::L2CValue(aLStack64,0xd58f78ef7);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,true);
        lib::L2CValue::operator_(aLStack112,aLStack64);
        goto LAB_710001ebcc;
      }
    }
    lib::L2CValue::L2CValue(aLStack64,0xd5f9a4aee);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,true);
        lib::L2CValue::operator_(aLStack112,aLStack64);
        goto LAB_710001ebcc;
      }
    }
    lib::L2CValue::L2CValue(aLStack64,0xe5b6e8bce);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
      iVar2 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
        iVar2 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,true);
        lib::L2CValue::operator_(aLStack112,aLStack64);
        goto LAB_710001ebcc;
      }
    }
    lib::L2CValue::L2CValue(aLStack64,0xec50d73a9);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) == 0) goto LAB_710001ebd4;
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) == 0) goto LAB_710001ebd4;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator_(aLStack112,aLStack64);
  }
  else {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar4 & 1) == 0) goto LAB_710001e870;
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator_(aLStack112,aLStack64);
  }
LAB_710001ebcc:
  lib::L2CValue::_L2CValue(aLStack64);
LAB_710001ebd4:
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack112,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
    iVar2 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_GEKKOUGA_INSTANCE_WORK_ID_FLAG_SPECIAL_S_IS_DISABLE);
  iVar2 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

