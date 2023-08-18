
/* WARNING: Could not reconcile some variable overlaps */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMaster::status::SpecialHiWallJump_main_loop(L2CFighterMaster *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong *this_00;
  ulong uVar5;
  L2CValue *pLVar6;
  L2CValue *pLVar7;
  L2CValue *this_01;
  L2CValue *this_02;
  L2CValue *this_03;
  L2CValue *this_04;
  Hash40 HVar8;
  float fVar9;
  uint uVar10;
  long lVar11;
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  ulong local_100;
  ulong uStack248;
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  ulong auStack160 [2];
  undefined8 local_90;
  ulong uStack136;
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_100,true);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_90);
  if ((uVar4 & 1) != 0) {
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    if ((bVar2 & 1U) != 0) goto LAB_710002adfc;
  }
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack160,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_WALL_JUMP_FAIL);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue((L2CValue *)&local_100,true);
  uVar4 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_100);
  lib::L2CValue::_L2CValue((L2CValue *)&local_100);
  if ((uVar4 & 1) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    if ((bVar2 & 1U) != 0) goto LAB_710002adc4;
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack160,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_HIT_WALL_LOST);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_100,true);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue
                ((L2CValue *)auStack160,_FIGHTER_MASTER_STATUS_SPECIAL_HI_INT_WALL_JUMP_STOP_FRAME);
      iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)&local_100,0);
      uVar4 = lib::L2CValue::operator_((L2CValue *)&local_100,(L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      lib::L2CValue::_L2CValue((L2CValue *)&local_90);
      lib::L2CValue::_L2CValue((L2CValue *)auStack160);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)&local_90,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
        fVar9 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
        lib::L2CValue::L2CValue((L2CValue *)&local_100,fVar9);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::L2CValue((L2CValue *)auStack160,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack160);
        fVar9 = (float)app::sv_kinetic_energy::get_speed_y(this->luaStateAgent);
        lib::L2CValue::L2CValue((L2CValue *)&local_90,fVar9);
        lib::L2CValue::_L2CValue((L2CValue *)auStack160);
        lib::L2CValue::L2CValue(aLStack192,0x1086bc4a93);
        lib::L2CValue::L2CValue(aLStack208,0x1f08685b12);
        uVar4 = lib::L2CValue::as_integer(aLStack192);
        uVar5 = lib::L2CValue::as_integer(aLStack208);
        fVar9 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                 (this->moduleAccessor,uVar4,uVar5);
        lib::L2CValue::L2CValue(aLStack176,fVar9);
        lib::L2CValue::operator_((L2CValue *)&local_90,aLStack176);
        lib::L2CValue::operator_((L2CValue *)&local_90,(L2CValue *)auStack160);
        lib::L2CValue::_L2CValue((L2CValue *)auStack160);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::L2CValue((L2CValue *)auStack160,FIGHTER_KINETIC_ENERGY_ID_MOTION);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)auStack160);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_100);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,(L2CValue *)&local_90);
        app::sv_kinetic_energy::set_speed(this->luaStateAgent);
        lib::L2CValue::_L2CValue((L2CValue *)auStack160);
        lib::L2CValue::_L2CValue((L2CValue *)&local_90);
        lib::L2CValue::_L2CValue((L2CValue *)&local_100);
      }
      lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0x70);
      goto LAB_710002adec;
    }
    lib::L2CValue::L2CValue
              ((L2CValue *)auStack160,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_REQ_EFFECT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue((L2CValue *)&local_100,true);
    uVar4 = lib::L2CValue::operator__((L2CValue *)&local_90,(L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
    if ((uVar4 & 1) == 0) goto LAB_710002adfc;
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CValue::L2CValue(aLStack192,0.0);
    lib::L2CValue::L2CValue(aLStack208,0.0);
    lua2cpp::L2CFighterBase::Vector3__create(this,(L2CValue)0x50,(L2CValue)0x40,(L2CValue)0x30);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
    this_01 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x162d277af);
    lib::L2CValue::L2CValue(aLStack272,0x31d39a761);
    this_02 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
    this_03 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
    this_04 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x162d277af);
    HVar8 = lib::L2CValue::as_hash(aLStack272);
    uVar4 = lib::L2CValue::as_number(this_02);
    lVar11 = lib::L2CValue::as_number(this_03);
    uVar10 = lib::L2CValue::as_number(this_04);
    local_90 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack136 = (ulong)uVar10;
    app::lua_bind::ModelModule__joint_global_position_impl
              (this->moduleAccessor,HVar8,(Vector3f *)&local_90,true);
    lib::L2CValue::L2CValue((L2CValue *)&local_100,(float)local_90);
    lib::L2CValue::L2CValue(aLStack240,local_90._4_4_);
    lib::L2CValue::L2CValue(aLStack224,(float)uStack136);
    lib::L2CValue::operator_(pLVar6,(L2CValue *)&local_100);
    lib::L2CValue::operator_(pLVar7,aLStack240);
    lib::L2CValue::operator_(this_01,aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue(aLStack288,0x97cac16ca);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x18cdc1683);
    pLVar7 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack160,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack304,0.0);
    lib::L2CValue::L2CValue(aLStack320,0.0);
    lib::L2CValue::L2CValue(aLStack336,0.0);
    lib::L2CValue::L2CValue(aLStack352,0.0);
    lib::L2CValue::L2CValue(aLStack368,1.0);
    lib::L2CValue::L2CValue(aLStack384,EFFECT_SUB_ATTRIBUTE_NONE);
    lib::L2CValue::L2CValue(aLStack400,-1);
    HVar8 = lib::L2CValue::as_hash(aLStack288);
    uVar4 = lib::L2CValue::as_number(pLVar6);
    lVar11 = lib::L2CValue::as_number(pLVar7);
    uVar10 = lib::L2CValue::as_number(aLStack304);
    local_100 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack248 = (ulong)uVar10;
    uVar4 = lib::L2CValue::as_number(aLStack320);
    lVar11 = lib::L2CValue::as_number(aLStack336);
    uVar10 = lib::L2CValue::as_number(aLStack352);
    local_90 = uVar4 & 0xffffffff | lVar11 << 0x20;
    uStack136 = (ulong)uVar10;
    fVar9 = (float)lib::L2CValue::as_number(aLStack368);
    uVar10 = lib::L2CValue::as_integer(aLStack384);
    iVar3 = lib::L2CValue::as_integer(aLStack400);
    uVar10 = app::lua_bind::EffectModule__req_impl
                       (this->moduleAccessor,HVar8,(Vector3f *)&local_100,(Vector3f *)&local_90,
                        fVar9,uVar10,iVar3,false,0);
    lib::L2CValue::L2CValue(aLStack272,uVar10);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack400);
    lib::L2CValue::_L2CValue(aLStack384);
    lib::L2CValue::_L2CValue(aLStack368);
    lib::L2CValue::_L2CValue(aLStack352);
    lib::L2CValue::_L2CValue(aLStack336);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::L2CValue
              ((L2CValue *)&local_100,_FIGHTER_MASTER_STATUS_SPECIAL_HI_FLAG_REQ_EFFECT);
    iVar3 = lib::L2CValue::as_integer((L2CValue *)&local_100);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::_L2CValue((L2CValue *)&local_100);
    this_00 = auStack160;
  }
  else {
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    lib::L2CValue::_L2CValue((L2CValue *)auStack160);
LAB_710002adc4:
    lib::L2CValue::L2CValue((L2CValue *)&local_100,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue((L2CValue *)&local_90,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0x70);
LAB_710002adec:
    lib::L2CValue::_L2CValue((L2CValue *)&local_90);
    this_00 = &local_100;
  }
  lib::L2CValue::_L2CValue((L2CValue *)this_00);
LAB_710002adfc:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

