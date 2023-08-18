
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterBrave::status::SpecialLwFlyingUp_end(L2CFighterBrave *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  float fVar5;
  undefined8 uVar6;
  float in_register_00005008;
  L2CValue aLStack176 [16];
  L2CValue aLStack160 [16];
  L2CValue aLStack144 [16];
  L2CValue aLStack128 [16];
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  
  lib::L2CValue::L2CValue(aLStack160,true);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack160);
  lib::L2CValue::L2CValue(aLStack160,true);
  bVar1 = lib::L2CValue::as_bool(aLStack160);
  app::lua_bind::AreaModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack160);
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_FLYING_STOP_CEIL);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar4 & 1) != 0) {
    lib::L2CValue::L2CValue(aLStack160,_CAMERA_QUAKE_KIND_LARGE);
    iVar2 = lib::L2CValue::as_integer(aLStack160);
    app::lua_bind::CameraModule__req_quake_impl(this->moduleAccessor,iVar2);
    lib::L2CValue::_L2CValue(aLStack160);
  }
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack160,_FIGHTER_BRAVE_STATUS_KIND_SPECIAL_LW_FLYING_DOWN);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack160);
  lib::L2CValue::_L2CValue(aLStack160);
  if ((uVar4 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack160,false);
    bVar1 = lib::L2CValue::as_bool(aLStack160);
    app::lua_bind::StatusModule__set_keep_situation_air_impl(this->moduleAccessor,(bool)(bVar1 & 1))
    ;
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::L2CValue(aLStack96,0x1f20a9d549);
    lib::L2CValue::L2CValue(aLStack112,true);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack112);
    app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack160);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,true);
    lib::L2CValue::L2CValue(aLStack112,_FIGHTER_INSTANCE_WORK_ID_FLAG_NAME_CURSOR);
    bVar1 = lib::L2CValue::as_bool(aLStack96);
    iVar2 = lib::L2CValue::as_integer(aLStack112);
    app::lua_bind::WorkModule__set_flag_impl(this->moduleAccessor,(bool)(bVar1 & 1),iVar2);
    lib::L2CValue::_L2CValue(aLStack112);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_INSTANCE_WORK_ID_FLAG_DISABLE_SP_AUTO_RECOVER);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar2);
    pLVar3 = aLStack96;
  }
  else {
    uVar6 = app::FighterSpecializer_Brave::get_flying_target_pos();
    lib::L2CValue::L2CValue(aLStack160,(float)uVar6);
    lib::L2CValue::L2CValue(aLStack144,(float)((ulong)uVar6 >> 0x20));
    lib::L2CValue::L2CValue(aLStack128,in_register_00005008);
    FUN_7100004a60(aLStack112,this,aLStack160);
    lib::L2CValue::_L2CValue(aLStack128);
    lib::L2CValue::_L2CValue(aLStack144);
    lib::L2CValue::_L2CValue(aLStack160);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x18cdc1683);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(pLVar3,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLOAT_TARGET_POS_X);
    fVar5 = (float)lib::L2CValue::as_number(aLStack176);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar3 = (L2CValue *)lib::L2CValue::operator__(aLStack112,0x1fbdb2615);
    lib::L2CValue::L2CValue(aLStack96,0.0);
    lib::L2CValue::operator_(pLVar3,aLStack96);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::L2CValue(aLStack96,_FIGHTER_BRAVE_STATUS_SPECIAL_LW_FLYING_FLOAT_TARGET_POS_Y);
    fVar5 = (float)lib::L2CValue::as_number(aLStack176);
    iVar2 = lib::L2CValue::as_integer(aLStack96);
    app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar5,iVar2);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack176);
    pLVar3 = aLStack112;
  }
  lib::L2CValue::_L2CValue(pLVar3);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

