
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_7100010180(L2CFighterRobot *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  Hash40 HVar9;
  L2CValue *pLVar10;
  BattleObjectModuleAccessor **ppBVar11;
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
  
  lib::L2CValue::L2CValue(aLStack112,0);
  lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_CATCH_WAIT_WORK_INT_MOTION_KIND);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  ppBVar11 = &this->moduleAccessor;
  lVar7 = app::lua_bind::WorkModule__get_int64_impl(*ppBVar11,iVar3);
  lib::L2CValue::L2CValue(aLStack128,lVar7);
  lib::L2CValue::~L2CValue(aLStack96);
  lib::L2CValue::L2CValue(aLStack96,0x83ec83f4b);
  uVar8 = lib::L2CValue::operator==(aLStack128,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar8 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ROBOT_STATUS_THROW_LW_FLAG_BURY_SET_CLATTER);
    iVar3 = lib::L2CValue::as_integer(aLStack144);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    lib::L2CValue::~L2CValue(aLStack144);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack144,_FIGHTER_ROBOT_STATUS_THROW_LW_FLAG_BURY);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) goto LAB_7100010668;
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ATTACK_ABSOLUTE_KIND_THROW);
      lib::L2CValue::L2CValue(aLStack160,FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack144,iVar3);
      lib::L2CValue::L2CValue(aLStack176,0x54f934137);
      lib::L2CValue::L2CValue(aLStack208,FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_GROUP);
      iVar3 = lib::L2CValue::as_integer(aLStack208);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack192,iVar3);
      lib::L2CValue::L2CValue(aLStack240,_FIGHTER_STATUS_THROW_WORK_INT_TARGET_HIT_NO);
      iVar3 = lib::L2CValue::as_integer(aLStack240);
      iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack224,iVar3);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      uVar6 = lib::L2CValue::as_integer(aLStack144);
      HVar9 = lib::L2CValue::as_hash(aLStack176);
      iVar4 = lib::L2CValue::as_integer(aLStack192);
      iVar5 = lib::L2CValue::as_integer(aLStack224);
      app::lua_bind::AttackModule__hit_absolute_joint_impl(*ppBVar11,iVar3,uVar6,HVar9,iVar4,iVar5);
      lib::L2CValue::~L2CValue(aLStack224);
      lib::L2CValue::~L2CValue(aLStack240);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack144);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_THROW_LW_FLAG_BURY);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_THROW_LW_FLAG_BURY_SET_CLATTER);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__on_flag_impl(*ppBVar11,iVar3);
    }
    else {
      lib::L2CValue::L2CValue(aLStack144,LINK_NO_CAPTURE);
      iVar3 = lib::L2CValue::as_integer(aLStack144);
      bVar1 = app::lua_bind::LinkModule__is_link_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack144);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
        lib::L2CValue::L2CValue(aLStack176,FIGHTER_STATUS_THROW_WORK_INT_TARGET_OBJECT);
        iVar3 = lib::L2CValue::as_integer(aLStack176);
        iVar3 = app::lua_bind::WorkModule__get_int_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue(aLStack160,iVar3);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        uVar6 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::LinkModule__link_impl(*ppBVar11,iVar3,uVar6);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        lib::L2CValue::~L2CValue(aLStack144);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack160,LINK_NO_CAPTURE);
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::LinkModule__is_link_impl(*ppBVar11,iVar3);
        lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack160);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
          lib::L2CValue::L2CValue(aLStack160,0x1cfd5d7b0d);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          HVar9 = lib::L2CValue::as_hash(aLStack160);
          app::lua_bind::LinkModule__send_event_parents_impl(*ppBVar11,iVar3,HVar9);
          lib::L2CValue::~L2CValue(aLStack160);
          lib::L2CValue::~L2CValue(aLStack96);
          lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
          iVar3 = lib::L2CValue::as_integer(aLStack96);
          app::lua_bind::LinkModule__unlink_impl(*ppBVar11,iVar3);
          goto LAB_7100010634;
        }
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,LINK_NO_CAPTURE);
        lib::L2CValue::L2CValue(aLStack144,0x1cfd5d7b0d);
        iVar3 = lib::L2CValue::as_integer(aLStack96);
        HVar9 = lib::L2CValue::as_hash(aLStack144);
        app::lua_bind::LinkModule__send_event_nodes_impl(*ppBVar11,iVar3,HVar9,0);
        lib::L2CValue::~L2CValue(aLStack144);
LAB_7100010634:
        lib::L2CValue::~L2CValue(aLStack96);
      }
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_ROBOT_STATUS_THROW_LW_FLAG_BURY_SET_CLATTER);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      app::lua_bind::WorkModule__off_flag_impl(*ppBVar11,iVar3);
    }
    lib::L2CValue::~L2CValue(aLStack96);
  }
LAB_7100010668:
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(*ppBVar11);
  lib::L2CValue::L2CValue(aLStack160,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack96,true);
  uVar8 = lib::L2CValue::operator==(aLStack160,aLStack96);
  lib::L2CValue::~L2CValue(aLStack96);
  if ((uVar8 & 1) == 0) {
    lib::L2CValue::~L2CValue(aLStack160);
LAB_7100010748:
    pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
    lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
    uVar8 = lib::L2CValue::operator==(pLVar10,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar8 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack160,_FIGHTER_STATUS_TRANSITION_TERM_ID_THROW_KIRBY_GROUND);
      iVar3 = lib::L2CValue::as_integer(aLStack160);
      bVar1 = app::lua_bind::WorkModule__is_enable_transition_term_impl(*ppBVar11,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack176,_MA_MSC_CMD_CATCH_IS_CATCH);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack176);
        app::sv_module_access::_catch(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::L2CValue(aLStack96,false);
        uVar8 = lib::L2CValue::operator==(aLStack160,aLStack96);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack176);
        if ((uVar8 & 1) == 0) {
          lib::L2CValue::L2CValue(aLStack96,FIGHTER_STATUS_KIND_CATCH_JUMP);
          lib::L2CValue::operator=(aLStack112,aLStack96);
        }
        else {
          lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
          lib::L2CValue::operator=(aLStack112,aLStack96);
        }
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,aLStack112);
        lib::L2CValue::L2CValue(aLStack160,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x60);
        lib::L2CValue::~L2CValue(aLStack160);
        lib::L2CValue::~L2CValue(aLStack96);
        lib::L2CValue::L2CValue((L2CValue *)return_value,1);
        goto LAB_71000109e0;
      }
    }
    bVar1 = app::lua_bind::MotionModule__is_end_impl(*ppBVar11);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator.cast.to.bool(aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
    else {
      pLVar10 = (L2CValue *)lib::L2CValue::operator[]((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack96,SITUATION_KIND_AIR);
      uVar8 = lib::L2CValue::operator==(pLVar10,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      if ((uVar8 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::operator=(aLStack112,aLStack96);
      }
      else {
        lib::L2CValue::L2CValue(aLStack96,_FIGHTER_STATUS_KIND_FALL);
        lib::L2CValue::operator=(aLStack112,aLStack96);
      }
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue(aLStack96,aLStack112);
      lib::L2CValue::L2CValue(aLStack160,false);
      lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xa0,(L2CValue)0x60);
      lib::L2CValue::~L2CValue(aLStack160);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::L2CValue((L2CValue *)return_value,0);
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack192,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x40);
    lib::L2CValue::L2CValue(aLStack96,false);
    uVar8 = lib::L2CValue::operator==(aLStack176,aLStack96);
    lib::L2CValue::~L2CValue(aLStack96);
    if ((uVar8 & 1) == 0) {
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack160);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack96,false);
      uVar8 = lib::L2CValue::operator==(aLStack208,aLStack96);
      lib::L2CValue::~L2CValue(aLStack96);
      lib::L2CValue::~L2CValue(aLStack208);
      lib::L2CValue::~L2CValue(aLStack176);
      lib::L2CValue::~L2CValue(aLStack192);
      lib::L2CValue::~L2CValue(aLStack160);
      if ((uVar8 & 1) != 0) goto LAB_7100010748;
    }
    lib::L2CValue::L2CValue((L2CValue *)return_value,1);
  }
LAB_71000109e0:
  lib::L2CValue::~L2CValue(aLStack128);
  lib::L2CValue::~L2CValue(aLStack112);
  return;
}

