
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDemon::status::DashBack_main_loop(L2CFighterDemon *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  L2CValue *pLVar5;
  ulong uVar6;
  BattleObjectModuleAccessor *pBVar7;
  ulong uVar8;
  BattleObjectModuleAccessor **ppBVar9;
  float fVar10;
  L2CValue aLStack768 [16];
  L2CValue aLStack752 [16];
  L2CValue aLStack736 [16];
  L2CValue aLStack720 [16];
  L2CValue aLStack704 [16];
  L2CValue aLStack688 [16];
  L2CValue aLStack672 [16];
  L2CValue aLStack656 [16];
  L2CValue aLStack640 [16];
  L2CValue aLStack624 [16];
  L2CValue aLStack608 [16];
  L2CValue aLStack592 [16];
  L2CValue aLStack576 [16];
  L2CValue aLStack560 [16];
  L2CValue aLStack544 [16];
  L2CValue aLStack528 [16];
  L2CValue aLStack512 [16];
  L2CValue aLStack496 [16];
  L2CValue aLStack480 [16];
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
  L2CValue aLStack224 [16];
  L2CValue aLStack208 [16];
  L2CValue aLStack192 [16];
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  this_00 = &this->globalTable;
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x16);
  lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
  uVar6 = lib::L2CValue::operator__(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_STATUS_KIND_FALL);
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack112);
LAB_7100042c20:
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    return;
  }
  ppBVar9 = &this->moduleAccessor;
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar9);
  lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack144,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack144);
  }
  else {
    lib::L2CValue::L2CValue(aLStack176,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x50);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack176);
    lib::L2CValue::_L2CValue(aLStack144);
    if ((uVar6 & 1) == 0) goto LAB_7100042c20;
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_jump_mini_attack(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) goto LAB_7100042c20;
  lib::L2CValue::L2CValue(aLStack144,true);
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,_MA_MSC_ITEM_CHECK_HAVE_ITEM_TRAIT);
    lib::L2CValue::L2CValue(aLStack240,ITEM_TRAIT_FLAG_THROW);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    app::sv_module_access::item(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      bVar1 = 0;
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
      lib::L2CValue::operator_(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar6 = lib::L2CValue::operator__(aLStack256,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        bVar1 = lib::L2CValue::operator_cast_to_bool(aLStack144);
      }
      else {
        bVar1 = 0;
      }
      lib::L2CValue::_L2CValue(aLStack256);
    }
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar1 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack192,_MA_MSC_ITEM_CHECK_HAVE_ITEM_TRAIT);
      lib::L2CValue::L2CValue(aLStack208,ITEM_TRAIT_FLAG_THROW);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack192);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack208);
      app::sv_module_access::item(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack240,_MA_MSC_ITEM_CHECK_HAVE_ITEM_TRAIT);
        lib::L2CValue::L2CValue(aLStack256,_ITEM_TRAIT_FLAG_SHOOT);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
        app::sv_module_access::item(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::L2CValue(aLStack96,true);
        uVar6 = lib::L2CValue::operator__(aLStack224,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        if ((uVar6 & 1) == 0) {
          uVar6 = 0;
        }
        else {
          iVar3 = app::lua_bind::ItemModule__get_shoot_item_bullet_impl(*ppBVar9,0);
          lib::L2CValue::L2CValue(aLStack272,iVar3);
          lib::L2CValue::L2CValue(aLStack96,0);
          uVar6 = lib::L2CValue::operator__(aLStack272,aLStack96);
          uVar6 = uVar6 & 0xffffffff;
          lib::L2CValue::_L2CValue(aLStack96);
          lib::L2CValue::_L2CValue(aLStack272);
        }
        lib::L2CValue::_L2CValue(aLStack224);
        lib::L2CValue::_L2CValue(aLStack256);
        lib::L2CValue::_L2CValue(aLStack240);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
        if ((uVar6 & 1) == 0) goto LAB_7100042fb4;
      }
      else {
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack208);
        lib::L2CValue::_L2CValue(aLStack192);
      }
      lib::L2CValue::L2CValue(aLStack288,_FIGHTER_STATUS_KIND_ITEM_THROW);
      lib::L2CValue::L2CValue(aLStack304,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xe0,(L2CValue)0xd0);
      lib::L2CValue::_L2CValue(aLStack304);
      lib::L2CValue::_L2CValue(aLStack288);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710004351c;
    }
  }
LAB_7100042fb4:
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_THROW_FORCE);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
LAB_71000431b8:
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  else {
    bVar1 = app::lua_bind::ItemModule__is_have_item_impl(*ppBVar9,0);
    lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
LAB_71000431b0:
      lib::L2CValue::_L2CValue(aLStack208);
      goto LAB_71000431b8;
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_CATCH);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator__(aLStack224,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if (((uVar6 & 1) != 0) ||
       (bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack144), (bVar2 & 1U) == 0)) {
      lib::L2CValue::_L2CValue(aLStack224);
      goto LAB_71000431b0;
    }
    lib::L2CValue::L2CValue(aLStack256,_MA_MSC_ITEM_CHECK_HAVE_ITEM_TRAIT);
    lib::L2CValue::L2CValue(aLStack272,ITEM_TRAIT_FLAG_NO_THROW);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack256);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack272);
    app::sv_module_access::item(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack240,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack272);
    lib::L2CValue::_L2CValue(aLStack256);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack320,_FIGHTER_STATUS_KIND_ITEM_THROW);
      lib::L2CValue::L2CValue(aLStack336,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      lib::L2CValue::_L2CValue(aLStack336);
      lib::L2CValue::_L2CValue(aLStack320);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710004351c;
    }
  }
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
  iVar3 = lib::L2CValue::as_integer(aLStack160);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  else {
    lib::L2CValue::L2CValue(aLStack208,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN_DASH);
    iVar3 = lib::L2CValue::as_integer(aLStack208);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack192);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((bVar2 & 1U) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_ESCAPE_F);
      lib::L2CValue::operator_(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack352,_FIGHTER_STATUS_KIND_ESCAPE_F);
        lib::L2CValue::L2CValue(aLStack368,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x90);
        lib::L2CValue::_L2CValue(aLStack368);
        lib::L2CValue::_L2CValue(aLStack352);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710004351c;
      }
    }
  }
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ESCAPE);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar6 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack192,_CONTROL_PAD_BUTTON_GUARD);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::ControlModule__check_button_on_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    else {
      lib::L2CValue::L2CValue(aLStack224,_FIGHTER_STATUS_DASH_FLAG_NO_ESCAPE);
      iVar3 = lib::L2CValue::as_integer(aLStack224);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
      lib::L2CValue::L2CValue(aLStack208,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar6 = lib::L2CValue::operator__(aLStack208,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack384,FIGHTER_STATUS_KIND_ESCAPE_B);
        lib::L2CValue::L2CValue(aLStack400,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x80,(L2CValue)0x70);
        lib::L2CValue::_L2CValue(aLStack400);
        lib::L2CValue::_L2CValue(aLStack384);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_710004351c;
      }
    }
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_special_command(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    goto LAB_710004351c;
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_special(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,true);
    goto LAB_710004351c;
  }
  lua2cpp::L2CFighterCommon::sub_transition_specialflag_hoist(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,true);
    goto LAB_710004351c;
  }
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SWING_4);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,_MA_MSC_ITEM_CHECK_HAVE_ITEM_TRAIT);
    lib::L2CValue::L2CValue(aLStack240,ITEM_TRAIT_FLAG_SWING);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    app::sv_module_access::item(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_DASH_ATTACK_S4);
      lib::L2CValue::operator_(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack256);
      if ((bVar2 & 1U) == 0) {
        uVar6 = 0;
      }
      else {
        lib::L2CValue::L2CValue(aLStack416,_FIGHTER_STATUS_DASH_FLAG_NO_S4);
        iVar3 = lib::L2CValue::as_integer(aLStack416);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar6 = lib::L2CValue::operator__(aLStack272,aLStack96);
        uVar6 = uVar6 & 0xffffffff;
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack416);
      }
      lib::L2CValue::_L2CValue(aLStack256);
    }
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack432,_FIGHTER_STATUS_KIND_ITEM_SWING_S4_START);
      lib::L2CValue::L2CValue(aLStack448,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
      lib::L2CValue::_L2CValue(aLStack448);
      lib::L2CValue::_L2CValue(aLStack432);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710004351c;
    }
  }
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ITEM_SHOOT_S4);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  else {
    lib::L2CValue::L2CValue(aLStack224,_MA_MSC_ITEM_CHECK_HAVE_ITEM_TRAIT);
    lib::L2CValue::L2CValue(aLStack240,_ITEM_TRAIT_FLAG_SHOOT);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack224);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack240);
    app::sv_module_access::item(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack208,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1f);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_FLAG_ATTACK_TRIGGER);
      lib::L2CValue::operator_(pLVar5,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar6 = lib::L2CValue::operator__(aLStack256,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack416,_FIGHTER_STATUS_DASH_FLAG_NO_S4);
        iVar3 = lib::L2CValue::as_integer(aLStack416);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
        lib::L2CValue::L2CValue(aLStack272,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar4 = lib::L2CValue::operator__(aLStack272,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack272);
        lib::L2CValue::_L2CValue(aLStack416);
      }
      else {
        uVar4 = 0;
      }
      lib::L2CValue::_L2CValue(aLStack256);
    }
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar4 & 1) != 0) {
      iVar3 = app::lua_bind::ItemModule__get_shoot_item_bullet_impl(*ppBVar9,0);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      lib::L2CValue::L2CValue(aLStack96,0);
      uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack496,_FIGHTER_STATUS_KIND_ITEM_SHOOT_WAIT);
        lib::L2CValue::L2CValue(aLStack512,true);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack512);
        pLVar5 = aLStack496;
      }
      else {
        lib::L2CValue::L2CValue(aLStack464,_FIGHTER_STATUS_KIND_ITEM_THROW);
        lib::L2CValue::L2CValue(aLStack480,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
        lib::L2CValue::_L2CValue(aLStack480);
        pLVar5 = aLStack464;
      }
      lib::L2CValue::_L2CValue(pLVar5);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710004351c;
    }
  }
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_ATTACK_S4_START);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
LAB_7100043af4:
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x21);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT2_FLAG_DASH_ATTACK_S4);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::_L2CValue(aLStack208);
      goto LAB_7100043af4;
    }
    lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_DASH_FLAG_NO_S4);
    iVar3 = lib::L2CValue::as_integer(aLStack240);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack224,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar6 = lib::L2CValue::operator__(aLStack224,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack240);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack528,_FIGHTER_STATUS_KIND_ATTACK_S4_START);
      lib::L2CValue::L2CValue(aLStack544,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xf0,(L2CValue)0xe0);
      lib::L2CValue::_L2CValue(aLStack544);
      lib::L2CValue::_L2CValue(aLStack528);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710004351c;
    }
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_attack(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) != 0) {
    lib::L2CValue::L2CValue((L2CValue *)return_value,true);
    goto LAB_710004351c;
  }
  lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_DASH_WORK_INT_ENABLE_ATTACK_FRAME);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack160,iVar3);
  lib::L2CValue::L2CValue(aLStack96,0);
  uVar6 = lib::L2CValue::operator_(aLStack96,aLStack160);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::_L2CValue(aLStack192);
  if ((uVar6 & 1) != 0) {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
    if ((bVar2 & 1U) == 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,5);
      lib::L2CValue::L2CValue(aLStack208,false);
      pBVar7 = (BattleObjectModuleAccessor *)lib::L2CValue::as_pointer(pLVar5);
      bVar1 = lib::L2CValue::as_bool(aLStack208);
      bVar1 = app::FighterUtil::is_valid_auto_catch_item(pBVar7,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack192,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack96,true);
      uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack192);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar6 & 1) == 0) goto LAB_7100043f10;
    }
    else {
      lib::L2CValue::_L2CValue(aLStack160);
    }
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue
              (aLStack96,
               FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_HI4 | FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4 |
               _FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_LW4 | FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S3 |
               FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_HI3 | _FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_LW3);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,0);
    uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,MA_MSC_ITEM_IS_PICKABLE_ITEM_HEAVY);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
      app::sv_module_access::item(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((bVar2 & 1U) != 0) {
        bVar1 = app::lua_bind::ItemModule__is_have_item_impl(*ppBVar9,0);
        lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack560,_FIGHTER_STATUS_KIND_ITEM_HEAVY_PICKUP);
          lib::L2CValue::L2CValue(aLStack576,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xd0,(L2CValue)0xc0);
          lib::L2CValue::_L2CValue(aLStack576);
          lib::L2CValue::_L2CValue(aLStack560);
          lib::L2CValue::L2CValue((L2CValue *)return_value,true);
          goto LAB_710004351c;
        }
      }
      iVar3 = app::lua_bind::ItemModule__get_pickable_item_size_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack160,iVar3);
      lib::L2CValue::L2CValue(aLStack96,ITEM_SIZE_LIGHT);
      uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar6 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack160,_MA_MSC_CMD_ITEM_IS_GET_PICKABLE_ITEM);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack160);
        app::sv_module_access::item(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack592,FIGHTER_STATUS_KIND_ITEM_LIGHT_PICKUP);
          lib::L2CValue::L2CValue(aLStack608,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
          lib::L2CValue::_L2CValue(aLStack608);
          lib::L2CValue::_L2CValue(aLStack592);
          lib::L2CValue::L2CValue((L2CValue *)return_value,true);
          goto LAB_710004351c;
        }
      }
    }
  }
LAB_7100043f10:
  lib::L2CValue::L2CValue(aLStack192,FIGHTER_STATUS_TRANSITION_TERM_ID_CONT_TURN_DASH);
  iVar3 = lib::L2CValue::as_integer(aLStack192);
  bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar6 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
  }
  else {
    pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
    lib::L2CValue::L2CValue(aLStack96,FIGHTER_PAD_CMD_CAT1_FLAG_DASH);
    lib::L2CValue::operator_(pLVar5,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack208);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack192);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack624,FIGHTER_STATUS_KIND_DASH);
      lib::L2CValue::L2CValue(aLStack640,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x90,(L2CValue)0x80);
      lib::L2CValue::_L2CValue(aLStack640);
      lib::L2CValue::_L2CValue(aLStack624);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710004351c;
    }
  }
  pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PAD_CMD_CAT1_FLAG_TURN_DASH);
  lib::L2CValue::operator_(pLVar5,aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack160);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack160);
  }
  else {
    fVar10 = (float)app::lua_bind::MotionModule__frame_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack96,fVar10);
    lib::L2CValue::L2CValue(aLStack208,0x6e5ec7051);
    lib::L2CValue::L2CValue(aLStack224,0xd09fb6959);
    uVar6 = lib::L2CValue::as_integer(aLStack208);
    uVar8 = lib::L2CValue::as_integer(aLStack224);
    iVar3 = app::lua_bind::WorkModule__get_param_int_impl(*ppBVar9,uVar6,uVar8);
    lib::L2CValue::L2CValue(aLStack192,iVar3);
    uVar6 = lib::L2CValue::operator__(aLStack192,aLStack96);
    lib::L2CValue::_L2CValue(aLStack192);
    lib::L2CValue::_L2CValue(aLStack224);
    lib::L2CValue::_L2CValue(aLStack208);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar6 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack656,_FIGHTER_STATUS_KIND_TURN_DASH);
      lib::L2CValue::L2CValue(aLStack672,true);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x70,(L2CValue)0x60);
      lib::L2CValue::_L2CValue(aLStack672);
      lib::L2CValue::_L2CValue(aLStack656);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
      goto LAB_710004351c;
    }
  }
  lua2cpp::L2CFighterCommon::sub_transition_group_check_ground_jump(this);
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::L2CValue(aLStack192,_FIGHTER_STATUS_TRANSITION_TERM_ID_DASH_TO_RUN);
    iVar3 = lib::L2CValue::as_integer(aLStack192);
    bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar9,iVar3);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x1a);
      fVar10 = (float)app::lua_bind::PostureModule__lr_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack224,fVar10);
      lib::L2CValue::operator_(aLStack224);
      lib::L2CValue::operator_(pLVar5,aLStack208);
      lib::L2CValue::L2CValue(aLStack256,0x6e5ec7051);
      lib::L2CValue::L2CValue(aLStack272,0xb12f3fbba);
      uVar6 = lib::L2CValue::as_integer(aLStack256);
      uVar8 = lib::L2CValue::as_integer(aLStack272);
      fVar10 = (float)app::lua_bind::WorkModule__get_param_float_impl(*ppBVar9,uVar6,uVar8);
      lib::L2CValue::L2CValue(aLStack240,fVar10);
      uVar6 = lib::L2CValue::operator__(aLStack240,aLStack96);
      lib::L2CValue::_L2CValue(aLStack240);
      lib::L2CValue::_L2CValue(aLStack272);
      lib::L2CValue::_L2CValue(aLStack256);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack208);
      lib::L2CValue::_L2CValue(aLStack224);
      lib::L2CValue::_L2CValue(aLStack160);
      lib::L2CValue::_L2CValue(aLStack192);
      if ((uVar6 & 1) != 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0x20);
        lib::L2CValue::L2CValue
                  (aLStack96,
                   FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_HI4 | FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S4 |
                   _FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_LW4 | FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_S3 |
                   FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_HI3 | _FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_LW3 |
                   _FIGHTER_PAD_CMD_CAT1_FLAG_ATTACK_N | FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_N |
                   FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_S | _FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_HI |
                   _FIGHTER_PAD_CMD_CAT1_FLAG_SPECIAL_LW);
        lib::L2CValue::operator_(pLVar5,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,0);
        uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack160);
        if ((uVar6 & 1) != 0) {
          lib::L2CValue::L2CValue(aLStack688,_FIGHTER_RYU_STATUS_KIND_TURN_RUN_BACK);
          lib::L2CValue::L2CValue(aLStack704,true);
          lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x50,(L2CValue)0x40);
          lib::L2CValue::_L2CValue(aLStack704);
          lib::L2CValue::_L2CValue(aLStack688);
          lib::L2CValue::L2CValue((L2CValue *)return_value,1);
          goto LAB_710004351c;
        }
      }
    }
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar9);
    lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack96,true);
    uVar6 = lib::L2CValue::operator__(aLStack160,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack160);
    if ((uVar6 & 1) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      fVar10 = (float)app::lua_bind::GroundModule__get_down_friction_impl(*ppBVar9);
      lib::L2CValue::L2CValue(aLStack160,fVar10);
      lib::L2CValue::L2CValue(aLStack96,1.0);
      uVar6 = lib::L2CValue::operator_(aLStack160,aLStack96);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack160);
      if ((uVar6 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack752,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack768,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x10,(L2CValue)0x0);
        lib::L2CValue::_L2CValue(aLStack768);
        pLVar5 = aLStack752;
      }
      else {
        lib::L2CValue::L2CValue(aLStack720,_FIGHTER_STATUS_KIND_RUN_BRAKE);
        lib::L2CValue::L2CValue(aLStack736,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0x30,(L2CValue)0x20);
        lib::L2CValue::_L2CValue(aLStack736);
        pLVar5 = aLStack720;
      }
      lib::L2CValue::_L2CValue(pLVar5);
      lib::L2CValue::L2CValue((L2CValue *)return_value,1);
    }
  }
  else {
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_710004351c:
  lib::L2CValue::_L2CValue(aLStack144);
  return;
}

