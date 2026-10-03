
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_710000d800(L2CFighterSzerosuit *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  L2CValue *pLVar7;
  ulong uVar8;
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
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack112);
  if ((uVar6 & 1) != 0) goto LAB_710000dfa4;
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator==(aLStack112,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack112);
  }
  else {
    lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator==(aLStack128,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack112);
    if ((uVar6 & 1) == 0) goto LAB_710000dfa4;
  }
  this_00 = &this->globalTable;
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1a);
  lib::L2CValue::L2CValue(aLStack96,-0.1);
  uVar6 = lib::L2CValue::operator<(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1a);
    lib::L2CValue::L2CValue(aLStack96,0.1);
    uVar6 = lib::L2CValue::operator<(aLStack96,pLVar7);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) != 0) goto LAB_710000d968;
  }
  else {
LAB_710000d968:
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KINETIC_ENERGY_ID_STOP);
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1a);
    lib::L2CValue::L2CValue(aLStack144,0x1018dfb2f4);
    lib::L2CValue::L2CValue(aLStack160,0x13051d5a3d);
    uVar6 = lib::L2CValue::as_integer(aLStack144);
    uVar8 = lib::L2CValue::as_integer(aLStack160);
    fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack128,fVar10);
    lib::L2CValue::operator*(pLVar7,aLStack128);
    lib::L2CValue::L2CValue(aLStack176,0.0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
    app::sv_kinetic_energy::set_speed(this->luaStateAgent);
    lib::L2CValue::~L2CValue(aLStack176);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
  }
  lib::L2CValue::L2CValue(aLStack128,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_FLAG_WALL_JUMP_ENABLE);
  iVar4 = lib::L2CValue::as_integer(aLStack128);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack112,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack112);
  if ((bVar2 & 1U) == 0) {
LAB_710000db4c:
    lib::L2CValue::~L2CValue(aLStack112);
    pLVar7 = aLStack128;
LAB_710000db58:
    lib::L2CValue::~L2CValue(pLVar7);
  }
  else {
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_WORK_INT_WALL_JUMP_NUM);
    iVar4 = lib::L2CValue::as_integer(aLStack160);
    iVar4 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack144,iVar4);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator<(aLStack96,aLStack144);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      goto LAB_710000db4c;
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x1b);
    lib::L2CValue::L2CValue(aLStack96,0.5);
    uVar6 = lib::L2CValue::operator<=(aLStack96,pLVar7);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue(aLStack192,_CONTROL_PAD_BUTTON_JUMP);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack176,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack176);
      if ((bVar2 & 1U) != 0) {
        bVar2 = true;
        goto LAB_710000e008;
      }
      bVar1 = 0;
LAB_710000e138:
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
    }
    else {
      bVar2 = false;
LAB_710000e008:
      lib::L2CValue::L2CValue(aLStack224,_GROUND_TOUCH_FLAG_UP);
      uVar5 = lib::L2CValue::as_integer(aLStack224);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar5);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
      lib::L2CValue::operator!(aLStack208);
      bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      if ((bVar3 & 1U) == 0) {
        bVar1 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack272,GROUND_TOUCH_FLAG_UP_LEFT);
        uVar5 = lib::L2CValue::as_integer(aLStack272);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar5);
        lib::L2CValue::L2CValue(aLStack256,(bool)(bVar1 & 1));
        lib::L2CValue::operator!(aLStack256);
        bVar3 = lib::L2CValue::operator.cast.to.bool(aLStack240);
        if ((bVar3 & 1U) == 0) {
          bVar1 = 0;
        }
        else {
          lib::L2CValue::L2CValue(aLStack320,GROUND_TOUCH_FLAG_UP_RIGHT);
          uVar5 = lib::L2CValue::as_integer(aLStack320);
          bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar5);
          lib::L2CValue::L2CValue(aLStack304,(bool)(bVar1 & 1));
          lib::L2CValue::operator!(aLStack304);
          bVar1 = lib::L2CValue::operator.cast.to.bool(aLStack288);
          lib::L2CValue::~L2CValue(aLStack288);
          lib::L2CValue::~L2CValue(aLStack304);
          lib::L2CValue::~L2CValue(aLStack320);
        }
        lib::L2CValue::~L2CValue(aLStack240);
        lib::L2CValue::~L2CValue(aLStack256);
        lib::L2CValue::~L2CValue(aLStack272);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack224);
      if (bVar2) goto LAB_710000e138;
    }
    lib::L2CValue::~L2CValue(aLStack144);
    lib::L2CValue::~L2CValue(aLStack160);
    lib::L2CValue::~L2CValue(aLStack112);
    lib::L2CValue::~L2CValue(aLStack128);
    if ((bVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack112,_GROUND_TOUCH_FLAG_LEFT);
      uVar5 = lib::L2CValue::as_integer(aLStack112);
      bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar5);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack144,GROUND_TOUCH_FLAG_RIGHT);
        uVar5 = lib::L2CValue::as_integer(aLStack144);
        bVar1 = app::lua_bind::GroundModule__is_touch_impl(*ppBVar9,uVar5);
        lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
        lib::L2CValue::~L2CValue(aLStack128);
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
        if ((bVar2 & 1U) == 0) goto LAB_710000db5c;
      }
      else {
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack112);
      }
      app::lua_bind::PostureModule__reverse_lr_impl(*ppBVar9);
      app::lua_bind::PostureModule__update_rot_y_lr_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_STATUS_KIND_SPECIAL_LW_START);
      lib::L2CValue::L2CValue(aLStack128,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack112);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_WORK_INT_WALL_JUMP_NUM)
      ;
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__dec_int_impl(*ppBVar9,iVar4);
      pLVar7 = aLStack96;
      goto LAB_710000db58;
    }
  }
LAB_710000db5c:
  lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_FLAG_START_WAIT_INPUT);
  iVar4 = lib::L2CValue::as_integer(aLStack144);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::~L2CValue(aLStack144);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue(aLStack144,CONTROL_PAD_BUTTON_SPECIAL);
    iVar4 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_CONTROL_PAD_BUTTON_ATTACK);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::ControlModule__check_button_trigger_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_FLAG_KICK);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
        goto LAB_710000dc90;
      }
    }
    else {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_FLAG_KICK);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
LAB_710000dc90:
      lib::L2CValue::~L2CValue(aLStack96);
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP_BUTTON);
    lib::L2CValue::operator&(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_FLAG_JUMP);
      iVar4 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::~L2CValue(aLStack96);
    }
    pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_JUMP);
    lib::L2CValue::operator&(pLVar7,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack144);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((bVar2 & 1U) != 0) {
      bVar1 = app::lua_bind::ControlModule__is_enable_flick_jump_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_FLAG_JUMP);
        iVar4 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__on_flag_impl(*ppBVar9,iVar4);
        lib::L2CValue::~L2CValue(aLStack96);
      }
    }
  }
  pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,_SITUATION_KIND_GROUND);
  uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) != 0) {
      pLVar7 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)this_00,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar6 = lib::L2CValue::operator==(pLVar7,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        goto LAB_710000de18;
      }
    }
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_FLAG_KICK_ENABLE);
    iVar4 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_SZEROSUIT_STATUS_SPECIAL_LW_FLAG_KICK);
      iVar4 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar4);
      lib::L2CValue::L2CValue(aLStack128,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack128);
      lib::L2CValue::~L2CValue(aLStack128);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack112);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SZEROSUIT_STATUS_KIND_SPECIAL_LW_KICK);
        lib::L2CValue::L2CValue(aLStack112,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        goto LAB_710000de18;
      }
    }
    FUN_710000bbc0(aLStack96,this);
  }
  else {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_SZEROSUIT_STATUS_KIND_SPECIAL_LW_LANDING);
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
LAB_710000de18:
    lib::L2CValue::~L2CValue(aLStack112);
  }
  lib::L2CValue::~L2CValue(aLStack96);
LAB_710000dfa4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

