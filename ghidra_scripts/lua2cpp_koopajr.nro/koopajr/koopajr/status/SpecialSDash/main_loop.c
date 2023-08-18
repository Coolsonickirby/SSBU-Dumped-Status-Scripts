
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKoopajr::status::SpecialSDash_main_loop(L2CFighterKoopajr *this,L2CValue *return_value)

{
  L2CValue *pLVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  GroundCorrectKind GVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  L2CValue *pLVar11;
  Hash40 HVar12;
  BattleObjectModuleAccessor **ppBVar13;
  float fVar14;
  float fVar15;
  L2CValue aLStack464 [16];
  L2CValue aLStack448 [16];
  L2CValue aLStack432 [16];
  L2CValue aLStack416 [16];
  L2CValue aLStack400 [16];
  L2CValue aLStack384 [16];
  L2CValue aLStack368 [16];
  L2CValue aLStack352 [16];
  L2CValue aLStack336 [16];
  L2CValue aLStack320 [16];
  L2CValue aLStack304 [16];
  L2CValue aLStack288 [16];
  L2CValue aLStack272 [16];
  L2CValue aLStack256 [16];
  L2CValue aLStack240 [16];
  undefined auStack224 [32];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  
  ppBVar13 = &this->moduleAccessor;
  bVar2 = app::lua_bind::StatusModule__is_changing_impl(*ppBVar13);
  lib::L2CValue::L2CValue(aLStack240,(bool)(bVar2 & 1));
  lib::L2CValue::L2CValue(aLStack112,0x28fb828042);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack256);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue(aLStack112,false);
  uVar9 = lib::L2CValue::operator__(aLStack240,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar9 & 1) == 0) goto LAB_710001466c;
  FUN_7100012330(aLStack128,*ppBVar13);
  uVar5 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::GroundModule__is_wall_touch_line_impl(*ppBVar13,uVar5);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack272,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_S_HIT_WALL);
    lib::L2CValue::L2CValue(aLStack288,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
    lib::L2CValue::_L2CValue(aLStack288);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100014780;
  }
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_INT_DASH_FRAME);
  iVar6 = lib::L2CValue::as_integer(aLStack144);
  iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar6);
  lib::L2CValue::L2CValue(aLStack128,iVar6);
  lib::L2CValue::L2CValue(aLStack112,0);
  uVar9 = lib::L2CValue::operator_(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack304,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_S_SPIN_TURN);
    lib::L2CValue::L2CValue(aLStack320,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
    lib::L2CValue::_L2CValue(aLStack320);
    lib::L2CValue::_L2CValue(aLStack304);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100014780;
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_CLIFF_JUMP);
  iVar6 = lib::L2CValue::as_integer(aLStack128);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar6);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  if ((bVar3 & 1U) == 0) {
    pLVar1 = &this->globalTable;
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar9 = lib::L2CValue::operator__(pLVar11,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar9 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack336,false);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      pLVar11 = aLStack144;
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar11);
      fVar14 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack112,fVar14);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar11);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack144);
      fVar14 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar13);
      lib::L2CValue::L2CValue(aLStack112,fVar14);
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLOAT_SLOPE_ANGLE);
      iVar6 = lib::L2CValue::as_integer(aLStack176);
      fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar6);
      lib::L2CValue::L2CValue(aLStack160,fVar14);
      lib::L2CValue::operator_(aLStack112,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack112);
      fVar14 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar13);
      lib::L2CValue::L2CValue(aLStack112,fVar14);
      lib::L2CValue::L2CValue(aLStack192,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLOAT_SLOPE_ANGLE_PREV);
      iVar6 = lib::L2CValue::as_integer(aLStack192);
      fVar14 = (float)app::lua_bind::WorkModule__get_float_impl(*ppBVar13,iVar6);
      lib::L2CValue::L2CValue(aLStack176,fVar14);
      lib::L2CValue::operator_(aLStack112,aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack192,0x16c1613258);
      uVar9 = lib::L2CValue::as_integer(aLStack112);
      uVar10 = lib::L2CValue::as_integer(aLStack192);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar9,uVar10);
      lib::L2CValue::L2CValue(aLStack176,fVar14);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xfea97fe73);
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),0x169952c610);
      uVar9 = lib::L2CValue::as_integer(aLStack112);
      uVar10 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar9,uVar10);
      lib::L2CValue::L2CValue(aLStack192,fVar14);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),3.0);
      uVar9 = lib::L2CValue::operator__(aLStack192,aLStack128);
      if ((uVar9 & 1) == 0) {
LAB_7100014c20:
        lib::L2CValue::L2CValue(aLStack336,false);
      }
      else {
        pLVar11 = aLStack160;
        lib::L2CValue::operator_(aLStack144,pLVar11);
        lib::L2CAgent::math_abs((L2CAgent *)auStack224,pLVar11);
        uVar9 = lib::L2CValue::operator__(aLStack176,aLStack112);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue((L2CValue *)auStack224);
        if ((uVar9 & 1) == 0) goto LAB_7100014c20;
        lib::L2CValue::L2CValue(aLStack112,0.0);
        pLVar11 = aLStack112;
        uVar9 = lib::L2CValue::operator_(aLStack160,pLVar11);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((uVar9 & 1) == 0) {
LAB_71000158d4:
          uVar9 = lib::L2CValue::operator_(aLStack160,aLStack144);
          if ((uVar9 & 1) == 0) {
            lib::L2CValue::L2CValue(aLStack336,true);
          }
          else {
            lib::L2CValue::L2CValue(aLStack336,false);
          }
        }
        else {
          lib::L2CAgent::math_abs((L2CAgent *)aLStack144,pLVar11);
          uVar9 = lib::L2CValue::operator_(aLStack112,(L2CValue *)(auStack224 + 0x10));
          lib::L2CValue::_L2CValue(aLStack112);
          if ((uVar9 & 1) == 0) goto LAB_71000158d4;
          lib::L2CValue::L2CValue(aLStack336,false);
        }
      }
      lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
    }
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack336);
    lib::L2CValue::_L2CValue(aLStack336);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack352,SITUATION_KIND_AIR);
      lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0xa0);
      lib::L2CValue::_L2CValue(aLStack352);
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar7 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar7);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack128,FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      pLVar11 = aLStack128;
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,pLVar11);
      fVar14 = (float)app::sv_kinetic_energy::get_speed_x(this->luaStateAgent);
      lib::L2CValue::L2CValue(aLStack112,fVar14);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CAgent::math_abs((L2CAgent *)aLStack112,pLVar11);
      lib::L2CValue::L2CValue(aLStack176,0xfea97fe73);
      lib::L2CValue::L2CValue(aLStack192,0x161109bc94);
      uVar9 = lib::L2CValue::as_integer(aLStack176);
      uVar10 = lib::L2CValue::as_integer(aLStack192);
      fVar14 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar13,uVar9,uVar10);
      lib::L2CValue::L2CValue(aLStack160,fVar14);
      lib::L2CValue::operator_(aLStack144,aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::L2CValue(aLStack144,FIGHTER_KINETIC_ENERGY_ID_STOP);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack144);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack128);
      app::sv_kinetic_energy::set_speed(this->luaStateAgent);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack128);
      goto LAB_7100014dd4;
    }
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x20);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
    lib::L2CValue::operator_(pLVar11,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar3 & 1U) == 0) {
      bVar3 = false;
LAB_71000156dc:
      pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x20);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
      lib::L2CValue::operator_(pLVar11,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      bVar4 = lib::L2CValue::operator_cast_to_bool(aLStack176);
      lib::L2CValue::_L2CValue(aLStack176);
      if (bVar3) {
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
      }
      lib::L2CValue::_L2CValue(aLStack128);
      if ((bVar4 & 1U) != 0) goto LAB_7100015744;
    }
    else {
      lib::L2CValue::L2CValue(aLStack160,_CONTROL_PAD_BUTTON_FLICK_JUMP);
      iVar6 = lib::L2CValue::as_integer(aLStack160);
      bVar2 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar13,iVar6);
      lib::L2CValue::L2CValue(aLStack144,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack144);
      if ((bVar3 & 1U) == 0) {
        bVar3 = true;
        goto LAB_71000156dc;
      }
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack128);
LAB_7100015744:
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_INT_JUMP_FRAME);
      iVar6 = lib::L2CValue::as_integer(aLStack176);
      iVar6 = app::lua_bind::WorkModule__get_int_impl(*ppBVar13,iVar6);
      lib::L2CValue::L2CValue(aLStack128,iVar6);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar9 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack368,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_S_JUMP);
        lib::L2CValue::L2CValue(aLStack384,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_7100014780;
      }
    }
    lib::L2CValue::L2CValue(aLStack176,_CONTROL_PAD_BUTTON_ATTACK);
    iVar6 = lib::L2CValue::as_integer(aLStack176);
    bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar13,iVar6);
    lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack128);
    if ((bVar3 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)(auStack224 + 0x10),CONTROL_PAD_BUTTON_SPECIAL);
      iVar6 = lib::L2CValue::as_integer((L2CValue *)(auStack224 + 0x10));
      bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar13,iVar6);
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack192);
      if ((bVar3 & 1U) != 0) {
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
        goto LAB_7100015878;
      }
      iVar6 = app::lua_bind::ControlModule__reverse_x_frame_impl(*ppBVar13);
      lib::L2CValue::L2CValue((L2CValue *)auStack224,iVar6);
      lib::L2CValue::L2CValue(aLStack112,0);
      uVar9 = lib::L2CValue::operator__((L2CValue *)auStack224,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((uVar9 & 1) == 0) {
        uVar9 = 0;
      }
      else {
        pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x1a);
        fVar14 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar13);
        lib::L2CValue::L2CValue(aLStack400,fVar14);
        lib::L2CValue::operator_(pLVar11,aLStack400);
        lib::L2CValue::L2CValue(aLStack112,-0.1);
        uVar9 = lib::L2CValue::operator_(aLStack336,aLStack112);
        uVar9 = uVar9 & 0xffffffff;
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack336);
        lib::L2CValue::_L2CValue(aLStack400);
      }
      lib::L2CValue::_L2CValue((L2CValue *)auStack224);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue((L2CValue *)(auStack224 + 0x10));
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar9 & 1) == 0) goto LAB_7100014ddc;
    }
    else {
LAB_7100015878:
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack176);
    }
    lib::L2CValue::L2CValue(aLStack416,_FIGHTER_KOOPAJR_STATUS_KIND_SPECIAL_S_SPIN_TURN);
    lib::L2CValue::L2CValue(aLStack432,true);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x60,(L2CValue)0x50);
    lib::L2CValue::_L2CValue(aLStack432);
    lib::L2CValue::_L2CValue(aLStack416);
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_7100014780;
  }
  lib::L2CValue::L2CValue(aLStack144,_KINETIC_ENERGY_RESERVE_ATTRIBUTE_MAIN);
  iVar6 = lib::L2CValue::as_integer(aLStack144);
  fVar14 = (float)app::lua_bind::KineticModule__get_sum_speed_y_impl(*ppBVar13,iVar6);
  lib::L2CValue::L2CValue(aLStack128,fVar14);
  lib::L2CValue::L2CValue(aLStack112,0.0);
  uVar9 = lib::L2CValue::operator__(aLStack128,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack128);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_CLIFF_JUMP);
    iVar6 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar6);
LAB_7100014dd4:
    lib::L2CValue::_L2CValue(aLStack112);
  }
LAB_7100014ddc:
  pLVar1 = &this->globalTable;
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar9 = lib::L2CValue::operator__(pLVar11,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar9 & 1) == 0) {
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
    uVar9 = lib::L2CValue::operator__(pLVar11,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar9 & 1) == 0) {
      bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar13);
      lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      if ((bVar3 & 1U) == 0) goto LAB_710001466c;
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPAJR_GENERATE_ARTICLE_KART);
      lib::L2CValue::L2CValue(aLStack128,false);
      lib::L2CValue::L2CValue(aLStack176,_WEAPON_KOOPAJR_KART_INSTANCE_WORK_ID_FLAG_NO_FLOOR);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = lib::L2CValue::as_bool(aLStack128);
      iVar8 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::ArticleModule__set_flag_impl(*ppBVar13,iVar6,(bool)(bVar2 & 1),iVar8);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xd2b3a620b);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::L2CValue(aLStack192,false);
      HVar12 = lib::L2CValue::as_hash(aLStack112);
      fVar14 = (float)lib::L2CValue::as_number(aLStack128);
      fVar15 = (float)lib::L2CValue::as_number(aLStack176);
      bVar2 = lib::L2CValue::as_bool(aLStack192);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar13,HVar12,fVar14,fVar15,(bool)(bVar2 & 1),0.0,false,false);
    }
    else {
      bVar2 = app::lua_bind::GroundModule__is_floor_vanishing_impl(*ppBVar13);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar9 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      if ((uVar9 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_S_CLIFF_JUMP);
        iVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar13,iVar6);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
        GVar7 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar7);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x145edd705b);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack176,1.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar12 = lib::L2CValue::as_hash(aLStack112);
        fVar14 = (float)lib::L2CValue::as_number(aLStack128);
        fVar15 = (float)lib::L2CValue::as_number(aLStack176);
        bVar2 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar13,HVar12,fVar14,fVar15,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_CLIFF_JUMP);
        iVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar6);
        goto LAB_71000156cc;
      }
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_AIR_S_DASH);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar13,iVar6);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
      GVar7 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar7);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPAJR_GENERATE_ARTICLE_KART);
      lib::L2CValue::L2CValue(aLStack128,true);
      lib::L2CValue::L2CValue(aLStack176,_WEAPON_KOOPAJR_KART_INSTANCE_WORK_ID_FLAG_NO_FLOOR);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = lib::L2CValue::as_bool(aLStack128);
      iVar8 = lib::L2CValue::as_integer(aLStack176);
      app::lua_bind::ArticleModule__set_flag_impl(*ppBVar13,iVar6,(bool)(bVar2 & 1),iVar8);
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,0xd2b3a620b);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::L2CValue(aLStack192,false);
      HVar12 = lib::L2CValue::as_hash(aLStack112);
      fVar14 = (float)lib::L2CValue::as_number(aLStack128);
      fVar15 = (float)lib::L2CValue::as_number(aLStack176);
      bVar2 = lib::L2CValue::as_bool(aLStack192);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar13,HVar12,fVar14,fVar15,(bool)(bVar2 & 1),0.0,false,false);
    }
LAB_7100015560:
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack128);
LAB_71000156cc:
    lib::L2CValue::_L2CValue(aLStack112);
  }
  else {
    pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)pLVar1,0x17);
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    uVar9 = lib::L2CValue::operator__(pLVar11,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar9 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack176,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_HOP);
      iVar6 = lib::L2CValue::as_integer(aLStack176);
      bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar13,iVar6);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
      lib::L2CValue::L2CValue(aLStack112,false);
      uVar9 = lib::L2CValue::operator__(aLStack128,aLStack112);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack176);
      if ((uVar9 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_S_DASH);
        iVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar13,iVar6);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_GROUND);
        GVar7 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar7);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0x11bf9ca033);
        lib::L2CValue::L2CValue(aLStack128,0.0);
        lib::L2CValue::L2CValue(aLStack176,1.0);
        lib::L2CValue::L2CValue(aLStack192,false);
        HVar12 = lib::L2CValue::as_hash(aLStack112);
        fVar14 = (float)lib::L2CValue::as_number(aLStack128);
        fVar15 = (float)lib::L2CValue::as_number(aLStack176);
        bVar2 = lib::L2CValue::as_bool(aLStack192);
        app::lua_bind::MotionModule__change_motion_impl
                  (*ppBVar13,HVar12,fVar14,fVar15,(bool)(bVar2 & 1),0.0,false,false);
        lib::L2CValue::_L2CValue(aLStack192);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_HOP);
        iVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar6);
      }
      else {
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KINETIC_TYPE_KOOPAJR_SPECIAL_S_HOP);
        iVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::KineticModule__change_kinetic_impl(*ppBVar13,iVar6);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack448,SITUATION_KIND_AIR);
        lua2cpp::L2CFighterBase::set_situation(this,(L2CValue)0x40);
        lib::L2CValue::_L2CValue(aLStack448);
        lib::L2CValue::L2CValue(aLStack112,GROUND_CORRECT_KIND_AIR);
        GVar7 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::GroundModule__correct_impl(*ppBVar13,GVar7);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_HOP);
        iVar6 = lib::L2CValue::as_integer(aLStack112);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar13,iVar6);
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::L2CValue(aLStack112,0xeb3c53dfc);
        lib::L2CValue::L2CValue(aLStack128,0);
        lib::L2CValue::L2CValue(aLStack176,false);
        HVar12 = lib::L2CValue::as_hash(aLStack112);
        iVar6 = lib::L2CValue::as_integer(aLStack128);
        bVar2 = lib::L2CValue::as_bool(aLStack176);
        app::lua_bind::ControlModule__set_rumble_impl
                  (*ppBVar13,HVar12,iVar6,(bool)(bVar2 & 1),0x50000000);
        lib::L2CValue::_L2CValue(aLStack176);
        lib::L2CValue::_L2CValue(aLStack128);
      }
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_KOOPAJR_STATUS_SPECIAL_S_FLAG_CLIFF_JUMP);
      iVar6 = lib::L2CValue::as_integer(aLStack112);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar13,iVar6);
      goto LAB_71000156cc;
    }
    bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar13);
    lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
    bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((bVar3 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack112,0x976c3b29b);
      lib::L2CValue::L2CValue(aLStack128,0.0);
      lib::L2CValue::L2CValue(aLStack176,1.0);
      lib::L2CValue::L2CValue(aLStack192,false);
      HVar12 = lib::L2CValue::as_hash(aLStack112);
      fVar14 = (float)lib::L2CValue::as_number(aLStack128);
      fVar15 = (float)lib::L2CValue::as_number(aLStack176);
      bVar2 = lib::L2CValue::as_bool(aLStack192);
      app::lua_bind::MotionModule__change_motion_impl
                (*ppBVar13,HVar12,fVar14,fVar15,(bool)(bVar2 & 1),0.0,false,false);
      goto LAB_7100015560;
    }
  }
LAB_710001466c:
  pLVar11 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
  lib::L2CValue::L2CValue(aLStack112,_SITUATION_KIND_GROUND);
  uVar9 = lib::L2CValue::operator__(pLVar11,aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((uVar9 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,0x26ae3ad4c3);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack464);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  lib::L2CValue::L2CValue(aLStack128,true);
  FUN_7100013910(aLStack112,this);
  bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar3 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,false);
    lib::L2CValue::operator_(aLStack128,aLStack112);
    lib::L2CValue::_L2CValue(aLStack112);
  }
  bVar2 = lib::L2CValue::as_bool(aLStack128);
  app::lua_bind::AttackModule__sleep_impl(*ppBVar13,(bool)(bVar2 & 1));
  FUN_7100013d90(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack128);
LAB_7100014780:
  lib::L2CValue::_L2CValue(aLStack240);
  return;
}

