
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::PzenigameSpecialNShoot_main(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  undefined8 local_40;
  ulong uStack56;
  
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_40,_FIGHTER_PZENIGAME_INSTANCE_WORK_ID_INT_SPECIAL_N_CHARGE);
  iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar1 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack80,iVar1);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0xeb24b8f9c);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PZENIGAME_STATUS_SPECIAL_N_INT_MOTION_KIND);
  lVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,0x12f0197a53);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PZENIGAME_STATUS_SPECIAL_N_INT_MOTION_KIND_AIR);
  lVar2 = lib::L2CValue::as_integer((L2CValue *)&local_40);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  app::lua_bind::WorkModule__set_int64_impl(this->moduleAccessor,lVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack96,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack112,0xca3dc30e5);
  uVar3 = lib::L2CValue::as_integer(aLStack96);
  uVar4 = lib::L2CValue::as_integer(aLStack112);
  iVar1 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,iVar1);
  uVar3 = lib::L2CValue::operator__((L2CValue *)&local_40,aLStack80);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_40,_FIGHTER_PZENIGAME_STATUS_SPECIAL_N_FLAG_CHARGE_MAX);
    iVar1 = lib::L2CValue::as_integer((L2CValue *)&local_40);
    app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
    lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  }
  lib::L2CValue::L2CValue(aLStack112,0xf899192aa);
  lib::L2CValue::L2CValue(aLStack128,0x9ff47e309);
  uVar3 = lib::L2CValue::as_integer(aLStack112);
  uVar4 = lib::L2CValue::as_integer(aLStack128);
  fVar5 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar3,uVar4);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,fVar5);
  lib::L2CValue::operator_(aLStack80,(L2CValue *)&local_40);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::operator_(aLStack96);
  lib::L2CValue::L2CValue(aLStack128,0.0);
  lib::L2CValue::L2CValue(aLStack144,0.0);
  uVar6 = lib::L2CValue::as_number(aLStack112);
  uVar7 = lib::L2CValue::as_number(aLStack128);
  uVar8 = lib::L2CValue::as_number(aLStack144);
  local_40 = CONCAT44(uVar7,uVar6);
  uStack56 = (ulong)uVar8;
  app::lua_bind::KineticModule__add_speed_impl(this->moduleAccessor,(Vector3f *)&local_40);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)&local_40,true);
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PZENIGAME_STATUS_SPECIAL_N_INT_MOTION_KIND);
  iVar1 = lib::L2CValue::as_integer(aLStack128);
  lVar2 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack112,lVar2);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_PZENIGAME_STATUS_SPECIAL_N_INT_MOTION_KIND_AIR);
  iVar1 = lib::L2CValue::as_integer(aLStack160);
  lVar2 = app::lua_bind::WorkModule__get_int64_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack144,lVar2);
  FUN_71001cf7a0(this,&local_40,aLStack112,aLStack144);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue((L2CValue *)&local_40);
  lib::L2CValue::L2CValue(aLStack128,PzenigameSpecialNShoot_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0x80);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

