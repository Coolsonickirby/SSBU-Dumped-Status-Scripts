
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMiifighter::status::SpecialLw2Start_main_loop
          (L2CFighterMiifighter *this,L2CValue *return_value)

{
  L2CValue *this_00;
  bool bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  L2CValue *pLVar6;
  ulong uVar7;
  ulong uVar8;
  L2CAgent *this_01;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
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
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lua2cpp::L2CFighterCommon::sub_transition_group_check_air_cliff(this);
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar1 & 1U) != 0) {
    iVar4 = 1;
    goto LAB_710001a13c;
  }
  this_00 = &this->globalTable;
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
  lib::L2CValue::L2CValue(aLStack96,-0.1);
  uVar7 = lib::L2CValue::operator_(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CValue::L2CValue(aLStack96,0.1);
    uVar7 = lib::L2CValue::operator_(aLStack96,pLVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) != 0) goto LAB_7100019aac;
  }
  else {
LAB_7100019aac:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
    lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack160,0x17b5c9c855);
    uVar7 = lib::L2CValue::as_integer(aLStack144);
    uVar8 = lib::L2CValue::as_integer(aLStack160);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl
                              (this->moduleAccessor,uVar7,uVar8);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::operator_(pLVar6,aLStack128);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue
            (aLStack128,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_FLAG_WALL_JUMP_ENABLE);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  ppBVar9 = &this->moduleAccessor;
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack112);
  if ((bVar1 & 1U) == 0) {
LAB_7100019c94:
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar6 = aLStack128;
LAB_7100019ca0:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack160,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_WORK_INT_WALL_JUMP_NUM);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack144,iVar4);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar7 = lib::L2CValue::operator_(aLStack96,aLStack144);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack160);
      goto LAB_7100019c94;
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1b);
    lib::L2CValue::L2CValue(aLStack96,0.5);
    uVar7 = lib::L2CValue::operator__(aLStack96,pLVar6);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar7 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,_CONTROL_PAD_BUTTON_JUMP);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      bVar2 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack176);
      if ((bVar1 & 1U) != 0) {
        bVar1 = true;
        goto LAB_710001a3a0;
      }
      bVar2 = 0;
LAB_710001a4e0:
      lib::L2CValue::_L2CValue(aLStack176);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    else {
      bVar1 = false;
LAB_710001a3a0:
      lib::L2CValue::L2CValue(aLStack224,_GROUND_TOUCH_FLAG_UP);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar5);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar2 & 1));
      lib::L2CValue::operator_(aLStack208);
      bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar3 & 1U) == 0) {
        bVar2 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack272,_GROUND_TOUCH_FLAG_UP_LEFT);
        uVar5 = lib::L2CValue::as_integer(aLStack272);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar5);
        lib::L2CValue::L2CValue(aLStack256,(bool)(bVar2 & 1));
        lib::L2CValue::operator_(aLStack256);
        bVar3 = lib::L2CValue::operator_cast_to_bool(aLStack240);
        if ((bVar3 & 1U) == 0) {
          bVar2 = 0;
        }
        else {
          lib::L2CValue::L2CValue(aLStack320,_GROUND_TOUCH_FLAG_UP_RIGHT);
          uVar5 = lib::L2CValue::as_integer(aLStack320);
          bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar5);
          lib::L2CValue::L2CValue(aLStack304,(bool)(bVar2 & 1));
          lib::L2CValue::operator_(aLStack304);
          bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack288);
          lib::L2CValue::_L2CValue(aLStack288);
          lib::L2CValue::_L2CValue(aLStack304);
          lib::L2CValue::_L2CValue(aLStack320);
        }
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack272);
      }
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      if (bVar1) goto LAB_710001a4e0;
    }
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack128);
    if ((bVar2 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_LEFT);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar1 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_RIGHT);
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        bVar2 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar5);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar2 & 1));
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack128);
        lib::L2CValue::_L2CValue(aLStack128);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
        if ((bVar1 & 1U) == 0) goto LAB_7100019ca4;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack112);
      }
      app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar9);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_LW2_START);
      lib::L2CValue::L2CValue(aLStack128,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::L2CValue
                (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_WORK_INT_WALL_JUMP_NUM);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__dec_int_impl(*ppBVar9,iVar4);
      pLVar6 = aLStack96;
      goto LAB_7100019ca0;
    }
  }
LAB_7100019ca4:
  lib::L2CValue::L2CValue
            (aLStack144,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_FLAG_START_WAIT_INPUT);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack144);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_CONTROL_PAD_BUTTON_ATTACK);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar2 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack144);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_FLAG_KICK);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
        goto LAB_7100019dd8;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_FLAG_KICK);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
LAB_7100019dd8:
      lib::L2CValue::_L2CValue(aLStack96);
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator_(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_FLAG_JUMP);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
    lib::L2CValue::operator_(pLVar6,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar1 & 1U) != 0) {
      bVar2 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
      bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((bVar1 & 1U) != 0) {
        lib::L2CValue::L2CValue
                  (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_FLAG_JUMP);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
  }
  lib::L2CValue::L2CValue
            (aLStack112,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_FLAG_KICK_ENABLE_LANDING);
  iVar4 = lib::L2CValue::as_integer(aLStack112);
  bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
  bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack112);
  if ((bVar1 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack112,SITUATION_KIND_AIR);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::set_situation_keep(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::L2CValue
              (aLStack96,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_FLAG_KICK_ENABLE_LANDING);
    iVar4 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::_L2CValue(aLStack96);
  }
  pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar7 & 1) == 0) {
    bVar2 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((bVar1 & 1U) != 0) {
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar7 = lib::L2CValue::operator__(pLVar6,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar7 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack144,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x70);
        goto LAB_710001a124;
      }
    }
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_FLAG_CHANGE_AUTO_ATTACK);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar1 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_LW2_AUTO_ATTACK);
      lib::L2CValue::L2CValue(aLStack144,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x70);
      goto LAB_710001a124;
    }
    lib::L2CValue::L2CValue
              (aLStack144,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_FLAG_KICK_ENABLE);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack96);
    if ((bVar1 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar6 = aLStack144;
      goto LAB_710001a130;
    }
    lib::L2CValue::L2CValue(aLStack208,_FIGHTER_MIIFIGHTER_STATUS_WORK_ID_REVERSAL_KICK_FLAG_KICK);
    iVar4 = lib::L2CValue::as_integer(aLStack208);
    bVar2 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar2 & 1));
    bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((bVar1 & 1U) != 0) {
      fVar10 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
      lib::L2CValue::L2CValue(aLStack144,fVar10);
      lua2cpp::L2CFighterBase::sign(this,(L2CValue)0x70);
      lib::L2CValue::_L2CValue(aLStack144);
      pLVar6 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      lib::L2CValue::L2CValue(aLStack208,pLVar6);
      lua2cpp::L2CFighterBase::sign(this,(L2CValue)0x30);
      lib::L2CValue::_L2CValue(aLStack208);
      pLVar6 = (L2CValue *)0x1a;
      this_01 = (L2CAgent *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      lib::L2CAgent::math_abs(this_01,pLVar6);
      lib::L2CValue::L2CValue(aLStack256,0x1018dfb2f4);
      lib::L2CValue::L2CValue(aLStack272,0x18935fa57d);
      uVar7 = lib::L2CValue::as_integer(aLStack256);
      uVar8 = lib::L2CValue::as_integer(aLStack272);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar7,uVar8);
      lib::L2CValue::L2CValue(aLStack240,fVar10);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      uVar7 = lib::L2CValue::operator__(aLStack240,aLStack224);
      if (((uVar7 & 1) != 0) &&
         (uVar7 = lib::L2CValue::operator__(aLStack96,aLStack160), (uVar7 & 1) != 0)) {
        app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar9);
        app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar9);
      }
      lib::L2CValue::L2CValue(aLStack256,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_LW2_KICK);
      lib::L2CValue::L2CValue(aLStack272,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x0,(L2CValue)0xf0);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack96);
      return;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_MIIFIGHTER_STATUS_KIND_SPECIAL_LW2_LANDING);
    lib::L2CValue::L2CValue(aLStack144,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x70);
LAB_710001a124:
    lib::L2CValue::_L2CValue(aLStack144);
    pLVar6 = aLStack96;
LAB_710001a130:
    lib::L2CValue::_L2CValue(pLVar6);
  }
  iVar4 = 0;
LAB_710001a13c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar4);
  return;
}

