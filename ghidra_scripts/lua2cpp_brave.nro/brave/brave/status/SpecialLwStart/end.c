
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwStart_end(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  L2CValue *this_00;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_INT_ACTIVE_COMMAND);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,iVar3);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND08_FULLBURST);
  uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar5 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_INT_ACTIVE_COMMAND);
    iVar3 = lib::L2CValue::as_integer(aLStack96);
    iVar3 = app::lua_bind::WorkModule__get_int_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack80,iVar3);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BRAVE_SPECIAL_LW_COMMAND09_CRASH);
    uVar5 = lib::L2CValue::operator__(aLStack80,aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) != 0) {
      lib::L2CValue::L2CValue
                (aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_FLAG_GENERATED_ARTICLE);
      iVar3 = lib::L2CValue::as_integer(aLStack80);
      bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
      lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
      bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
      lib::L2CValue::_L2CValue(aLStack64);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((bVar2 & 1U) != 0) {
        lib::L2CValue::L2CValue(aLStack64,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack64,_FIGHTER_INSTANCE_WORK_ID_FLAG_SUICIDE_SKILL_RESERVED);
        iVar3 = lib::L2CValue::as_integer(aLStack64);
        app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::L2CValue(aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_FLAG_DEATH_RESERVE)
        ;
        iVar3 = lib::L2CValue::as_integer(aLStack80);
        bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
        lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
        bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
        lib::L2CValue::_L2CValue(aLStack64);
        lib::L2CValue::_L2CValue(aLStack80);
        if ((bVar2 & 1U) != 0) {
          lib::L2CValue::L2CValue
                    (aLStack64,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_SPECIAL_LW_CRASH2_DEATH_RESERVE)
          ;
          iVar3 = lib::L2CValue::as_integer(aLStack64);
          app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar3);
          goto LAB_71000090ec;
        }
      }
    }
  }
  else {
    lib::L2CValue::L2CValue
              (aLStack80,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_FLAG_FULLBURST_INTERRUPT);
    iVar3 = lib::L2CValue::as_integer(aLStack80);
    bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
    lib::L2CValue::L2CValue(aLStack64,(bool)(bVar1 & 1));
    bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack64);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((bVar2 & 1U) != 0) {
      lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BRAVE_GENERATE_ARTICLE_CRASH);
      lib::L2CValue::L2CValue(aLStack80,_WEAPON_BRAVE_CRASH_STATUS_KIND_END1);
      iVar3 = lib::L2CValue::as_integer(aLStack64);
      iVar4 = lib::L2CValue::as_integer(aLStack80);
      app::lua_bind::ArticleModule__change_status_exist_impl(this->moduleAccessor,iVar3,iVar4);
      lib::L2CValue::_L2CValue(aLStack80);
LAB_71000090ec:
      lib::L2CValue::_L2CValue(aLStack64);
    }
  }
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_FLAG_SLOW_WHOLE);
  iVar3 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::WorkModule__is_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  bVar2 = lib::L2CValue::operator_cast_to_bool(aLStack80);
  if ((bVar2 & 1U) == 0) {
    lib::L2CValue::_L2CValue(aLStack80);
    this_00 = aLStack96;
  }
  else {
    iVar3 = app::lua_bind::SlowModule__whole_frame_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack112,iVar3);
    lib::L2CValue::L2CValue(aLStack64,0);
    uVar5 = lib::L2CValue::operator_(aLStack64,aLStack112);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack96);
    if ((uVar5 & 1) == 0) goto LAB_7100009354;
    app::lua_bind::SlowModule__clear_whole_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_START_FLAG_SLOW_WHOLE);
    iVar3 = lib::L2CValue::as_integer(aLStack64);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
    this_00 = aLStack64;
  }
  lib::L2CValue::_L2CValue(this_00);
LAB_7100009354:
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_DISABLE_SP_AUTO_RECOVER);
  iVar3 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar3);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,0x3a40337e2c);
  lib::L2CValue::L2CValue(aLStack96,-1);
  lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
  lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
  app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
  lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

