
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterPickel::status::SpecialSRide_main_loop(L2CFighterPickel *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  GroundCorrectKind GVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  L2CValue *pLVar9;
  BattleObjectModuleAccessor *pBVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
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
  
  bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
  lib::L2CValue::_L2CValue(aLStack256);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_S_FLAG_GENERATE_TROLLEY);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack128,0x1fdf2ab243);
      uVar6 = lib::L2CValue::as_integer(aLStack112);
      uVar7 = lib::L2CValue::as_integer(aLStack128);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack256,fVar11);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack144,0x20ba933bd0);
      uVar6 = lib::L2CValue::as_integer(aLStack128);
      uVar7 = lib::L2CValue::as_integer(aLStack144);
      fVar11 = (float)app::lua_bind::WorkModule__get_param_float_impl
                                (this->moduleAccessor,uVar6,uVar7);
      lib::L2CValue::L2CValue(aLStack112,fVar11);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack160,aLStack256);
      FUN_710004b200(aLStack144,this,aLStack160);
      lib::L2CValue::operator_(aLStack144);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack128);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack208,aLStack112);
        FUN_710004b200(aLStack192,this,aLStack208);
        lib::L2CValue::operator_(aLStack192);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack176);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((bVar2 & 1U) != 0) goto LAB_710004a9bc;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
LAB_710004a9bc:
        lib::L2CValue::L2CValue
                  (aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_S_FLAG_GENERATE_TROLLEY_TOP_N);
        iVar3 = lib::L2CValue::as_integer(aLStack128);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_GENERATE_ARTICLE_TROLLEY);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::ArticleModule__generate_article_enable_impl
                (this->moduleAccessor,iVar3,false,-1);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_S_FLAG_GENERATE_TROLLEY);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_PICKEL_STATUS_SPECIAL_S_FLAG_GENERATED_TROLLEY);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack256);
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_GENERATE_ARTICLE_TROLLEY);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_STATUS_SPECIAL_S_FLAG_GENERATED_TROLLEY);
      iVar3 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar2 & 1U) == 0) goto LAB_710004a7b8;
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_STATUS_KIND_FALL);
      lib::L2CValue::L2CValue(aLStack112,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0x90);
      goto LAB_710004a7a8;
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::LinkModule__is_link_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar2 & 1U) == 0) goto LAB_710004a7b8;
    uVar4 = app::lua_bind::MotionModule__end_frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack256,uVar4);
    fVar11 = (float)app::lua_bind::MotionModule__frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack128,fVar11);
    lib::L2CValue::operator_(aLStack256,aLStack128);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::L2CValue(aLStack256,0.0);
    uVar6 = lib::L2CValue::operator_(aLStack256,aLStack112);
    lib::L2CValue::_L2CValue(aLStack256);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack128);
      lib::L2CValue::L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack176);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_PICKEL_LINK_NO_TROLLEY);
      iVar3 = lib::L2CValue::as_integer(aLStack192);
      pfVar8 = (float *)app::lua_bind::LinkModule__get_parent_pos_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack256,*pfVar8);
      lib::L2CValue::L2CValue(aLStack240,pfVar8[1]);
      lib::L2CValue::L2CValue(aLStack224,pfVar8[2]);
      lib::L2CValue::operator_(aLStack128,aLStack256);
      lib::L2CValue::operator_(aLStack144,aLStack240);
      lib::L2CValue::operator_(aLStack176,aLStack224);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack192);
      fVar11 = (float)app::lua_bind::PostureModule__pos_x_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack272,fVar11);
      lib::L2CValue::operator_(aLStack128,aLStack272);
      lib::L2CValue::operator_(aLStack256,aLStack112);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack272);
      fVar11 = (float)app::lua_bind::PostureModule__pos_y_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack288,fVar11);
      lib::L2CValue::operator_(aLStack144,aLStack288);
      lib::L2CValue::operator_(aLStack256,aLStack112);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack288);
      pLVar9 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,5);
      pBVar10 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar9);
      fVar11 = (float)app::SlopeModuleSimple::gravity_angle(pBVar10);
      lib::L2CValue::L2CValue(aLStack288,fVar11);
      lib::L2CValue::L2CValue(aLStack256,0.0);
      uVar6 = lib::L2CValue::operator__(aLStack288,aLStack256);
      lib::L2CValue::_L2CValue(aLStack256);
      if ((uVar6 & 1) == 0) {
        fVar11 = (float)lib::L2CValue::as_number(aLStack192);
        fVar12 = (float)lib::L2CValue::as_number(aLStack272);
        fVar13 = (float)lib::L2CValue::as_number(aLStack288);
        uVar14 = app::sv_math::vec2_rot(fVar11,fVar12,fVar13);
        lib::L2CValue::L2CValue(aLStack256,(float)uVar14);
        lib::L2CValue::L2CValue(aLStack240,(float)((ulong)uVar14 >> 0x20));
        lib::L2CValue::operator_(aLStack192,aLStack256);
        lib::L2CValue::operator_(aLStack272,aLStack240);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack256);
      }
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CValue::L2CValue(aLStack304,0.0);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack304);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_KINETIC_ENERGY_ID_STOP);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,FIGHTER_KINETIC_ENERGY_ID_GRAVITY);
      iVar3 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::KineticModule__enable_energy_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue(aLStack256,_GROUND_CORRECT_KIND_NONE);
      GVar5 = lib::L2CValue::as_integer(aLStack256);
      app::lua_bind::GroundModule__correct_impl(this->moduleAccessor,GVar5);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    pLVar9 = aLStack112;
  }
  else {
    lib::L2CValue::L2CValue(aLStack256,_FIGHTER_PICKEL_STATUS_KIND_SPECIAL_S_DRIVE);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0x90);
LAB_710004a7a8:
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar9 = aLStack256;
  }
  lib::L2CValue::_L2CValue(pLVar9);
LAB_710004a7b8:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

