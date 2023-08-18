
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterGaogaen::status::FinalDash_end(L2CFighterGaogaen *this,L2CValue *return_value)

{
  L2CValue *this_00;
  L2CValue *pLVar1;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_KIND_FINAL_DASH_END);
  uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar2 & 1) == 0) {
    pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_KIND_FINAL_END);
    uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar2 & 1) == 0) {
      pLVar1 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_GAOGAEN_STATUS_KIND_FINAL_READY);
      uVar2 = lib::L2CValue::operator__(pLVar1,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar2 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack96,0x1e0aba2d68);
        lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
        lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
        app::sv_battle_object::notify_event_msc_cmd(this->luaStateAgent);
        lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::_L2CValue(aLStack96);
      }
    }
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

