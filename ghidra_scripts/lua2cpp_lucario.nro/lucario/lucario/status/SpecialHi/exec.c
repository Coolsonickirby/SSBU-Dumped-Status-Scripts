
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterLucario::status::SpecialHi_exec(L2CFighterLucario *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  FighterKineticEnergyGravity *pFVar8;
  L2CValue *this_00;
  KineticEnergyNormal *pKVar9;
  float fVar10;
  uint uVar11;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  ulong local_50;
  undefined8 uStack72;
  
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_50,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLAG_GRAVITY_ONOFF);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      pvVar6 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,pvVar6);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0.0);
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      pFVar8 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)&local_50);
      app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar8,fVar10);
      this_00 = aLStack112;
    }
    else {
      lib::L2CValue::L2CValue(aLStack112,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      pvVar6 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,pvVar6);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
      lib::L2CValue::L2CValue(aLStack160,0x7b9905530);
      uVar5 = lib::L2CValue::as_integer(aLStack144);
      uVar7 = lib::L2CValue::as_integer(aLStack160);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar5,uVar7);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::operator_(aLStack128);
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      pFVar8 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer((L2CValue *)&local_50);
      app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar8,fVar10);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack160);
      this_00 = aLStack144;
    }
    lib::L2CValue::_L2CValue(this_00);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    pvVar6 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack112,pvVar6);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue(aLStack144,0x1086bc4a93);
    lib::L2CValue::L2CValue(aLStack160,0x7ce9765a6);
    uVar5 = lib::L2CValue::as_integer(aLStack144);
    uVar7 = lib::L2CValue::as_integer(aLStack160);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar5,uVar7);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    uVar5 = lib::L2CValue::as_number(aLStack128);
    uVar11 = lib::L2CValue::as_number(aLStack176);
    local_50 = uVar5 & 0xffffffff | (ulong)uVar11 << 0x20;
    uStack72 = 0;
    pKVar9 = (KineticEnergyNormal *)lib::L2CValue::as_pointer(aLStack112);
    app::lua_bind::KineticEnergyNormal__set_brake_impl(pKVar9,(Vector2f *)&local_50);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLAG_RUSH_DIR_ROT);
  iVar3 = lib::L2CValue::as_integer(aLStack112);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_50,true);
  uVar5 = lib::L2CValue::operator__(aLStack96,(L2CValue *)&local_50);
  lib::L2CValue::_L2CValue((L2CValue *)&local_50);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_50,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_INT_RUSH_DIR_INTP_FRAME);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    lib::L2CValue::L2CValue((L2CValue *)&local_50,0);
    uVar5 = lib::L2CValue::operator_((L2CValue *)&local_50,aLStack96);
    lib::L2CValue::_L2CValue((L2CValue *)&local_50);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR_ROT_SPEED
                );
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack112,fVar10);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR_ROT);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack128,fVar10);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                (aLStack160,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR_ROT_ACCEL);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      fVar10 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      lib::L2CValue::operator_(aLStack112,aLStack144);
      lib::L2CValue::operator_(aLStack112,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::operator_(aLStack128,aLStack112);
      lib::L2CValue::operator_(aLStack128,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR_ROT_SPEED
                );
      fVar10 = (float)lib::L2CValue::as_number(aLStack112);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_FLOAT_RUSH_DIR_ROT);
      fVar10 = (float)lib::L2CValue::as_number(aLStack128);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar3);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::L2CValue((L2CValue *)&local_50,1);
      lib::L2CValue::operator_(aLStack96,(L2CValue *)&local_50);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::operator_(aLStack96,aLStack144);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue
                ((L2CValue *)&local_50,_FIGHTER_LUCARIO_MACH_STATUS_WORK_ID_INT_RUSH_DIR_INTP_FRAME)
      ;
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      iVar4 = lib::L2CValue::as_integer((L2CValue *)&local_50);
      app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue((L2CValue *)&local_50);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
    }
    FUN_7100007b90(this);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

