
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterKrool::status::FinalDash_end(L2CFighterKrool *this,L2CValue *return_value)

{
  L2CValue *this_00;
  int iVar1;
  L2CValue *pLVar2;
  ulong uVar3;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_STATUS_KIND_FINAL_DASH_END);
  uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar3 & 1) == 0) {
    pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_STATUS_KIND_FINAL_END);
    uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar3 & 1) == 0) {
      pLVar2 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_KROOL_STATUS_KIND_FINAL_READY);
      uVar3 = lib::L2CValue::operator__(pLVar2,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar3 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x1e0aba2d68);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::L2CValue(aLStack96,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
        iVar1 = lib::L2CValue::as_integer(aLStack96);
        app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

