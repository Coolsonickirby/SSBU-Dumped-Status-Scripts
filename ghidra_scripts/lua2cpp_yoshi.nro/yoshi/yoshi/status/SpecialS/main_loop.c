
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterYoshi::status::SpecialS_main_loop(L2CFighterYoshi *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  Hash40 HVar7;
  ulong uVar8;
  void *pvVar9;
  FighterKineticEnergyGravity *pFVar10;
  KineticEnergy *pKVar11;
  float fVar12;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::operator_(aLStack192,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,false);
  lib::L2CValue::operator_(aLStack224,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::operator_(aLStack192);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    this_00 = &this->globalTable;
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) == 0) {
LAB_710002980c:
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack80,true);
          lib::L2CValue::operator_(aLStack224,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INSTANCE_WORK_ID_INT_CUSTOMIZE_SPECIAL_S_NO);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue(aLStack80,iVar3);
          lib::L2CValue::operator_(aLStack208,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack80,1);
          uVar6 = lib::L2CValue::operator__(aLStack208,aLStack80);
          lib::L2CValue::_L2CValue(aLStack80);
          if ((uVar6 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack80,2);
            uVar6 = lib::L2CValue::operator__(aLStack208,aLStack80);
            lib::L2CValue::_L2CValue(aLStack80);
            if ((uVar6 & 1) == 0) goto LAB_71000299d8;
            lib::L2CValue::L2CValue(aLStack80,0x172ace445b);
            HVar7 = lib::L2CValue::as_hash(aLStack80);
            iVar3 = app::lua_bind::SoundModule__play_se_impl
                              (this->moduleAccessor,HVar7,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack240,iVar3);
          }
          else {
            lib::L2CValue::L2CValue(aLStack80,0x1789caf848);
            HVar7 = lib::L2CValue::as_hash(aLStack80);
            iVar3 = app::lua_bind::SoundModule__play_se_impl
                              (this->moduleAccessor,HVar7,true,false,false,false,0);
            lib::L2CValue::L2CValue(aLStack240,iVar3);
          }
          lib::L2CValue::_L2CValue(aLStack240);
          goto LAB_71000299d0;
        }
      }
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar6 & 1) == 0) goto LAB_710002980c;
      lib::L2CValue::L2CValue(aLStack80,true);
      lib::L2CValue::operator_(aLStack224,aLStack80);
LAB_71000299d0:
      lib::L2CValue::_L2CValue(aLStack80);
    }
  }
LAB_71000299d8:
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((bVar2 & 1U) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_AIR_S_JUMP);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100029e60;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
    uVar6 = lib::L2CValue::operator__(pLVar5,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_YOSHI_STATUS_KIND_SPECIAL_AIR_S_JUMP);
      lib::L2CValue::L2CValue(aLStack96,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      goto LAB_7100029e60;
    }
  }
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  if ((bVar2 & 1U) != 0) {
    FUN_71000291d0(this);
  }
  lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack112,0x5e24fde57);
  uVar6 = lib::L2CValue::as_integer(aLStack80);
  uVar8 = lib::L2CValue::as_integer(aLStack112);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack96,fVar12);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,0xfea97fe73);
  lib::L2CValue::L2CValue(aLStack128,0x97d4672df);
  uVar6 = lib::L2CValue::as_integer(aLStack80);
  uVar8 = lib::L2CValue::as_integer(aLStack128);
  fVar12 = (float)app::lua_bind::WorkModule__get_param_float_impl(this->moduleAccessor,uVar6,uVar8);
  lib::L2CValue::L2CValue(aLStack112,fVar12);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  pvVar9 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack128,pvVar9);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KINETIC_ENERGY_ID_STOP);
  iVar3 = lib::L2CValue::as_integer(aLStack80);
  pvVar9 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack144,pvVar9);
  lib::L2CValue::_L2CValue(aLStack80);
  iVar3 = app::lua_bind::StatusModule__situation_kind_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar6 & 1) == 0) {
    pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack128);
    app::lua_bind::KineticEnergy__clear_speed_impl(pKVar11);
    pKVar11 = (KineticEnergy *)lib::L2CValue::as_pointer(aLStack144);
    app::lua_bind::KineticEnergy__clear_speed_impl(pKVar11);
    lib::L2CValue::L2CValue(aLStack80,0.0);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_RESERVE_DIR);
    fVar12 = (float)lib::L2CValue::as_number(aLStack80);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar3);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,0);
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_INT_TURN_FLAG);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::WorkModule__set_int_impl(this->moduleAccessor,iVar3,iVar4);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    pvVar9 = (void *)app::lua_bind::KineticModule__get_energy_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,pvVar9);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::operator_(aLStack96);
    fVar12 = (float)lib::L2CValue::as_number(aLStack160);
    pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack80);
    app::lua_bind::FighterKineticEnergyGravity__set_accel_impl(pFVar10,fVar12);
    lib::L2CValue::_L2CValue(aLStack160);
    fVar12 = (float)lib::L2CValue::as_number(aLStack112);
    pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack80);
    app::lua_bind::FighterKineticEnergyGravity__set_limit_speed_impl(pFVar10,fVar12);
    fVar12 = (float)lib::L2CValue::as_number(aLStack112);
    pFVar10 = (FighterKineticEnergyGravity *)lib::L2CValue::as_pointer(aLStack80);
    app::lua_bind::FighterKineticEnergyGravity__set_stable_speed_impl(pFVar10,fVar12);
    lib::L2CValue::L2CValue(aLStack160,0.0);
    lib::L2CValue::L2CValue(aLStack176,_FIGHTER_YOSHI_STATUS_SPECIAL_S_WORK_FLOAT_RESERVE_DIR);
    fVar12 = (float)lib::L2CValue::as_number(aLStack160);
    iVar3 = lib::L2CValue::as_integer(aLStack176);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar12,iVar3);
    lib::L2CValue::_L2CValue(aLStack176);
  }
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_7100029e60:
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  return;
}

