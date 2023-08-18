
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDuckhunt::status::LandingAttackAir_init(L2CFighterDuckhunt *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  L2CValue *this_00;
  ulong uVar4;
  long lVar5;
  float fVar6;
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack80,false);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,9);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_LANDING_ATTACK_AIR);
  uVar4 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) goto LAB_7100008d98;
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_ATTACK_AIR_WORK_INT_MOTION_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  lVar5 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,lVar5);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,0xd562c06c5);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
LAB_7100008acc:
    lib::L2CValue::L2CValue(aLStack64,0xd58f78ef7);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,true);
        lib::L2CValue::operator_(aLStack80,aLStack64);
        goto LAB_7100008d88;
      }
    }
    lib::L2CValue::L2CValue(aLStack64,0xd5f9a4aee);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,true);
        lib::L2CValue::operator_(aLStack80,aLStack64);
        goto LAB_7100008d88;
      }
    }
    lib::L2CValue::L2CValue(aLStack64,0xe5b6e8bce);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,true);
        lib::L2CValue::operator_(aLStack80,aLStack64);
        goto LAB_7100008d88;
      }
    }
    lib::L2CValue::L2CValue(aLStack64,0xec50d73a9);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack112,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,true);
        lib::L2CValue::operator_(aLStack80,aLStack64);
        goto LAB_7100008d88;
      }
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack128,_FIGHTER_INSTANCE_WORK_ID_FLAG_IGNORE_2ND_MOTION);
    iVar3 = lib::L2CValue::as_integer(aLStack128);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((uVar4 & 1) == 0) goto LAB_7100008acc;
    lib::L2CValue::L2CValue(aLStack64,true);
    lib::L2CValue::operator_(aLStack80,aLStack64);
LAB_7100008d88:
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_7100008d98:
  lua2cpp::L2CFighterCommon::sub_landing_uniq_process_init(this);
  lib::L2CValue::_L2CValue(aLStack64);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack96,0.5);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::MotionModule__set_weight_impl(this->moduleAccessor,fVar6,true);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0.25);
    fVar6 = (float)lib::L2CValue::as_number(aLStack96);
    app::lua_bind::MotionModule__set_weight_rate_impl(this->moduleAccessor,fVar6);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

