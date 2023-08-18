
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CWeaponSimonCross::status::Turn_main(L2CWeaponSimonCross *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  KineticEnergyNormal *pKVar8;
  KineticEnergyRotNormal *pKVar9;
  ulong *this_00;
  Hash40 HVar10;
  L2CValue *this_01;
  float fVar11;
  uint uVar12;
  float fVar13;
  long lVar14;
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  ulong auStack224 [2];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  ulong local_60;
  ulong uStack88;
  
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_NORMAL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack112,pvVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_KINETIC_ENERGY_RESERVE_ID_ROT_NORMAL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  pvVar5 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,pvVar5);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0xbef1cb304);
  lib::L2CValue::L2CValue(aLStack160,0x155abd4cfe);
  uVar6 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  uVar7 = lib::L2CValue::as_integer(aLStack160);
  iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
  lib::L2CValue::L2CValue(aLStack144,iVar3);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  fVar11 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,fVar11);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
  lib::L2CValue::operator_(aLStack176,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue(aLStack192,_WEAPON_SIMON_CROSS_INSTANCE_WORK_ID_FLAG_FORCE_TURN);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue((L2CValue *)&local_60,0);
    uVar6 = lib::L2CValue::operator__(aLStack144,(L2CValue *)&local_60);
    lib::L2CValue::_L2CValue((L2CValue *)&local_60);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      uVar6 = lib::L2CValue::as_number(aLStack176);
      uVar12 = lib::L2CValue::as_number(aLStack192);
      local_60 = uVar6 & 0xffffffff | (ulong)uVar12 << 0x20;
      uStack88 = 0;
      pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar8,(Vector2f *)&local_60);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,0.0);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      uVar6 = lib::L2CValue::as_number(aLStack176);
      uVar12 = lib::L2CValue::as_number(aLStack192);
      local_60 = uVar6 & 0xffffffff | (ulong)uVar12 << 0x20;
      uStack88 = 0;
      pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar8,(Vector2f *)&local_60);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack176,-1.0);
      lib::L2CValue::L2CValue(aLStack192,-1.0);
      uVar6 = lib::L2CValue::as_number(aLStack176);
      uVar12 = lib::L2CValue::as_number(aLStack192);
      local_60 = uVar6 & 0xffffffff | (ulong)uVar12 << 0x20;
      uStack88 = 0;
      pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
      app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar8,(Vector2f *)&local_60);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_60,_WEAPON_SIMON_CROSS_INSTANCE_WORK_ID_FLOAT_ROT_SPEED_TURN);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack176,fVar11);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::operator_(aLStack176,aLStack160);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
      lib::L2CValue::operator_(aLStack208,(L2CValue *)&local_60);
      lib::L2CValue::_L2CValue((L2CValue *)&local_60);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,0.0);
      lib::L2CValue::L2CValue(aLStack240,0.0);
      uVar6 = lib::L2CValue::as_number(aLStack192);
      lVar14 = lib::L2CValue::as_number((L2CValue *)auStack224);
      uVar12 = lib::L2CValue::as_number(aLStack240);
      local_60 = uVar6 & 0xffffffff | lVar14 << 0x20;
      uStack88 = (ulong)uVar12;
      pKVar9 = (KineticEnergyRotNormal *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::KineticEnergyRotNormal__set_speed_impl(pKVar9,(Vector3f *)&local_60);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::L2CValue(aLStack192,-1.0);
      lib::L2CValue::L2CValue(aLStack208,-1.0);
      uVar6 = lib::L2CValue::as_number(aLStack176);
      lVar14 = lib::L2CValue::as_number(aLStack192);
      uVar12 = lib::L2CValue::as_number(aLStack208);
      local_60 = uVar6 & 0xffffffff | lVar14 << 0x20;
      uStack88 = (ulong)uVar12;
      pKVar9 = (KineticEnergyRotNormal *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::KineticEnergyRotNormal__set_stable_speed_impl(pKVar9,(Vector3f *)&local_60);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      uVar6 = lib::L2CValue::as_number(aLStack176);
      lVar14 = lib::L2CValue::as_number(aLStack192);
      uVar12 = lib::L2CValue::as_number(aLStack208);
      local_60 = uVar6 & 0xffffffff | lVar14 << 0x20;
      uStack88 = (ulong)uVar12;
      pKVar9 = (KineticEnergyRotNormal *)lib::L2CValue::as_pointer(aLStack128);
      app::lua_bind::KineticEnergyRotNormal__set_limit_speed_impl(pKVar9,(Vector3f *)&local_60);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::L2CValue(aLStack192,0xbef1cb304);
      lib::L2CValue::L2CValue(aLStack208,0xf9e30d656);
      uVar6 = lib::L2CValue::as_integer(aLStack192);
      uVar7 = lib::L2CValue::as_integer(aLStack208);
      iVar3 = app::lua_bind::WorkModule__get_param_int_impl(this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue((L2CValue *)&local_60,iVar3);
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack224,_WEAPON_SIMON_CROSS_STATUS_TURN_WORK_INT_STAY_FRAME);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)auStack224);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      this_00 = &local_60;
      goto LAB_710002191c;
    }
  }
  else {
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  lib::L2CValue::L2CValue((L2CValue *)&local_60,_WEAPON_SIMON_CROSS_INSTANCE_WORK_ID_FLOAT_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack176,fVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::operator_(aLStack176,aLStack160);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  uVar6 = lib::L2CValue::as_number(aLStack192);
  uVar12 = lib::L2CValue::as_number(aLStack208);
  local_60 = uVar6 & 0xffffffff | (ulong)uVar12 << 0x20;
  uStack88 = 0;
  pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
  app::lua_bind::KineticEnergyNormal__set_speed_impl(pKVar8,(Vector2f *)&local_60);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  uVar6 = lib::L2CValue::as_number(aLStack192);
  uVar12 = lib::L2CValue::as_number(aLStack208);
  local_60 = uVar6 & 0xffffffff | (ulong)uVar12 << 0x20;
  uStack88 = 0;
  pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
  app::lua_bind::KineticEnergyNormal__set_accel_impl(pKVar8,(Vector2f *)&local_60);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  uVar6 = lib::L2CValue::as_number(aLStack192);
  uVar12 = lib::L2CValue::as_number(aLStack208);
  local_60 = uVar6 & 0xffffffff | (ulong)uVar12 << 0x20;
  uStack88 = 0;
  pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
  app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar8,(Vector2f *)&local_60);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,-1.0);
  uVar6 = lib::L2CValue::as_number(aLStack176);
  uVar12 = lib::L2CValue::as_number(aLStack192);
  local_60 = uVar6 & 0xffffffff | (ulong)uVar12 << 0x20;
  uStack88 = 0;
  pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergyNormal__set_stable_speed_impl(pKVar8,(Vector2f *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue(aLStack192,0.0);
  uVar6 = lib::L2CValue::as_number(aLStack176);
  uVar12 = lib::L2CValue::as_number(aLStack192);
  local_60 = uVar6 & 0xffffffff | (ulong)uVar12 << 0x20;
  uStack88 = 0;
  pKVar8 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergyNormal__set_limit_speed_impl(pKVar8,(Vector2f *)&local_60);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::L2CValue
            ((L2CValue *)&local_60,_WEAPON_SIMON_CROSS_INSTANCE_WORK_ID_FLOAT_ROT_SPEED);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_60);
  fVar11 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack192,fVar11);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::operator_(aLStack192,aLStack160);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,-1.0);
  lib::L2CValue::operator_((L2CValue *)auStack224,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  lib::L2CValue::L2CValue(aLStack256,0.0);
  uVar6 = lib::L2CValue::as_number(aLStack208);
  lVar14 = lib::L2CValue::as_number(aLStack240);
  uVar12 = lib::L2CValue::as_number(aLStack256);
  local_60 = uVar6 & 0xffffffff | lVar14 << 0x20;
  uStack88 = (ulong)uVar12;
  pKVar9 = (KineticEnergyRotNormal *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergyRotNormal__set_speed_impl(pKVar9,(Vector3f *)&local_60);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,0.0);
  lib::L2CValue::L2CValue(aLStack240,0.0);
  uVar6 = lib::L2CValue::as_number(aLStack208);
  lVar14 = lib::L2CValue::as_number((L2CValue *)auStack224);
  uVar12 = lib::L2CValue::as_number(aLStack240);
  local_60 = uVar6 & 0xffffffff | lVar14 << 0x20;
  uStack88 = (ulong)uVar12;
  pKVar9 = (KineticEnergyRotNormal *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergyRotNormal__set_accel_impl(pKVar9,(Vector3f *)&local_60);
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue((L2CValue *)auStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::L2CValue(aLStack208,0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack224,0.0);
  uVar6 = lib::L2CValue::as_number(aLStack192);
  lVar14 = lib::L2CValue::as_number(aLStack208);
  uVar12 = lib::L2CValue::as_number((L2CValue *)auStack224);
  local_60 = uVar6 & 0xffffffff | lVar14 << 0x20;
  uStack88 = (ulong)uVar12;
  pKVar9 = (KineticEnergyRotNormal *)lib::L2CValue::as_pointer(aLStack128);
  app::lua_bind::KineticEnergyRotNormal__set_limit_speed_impl(pKVar9,(Vector3f *)&local_60);
  this_00 = auStack224;
LAB_710002191c:
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,0x420201547);
  lib::L2CValue::L2CValue(aLStack176,0.0);
  lib::L2CValue::L2CValue(aLStack192,1.0);
  lib::L2CValue::L2CValue(aLStack208,false);
  HVar10 = lib::L2CValue::as_hash((L2CValue *)&local_60);
  fVar11 = (float)lib::L2CValue::as_number(aLStack176);
  fVar13 = (float)lib::L2CValue::as_number(aLStack192);
  bVar1 = lib::L2CValue::as_bool(aLStack208);
  app::lua_bind::MotionModule__change_motion_impl
            (this->moduleAccessor,HVar10,fVar11,fVar13,(bool)(bVar1 & 1),0.0,false,false);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_60,false);
  uVar6 = lib::L2CValue::operator__(aLStack176,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack176);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,false);
    FUN_7100022f20(aLStack176,this,aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x15);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,&DAT_7100023610);
  lib::L2CValue::operator_(this_01,(L2CValue *)&local_60);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::L2CValue((L2CValue *)&local_60,Turn_main_loop);
  lua2cpp::L2CFighterBase::fastshift(this,(L2CValue)0xa0);
  lib::L2CValue::_L2CValue((L2CValue *)&local_60);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  return;
}
