
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKrool::status::FinalEnd_main_loop(L2CFighterKrool *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
LAB_7100019a0c:
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((bVar2 & 1U) == 0) {
      lib::L2CValue::L2CValue(aLStack96,_FIGHTER_KROOL_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH);
      iVar3 = lib::L2CValue::as_integer(aLStack96);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack80,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) {
        lib::L2CValue::L2CValue(aLStack64,0x24623cc09f);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack64);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack64);
      }
      lib::L2CValue::L2CValue(aLStack128,_FIGHTER_KROOL_STATUS_WORK_ID_FLAG_FINAL_END_EXIT);
      iVar3 = lib::L2CValue::as_integer(aLStack128);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack96);
      if ((bVar2 & 1U) == 0) {
        lib::L2CValue::_L2CValue(aLStack96);
        pLVar5 = aLStack128;
      }
      else {
        lib::L2CValue::L2CValue(aLStack160,_FIGHTER_KROOL_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack160);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
        lib::L2CValue::L2CValue(aLStack64,false);
        uVar4 = lib::L2CValue::operator__(aLStack144,aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack144);
        lib::L2CValue::_L2CValue(aLStack160);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack128);
        if ((uVar4 & 1) == 0) goto LAB_7100019cf4;
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_KROOL_STATUS_WORK_ID_FLAG_FINAL_END_EXIT_FINISH);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack96,0x244d5a0a54);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack64);
        pLVar5 = aLStack96;
      }
    }
    else {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack64,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack80,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xc0,(L2CValue)0xb0);
      }
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar5 = aLStack64;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack112,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x90);
    lib::L2CValue::L2CValue(aLStack64,false);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    if ((uVar4 & 1) != 0) {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack64,false);
      uVar4 = lib::L2CValue::operator__(aLStack128,aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) goto LAB_7100019cf4;
      goto LAB_7100019a0c;
    }
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    pLVar5 = aLStack80;
  }
  lib::L2CValue::_L2CValue(pLVar5);
LAB_7100019cf4:
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

