
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGekkouga::status::SpecialLwAttack_exec(L2CFighterGekkouga *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  Hash40 HVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  undefined8 *puVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined auStack304 [16];
  Hash40MapEntry **local_120;
  ulong uStack280;
  L2CValue aLStack272 [16];
  undefined8 auStack256 [2];
  L2CValue aLStack240 [16];
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  undefined8 auStack96 [2];
  
  lib::L2CValue::L2CValue(aLStack128,0);
  lib::L2CValue::L2CValue(aLStack144,false);
  lib::L2CValue::L2CValue(aLStack160,0);
  lib::L2CValue::L2CValue(aLStack176,0);
  lib::L2CValue::L2CValue(aLStack192,0);
  lib::L2CValue::L2CValue(aLStack208,0);
  lib::L2CValue::L2CValue(aLStack224,0);
  lib::L2CValue::L2CValue(aLStack240,0);
  lib::L2CValue::L2CValue
            ((L2CValue *)auStack96,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_DIR);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)auStack96);
  fVar8 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),fVar8);
  lib::L2CValue::operator_(aLStack192,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,0x31d39a761);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  lib::L2CValue::L2CValue((L2CValue *)auStack256,0.0);
  HVar4 = lib::L2CValue::as_hash((L2CValue *)auStack96);
  uVar13 = lib::L2CValue::as_number(aLStack192);
  lVar14 = lib::L2CValue::as_number(aLStack112);
  uVar9 = lib::L2CValue::as_number((L2CValue *)auStack256);
  local_120 = (Hash40MapEntry **)(uVar13 & 0xffffffff | lVar14 << 0x20);
  uStack280 = (ulong)uVar9;
  app::lua_bind::ModelModule__set_joint_rotate_impl
            (this->moduleAccessor,HVar4,(Vector3f *)(auStack304 + 0x10),0,0);
  lib::L2CValue::_L2CValue((L2CValue *)auStack256);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue((L2CValue *)auStack96);
  lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),0.0);
  lib::L2CValue::operator_(aLStack192,(L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::L2CValue
            ((L2CValue *)(auStack304 + 0x10),_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_WORK_FLOAT_RUSH_DIR
            );
  fVar8 = (float)lib::L2CValue::as_number((L2CValue *)auStack96);
  iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack304 + 0x10));
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar8,iVar3);
  lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
  lib::L2CValue::_L2CValue((L2CValue *)auStack96);
  bVar1 = app::lua_bind::StopModule__is_stop_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue((L2CValue *)auStack96,(bool)(bVar1 & 1));
  lib::L2CValue::operator_((L2CValue *)auStack96);
  bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack304 + 0x10));
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
    puVar7 = auStack96;
LAB_710000a0e8:
    lib::L2CValue::_L2CValue((L2CValue *)puVar7);
  }
  else {
    bVar1 = app::lua_bind::SlowModule__is_skip_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue((L2CValue *)auStack256,(bool)(bVar1 & 1));
    lib::L2CValue::operator_((L2CValue *)auStack256);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue((L2CValue *)auStack256);
    lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
    lib::L2CValue::_L2CValue((L2CValue *)auStack96);
    if ((bVar2 & 1U) != 0) {
      bVar1 = app::lua_bind::StatusModule__is_changing_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),(bool)(bVar1 & 1));
      lib::L2CValue::operator_(aLStack144,(L2CValue *)(auStack304 + 0x10));
      lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
      lib::L2CValue::operator_(aLStack144);
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack304 + 0x10));
      if ((bVar2 & 1U) == 0) {
        puVar7 = (undefined8 *)(auStack304 + 0x10);
        goto LAB_710000a0e8;
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_INIT_MOVE_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue((L2CValue *)auStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)auStack96);
      lib::L2CValue::_L2CValue((L2CValue *)auStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue((L2CValue *)auStack96,_GROUND_TOUCH_FLAG_ALL);
        uVar9 = lib::L2CValue::as_integer((L2CValue *)auStack96);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar9);
        lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool((L2CValue *)(auStack304 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
        lib::L2CValue::_L2CValue((L2CValue *)auStack96);
        if ((bVar2 & 1U) != 0) {
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
          lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),_SITUATION_KIND_GROUND);
          uVar13 = lib::L2CValue::operator__(pLVar5,(L2CValue *)(auStack304 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
          if ((uVar13 & 1) != 0) {
            lib::L2CValue::L2CValue
                      ((L2CValue *)(auStack304 + 0x10),
                       _FIGHTER_GEKKOUGA_STATUS_SPECIAL_LW_FLAG_BOUND_GROUND);
            iVar3 = lib::L2CValue::as_integer((L2CValue *)(auStack304 + 0x10));
            app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
            lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
          }
          lib::L2CValue::L2CValue((L2CValue *)auStack304,_GROUND_TOUCH_FLAG_ALL);
          uVar9 = lib::L2CValue::as_integer((L2CValue *)auStack304);
          uVar15 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar9);
          lib::L2CValue::L2CValue((L2CValue *)(auStack304 + 0x10),(float)uVar15);
          pLVar5 = (L2CValue *)(auStack304 + 0x20);
          lib::L2CValue::L2CValue(pLVar5,(float)((ulong)uVar15 >> 0x20));
          lib::L2CValue::L2CValue((L2CValue *)auStack96,(L2CValue *)(auStack304 + 0x10));
          lib::L2CValue::L2CValue(aLStack112,pLVar5);
          lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue((L2CValue *)auStack96);
          lib::L2CValue::_L2CValue(pLVar5);
          lib::L2CValue::_L2CValue((L2CValue *)(auStack304 + 0x10));
          lib::L2CValue::_L2CValue((L2CValue *)auStack304);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack256,0x18cdc1683);
          lib::L2CValue::operator_(aLStack128,pLVar5);
          pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)auStack256,0x1fbdb2615);
          lib::L2CValue::operator_(aLStack176,pLVar5);
          lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_x_impl
                                   (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)auStack96,fVar8);
          lib::L2CValue::operator_(aLStack240,(L2CValue *)auStack96);
          lib::L2CValue::_L2CValue((L2CValue *)auStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue(aLStack112,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
          iVar3 = lib::L2CValue::as_integer(aLStack112);
          fVar8 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl
                                   (this->moduleAccessor,iVar3);
          lib::L2CValue::L2CValue((L2CValue *)auStack96,fVar8);
          lib::L2CValue::operator_(aLStack160,(L2CValue *)auStack96);
          lib::L2CValue::_L2CValue((L2CValue *)auStack96);
          lib::L2CValue::_L2CValue(aLStack112);
          fVar8 = (float)lib::L2CValue::as_number(aLStack128);
          fVar10 = (float)lib::L2CValue::as_number(aLStack176);
          fVar11 = (float)lib::L2CValue::as_number(aLStack240);
          fVar12 = (float)lib::L2CValue::as_number(aLStack160);
          fVar8 = (float)app::sv_math::vec2_angle(fVar8,fVar10,fVar11,fVar12);
          lib::L2CValue::L2CValue((L2CValue *)auStack96,fVar8);
          lib::L2CValue::operator_(aLStack224,(L2CValue *)auStack96);
          lib::L2CValue::_L2CValue((L2CValue *)auStack96);
          lib::L2CValue::L2CValue(aLStack112,0x1018dfb2f4);
          lib::L2CValue::L2CValue((L2CValue *)auStack304,0xa07c30693);
          uVar13 = lib::L2CValue::as_integer(aLStack112);
          uVar6 = lib::L2CValue::as_integer((L2CValue *)auStack304);
          fVar8 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                   (this->moduleAccessor,uVar13,uVar6);
          lib::L2CValue::L2CValue((L2CValue *)auStack96,fVar8);
          lib::L2CValue::operator_(aLStack208,(L2CValue *)auStack96);
          lib::L2CValue::_L2CValue((L2CValue *)auStack96);
          lib::L2CValue::_L2CValue((L2CValue *)auStack304);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::L2CValue((L2CValue *)auStack96,90.0);
          puVar7 = auStack96;
          lib::L2CValue::operator_(aLStack208,(L2CValue *)puVar7);
          lib::L2CValue::_L2CValue((L2CValue *)auStack96);
          lib::L2CAgent::math_rad((L2CAgent *)auStack304,(L2CValue *)puVar7);
          uVar13 = lib::L2CValue::operator__(aLStack112,aLStack224);
          lib::L2CValue::_L2CValue(aLStack112);
          lib::L2CValue::_L2CValue((L2CValue *)auStack304);
          if ((uVar13 & 1) != 0) {
            lib::L2CValue::L2CValue(aLStack112,0x25d3374f01);
            lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
            lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
            app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
            lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
            lib::L2CValue::_L2CValue((L2CValue *)auStack96);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue(aLStack112,_FIGHTER_GEKKOUGA_STATUS_KIND_SPECIAL_LW_BOUND);
            lib::L2CValue::L2CValue((L2CValue *)auStack304,false);
            lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0xd0);
            lib::L2CValue::_L2CValue((L2CValue *)auStack304);
            lib::L2CValue::_L2CValue(aLStack112);
            lib::L2CValue::L2CValue((L2CValue *)return_value,0);
            lib::L2CValue::_L2CValue((L2CValue *)auStack256);
            goto LAB_710000a0f8;
          }
          puVar7 = auStack256;
          goto LAB_710000a0e8;
        }
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
LAB_710000a0f8:
  lib::L2CValue::_L2CValue(aLStack240);
  lib::L2CValue::_L2CValue(aLStack224);
  lib::L2CValue::_L2CValue(aLStack208);
  lib::L2CValue::_L2CValue(aLStack192);
  lib::L2CValue::_L2CValue(aLStack176);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack144);
  lib::L2CValue::_L2CValue(aLStack128);
  return;
}

