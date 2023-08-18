
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::Final_main_loop(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  L2CValue *pLVar5;
  Fighter *pFVar6;
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  bVar1 = app::lua_bind::CancelModule__is_enable_cancel_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack128,false);
    lua2cpp::L2CFighterCommon::sub_wait_ground_check_common(this,(L2CValue)0x80);
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack112,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
    }
    else {
      lua2cpp::L2CFighterCommon::sub_air_check_fall_common(this);
      lib::L2CValue::L2CValue(aLStack80,false);
      uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::_L2CValue(aLStack144);
      lib::L2CValue::_L2CValue(aLStack112);
      lib::L2CValue::_L2CValue(aLStack128);
      lib::L2CValue::_L2CValue(aLStack96);
      if ((uVar4 & 1) != 0) goto LAB_71000168e0;
    }
    iVar3 = 1;
    goto LAB_7100016a2c;
  }
  lib::L2CValue::_L2CValue(aLStack96);
LAB_71000168e0:
  bVar1 = app::FighterSpecializer_Brave::final_module_hit_success();
  lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack80,true);
  uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar4 & 1) == 0) {
    bVar1 = app::lua_bind::MotionModule__is_end_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
      lib::L2CValue::L2CValue(aLStack80,_SITUATION_KIND_GROUND);
      uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0x16);
        lib::L2CValue::L2CValue(aLStack80,SITUATION_KIND_AIR);
        uVar4 = lib::L2CValue::operator__(pLVar5,aLStack80);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((uVar4 & 1) == 0) goto LAB_7100016aac;
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_FINAL_JUMP_END);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      else {
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_STATUS_KIND_WAIT);
        lib::L2CValue::L2CValue(aLStack96,false);
        lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
      }
      goto LAB_7100016954;
    }
LAB_7100016aac:
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_END_FINAL);
    iVar3 = lib::L2CValue::as_integer(aLStack112);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack96,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,true);
    uVar4 = lib::L2CValue::operator__(aLStack96,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      lib::L2CValue::_L2CValue(aLStack96);
      pLVar5 = aLStack112;
      goto LAB_7100016960;
    }
    lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_END_FINAL_DONE);
    iVar3 = lib::L2CValue::as_integer(aLStack160);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack144,(bool)(bVar1 & 1));
    lib::L2CValue::L2CValue(aLStack80,false);
    uVar4 = lib::L2CValue::operator__(aLStack144,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack112);
    if ((uVar4 & 1) != 0) {
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_END_FINAL);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_FINAL_FLAG_END_FINAL_DONE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar5 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,4);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_FINAL_MODULE_START_EXIT);
      pFVar6 = (Fighter *)lib::L2CValue::as_pointer(pLVar5);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      app::FighterSpecializer_Brave::call_final_module(pFVar6,iVar3);
      lib::L2CValue::_L2CValue(aLStack80);
      lib::L2CValue::L2CValue(aLStack96,0x1e0aba2d68);
      lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
      lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
      app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
      lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
      lib::L2CValue::_L2CValue(aLStack80);
      pLVar5 = aLStack96;
      goto LAB_7100016960;
    }
  }
  else {
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_KIND_FINAL_READY);
    lib::L2CValue::L2CValue(aLStack96,false);
    lua2cpp::L2CFighterBase::change_status(this,(L2CValue)0xb0,(L2CValue)0xa0);
LAB_7100016954:
    lib::L2CValue::_L2CValue(aLStack96);
    pLVar5 = aLStack80;
LAB_7100016960:
    lib::L2CValue::_L2CValue(pLVar5);
  }
  iVar3 = 0;
LAB_7100016a2c:
  lib::L2CValue::L2CValue((L2CValue *)return_value,iVar3);
  return;
}

