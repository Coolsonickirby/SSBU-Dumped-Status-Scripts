
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPackun::status::SpecialLwFallEnd_main_loop(L2CFighterPackun *this,L2CValue *return_value)

{
  L2CValue *this_00;
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *pLVar6;
  BattleObjectModuleAccessor *pBVar7;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  L2CValue *this_05;
  Hash40 HVar8;
  uint uVar9;
  float fVar10;
  long lVar11;
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  undefined8 local_90;
  ulong uStack136;
  
  bVar2 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack272,true);
  uVar5 = lib::L2CValue::operator__((L2CValue *)&local_90,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  cVar1 = (char)&stack0xfffffffffffffff0;
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)(cVar1 + '`'));
    lib::L2CValue::L2CValue(aLStack272,false);
    uVar5 = lib::L2CValue::operator__(aLStack160,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      goto LAB_7100021f54;
    }
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack272,false);
    uVar5 = lib::L2CValue::operator__(aLStack192,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    if ((uVar5 & 1) == 0) goto LAB_7100021f54;
  }
  bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack272,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  this_00 = &this->globalTable;
  if ((bVar3 & 1U) != 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
    lib::L2CValue::L2CValue(aLStack272,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar5 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)(cVar1 + -0x80));
    }
    else {
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_STATUS_KIND_WAIT);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)(cVar1 + -0x80));
    }
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue(aLStack272);
    goto LAB_7100021f54;
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x17);
  lib::L2CValue::L2CValue(aLStack272,_SITUATION_KIND_GROUND);
  uVar5 = lib::L2CValue::operator__(pLVar6,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack272,_SITUATION_KIND_GROUND);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar6);
      app::KineticUtility::clear_unable_energy(iVar4,pBVar7);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue
                (aLStack272,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_END_CHANGE_KINETIC_DONE);
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0.0);
      lib::L2CValue::L2CValue(aLStack160,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack192,0.0);
      lib::L2CValue::L2CValue(aLStack208,0.0);
      lib::L2CValue::L2CValue(aLStack224,0.0);
      lua2cpp::L2CFighterBase::Vector3__create
                (this,(L2CValue)(cVar1 + 'P'),(L2CValue)0x30,(L2CValue)0x20);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack192);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      this_01 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
      this_02 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
      lib::L2CValue::L2CValue(aLStack288,0x54f934137);
      this_03 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      this_04 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
      this_05 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x162d277af);
      HVar8 = lib::L2CValue::as_hash(aLStack288);
      uVar5 = lib::L2CValue::as_number(this_03);
      lVar11 = lib::L2CValue::as_number(this_04);
      uVar9 = lib::L2CValue::as_number(this_05);
      local_90 = uVar5 & 0xffffffff | lVar11 << 0x20;
      uStack136 = (ulong)uVar9;
      app::lua_bind::ModelModule__joint_global_position_impl
                (this->moduleAccessor,HVar8,(Vector3f *)&local_90,true);
      lib::L2CValue::L2CValue(aLStack272,(float)local_90);
      lib::L2CValue::L2CValue(aLStack256,local_90._4_4_);
      lib::L2CValue::L2CValue(aLStack240,(float)uStack136);
      lib::L2CValue::operator_(pLVar6,aLStack272);
      lib::L2CValue::operator_(this_01,aLStack256);
      lib::L2CValue::operator_(this_02,aLStack240);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x18cdc1683);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::operator_(pLVar6,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_THROW_X)
      ;
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__(aLStack160,0x1fbdb2615);
      lib::L2CValue::L2CValue(aLStack272,0.0);
      lib::L2CValue::operator_(pLVar6,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_WORK_FLOAT_JOINT_THROW_Y)
      ;
      fVar10 = (float)lib::L2CValue::as_number((L2CValue *)&local_90);
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar10,iVar4);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_CHANGE_MOTION);
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack272);
      lVar11 = -0x90;
      goto LAB_7100021d08;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack272,SITUATION_KIND_AIR);
    uVar5 = lib::L2CValue::operator__(pLVar6,aLStack272);
    lib::L2CValue::_L2CValue(aLStack272);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue((L2CValue *)&local_90,0x17405a766c);
      lib::L2CValue::L2CValue(aLStack160,true);
      FUN_7100022220(this,&local_90,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lVar11 = -0x80;
LAB_7100021d08:
      lib::L2CValue::_L2CValue((L2CValue *)(&stack0xfffffffffffffff0 + lVar11));
    }
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack272,SITUATION_KIND_AIR);
  uVar5 = lib::L2CValue::operator__(pLVar6,aLStack272);
  lib::L2CValue::_L2CValue(aLStack272);
  if ((uVar5 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_END_CHANGE_KINETIC);
    iVar4 = lib::L2CValue::as_integer(aLStack304);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack288,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack288);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack288);
      pLVar6 = aLStack304;
    }
    else {
      lib::L2CValue::L2CValue
                (aLStack336,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_END_CHANGE_KINETIC_DONE);
      iVar4 = lib::L2CValue::as_integer(aLStack336);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::L2CValue(aLStack320,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack272,false);
      uVar5 = lib::L2CValue::operator__(aLStack320,aLStack272);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack304);
      if ((uVar5 & 1) == 0) goto LAB_7100021f4c;
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      lib::L2CValue::L2CValue(aLStack288,ENERGY_CONTROLLER_RESET_TYPE_FALL_ADJUST);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CValue::L2CValue(aLStack320,0.0);
      lib::L2CValue::L2CValue(aLStack336,0.0);
      lib::L2CValue::L2CValue(aLStack352,0.0);
      lib::L2CValue::L2CValue(aLStack368,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack288);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack320);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack336);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack352);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack368);
      app::sv_kinetic_energy::reset_energy(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KINETIC_ENERGY_ID_CONTROL);
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar4);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::L2CValue
                (aLStack272,_FIGHTER_PACKUN_STATUS_SPECIAL_LW_FLAG_END_CHANGE_KINETIC_DONE);
      iVar4 = lib::L2CValue::as_integer(aLStack272);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
      pLVar6 = aLStack272;
    }
    lib::L2CValue::_L2CValue(pLVar6);
  }
LAB_7100021f4c:
  FUN_7100023410(this);
LAB_7100021f54:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

