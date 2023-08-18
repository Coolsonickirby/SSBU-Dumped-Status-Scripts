
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::SpecialSHit_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  L2CValue *pLVar5;
  L2CAgent *pLVar6;
  ulong uVar7;
  Hash40 HVar8;
  L2CValue *pLVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  undefined auStack336 [32];
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack224);
  lib::L2CValue::_L2CValue(aLStack224);
  if ((bVar1 & 1U) == 0) {
    FUN_7100025ab0(this);
    lib::L2CValue::L2CValue(aLStack144,0xde29323e4);
    lib::L2CValue::L2CValue(aLStack160,0x1102fe80cd);
    lib::L2CValue::L2CValue(aLStack176,true);
    lua2cpp::L2CFighterCommon::sub_change_motion_by_situation
              (this,(L2CValue)0x70,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::L2CValue(aLStack288,GROUND_TOUCH_FLAG_DOWN);
    uVar3 = lib::L2CValue::as_integer(aLStack288);
    bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack224);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack288);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack384,GROUND_TOUCH_FLAG_DOWN);
      uVar3 = lib::L2CValue::as_integer(aLStack384);
      uVar13 = app::lua_bind::GroundModule__get_touch_normal_impl(this->moduleAccessor,uVar3);
      lib::L2CValue::L2CValue(aLStack224,(float)uVar13);
      lib::L2CValue::L2CValue(aLStack208,(float)((ulong)uVar13 >> 0x20));
      lib::L2CValue::L2CValue(aLStack288,aLStack224);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,aLStack208);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xe0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack384);
      pLVar9 = (L2CValue *)0xffffffa6;
      lib::L2CValue::L2CValue((L2CValue *)auStack336,-0x5a);
      lib::L2CAgent::math_rad((L2CAgent *)auStack336,pLVar9);
      fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack384,fVar10);
      lib::L2CValue::operator_(aLStack288,aLStack384);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x18cdc1683);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack192,0x1fbdb2615);
      fVar10 = (float)lib::L2CValue::as_number(pLVar9);
      fVar11 = (float)lib::L2CValue::as_number(pLVar5);
      fVar12 = (float)lib::L2CValue::as_number(aLStack240);
      uVar13 = app::sv_math::vec2_rot(fVar10,fVar11,fVar12);
      lib::L2CValue::L2CValue(aLStack288,(float)uVar13);
      lib::L2CValue::L2CValue(aLStack272,(float)((ulong)uVar13 >> 0x20));
      lib::L2CValue::L2CValue((L2CValue *)auStack336,aLStack288);
      lib::L2CValue::L2CValue(aLStack384,aLStack272);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xb0,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      uVar13 = app::sv_kinetic_energy::get_speed(this->luaStateAgent);
      lib::L2CValue::L2CValue((L2CValue *)auStack336,(float)uVar13);
      pLVar9 = (L2CValue *)(auStack336 + 0x10);
      lib::L2CValue::L2CValue(pLVar9,(float)((ulong)uVar13 >> 0x20));
      lib::L2CValue::L2CValue(aLStack384,(L2CValue *)auStack336);
      lib::L2CValue::L2CValue(aLStack96,pLVar9);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0x80,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(pLVar9);
      lib::L2CValue::_L2CValue((L2CValue *)auStack336);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack400,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack400);
      uVar13 = app::sv_kinetic_energy::get_brake(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack384,(float)uVar13);
      lib::L2CValue::L2CValue(aLStack368,(float)((ulong)uVar13 >> 0x20));
      lib::L2CValue::L2CValue(aLStack96,aLStack384);
      lib::L2CValue::L2CValue(aLStack112,aLStack368);
      lua2cpp::L2CFighterBase::Vector2__create(this,(L2CValue)0xa0,(L2CValue)0x90);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack368);
      lib::L2CValue::_L2CValue(aLStack384);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::L2CValue(aLStack400,aLStack304);
      lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0x70);
      lib::L2CValue::operator_(aLStack256,aLStack112);
      lib::L2CValue::operator_(aLStack304,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack400);
      lib::L2CValue::L2CValue(aLStack416,aLStack352);
      lua2cpp::L2CFighterBase::Vector2__length(this,(L2CValue)0x60);
      lib::L2CValue::operator_(aLStack256,aLStack112);
      lib::L2CValue::operator_(aLStack352,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack416);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x18cdc1683);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__(aLStack304,0x1fbdb2615);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar9);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar5);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      pLVar9 = (L2CValue *)0x18cdc1683;
      pLVar6 = (L2CAgent *)lib::L2CValue::operator__(aLStack352,0x18cdc1683);
      lib::L2CAgent::math_abs(pLVar6,pLVar9);
      pLVar9 = (L2CValue *)0x1fbdb2615;
      pLVar6 = (L2CAgent *)lib::L2CValue::operator__(aLStack352,0x1fbdb2615);
      lib::L2CAgent::math_abs(pLVar6,pLVar9);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack432);
      app::sv_kinetic_energy::set_brake(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_DEMON_STATUS_SPECIAL_S_FLAG_TOUCHED_WALL);
    iVar4 = lib::L2CValue::as_integer(aLStack192);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar4);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    lib::L2CValue::operator_(aLStack112);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,GROUND_TOUCH_FLAG_RIGHT);
      fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack192,fVar10);
      lib::L2CValue::L2CValue(aLStack96,-1.0);
      uVar7 = lib::L2CValue::operator__(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_GROUND_TOUCH_FLAG_LEFT);
        lib::L2CValue::operator_(aLStack112,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      uVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(this->moduleAccessor,uVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_ANIMCMD_EXPRESSION);
        lib::L2CValue::L2CValue(aLStack192,0x1ce29f34c1);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        HVar8 = lib::L2CValue::as_hash(aLStack192);
        app::lua_bind::MotionAnimcmdModule__call_script_single_impl
                  (this->moduleAccessor,iVar4,HVar8,-1);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_SPECIAL_S_FLAG_TOUCHED_WALL);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar4);
        lib::L2CValue::_L2CValue(aLStack96);
      }
      lib::L2CValue::_L2CValue(aLStack112);
    }
    bVar2 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
      uVar7 = lib::L2CValue::operator__(pLVar9,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_KIND_SPECIAL_S_AIR_END);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_DEMON_STATUS_KIND_SPECIAL_S_END);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    iVar4 = 0;
  }
  else {
    iVar4 = 1;
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

