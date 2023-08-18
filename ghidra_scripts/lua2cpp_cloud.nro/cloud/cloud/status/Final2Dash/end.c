
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterCloud::status::Final2Dash_end(L2CFighterCloud *this,L2CValue *return_value)

{
  L2CValue *this_00;
  byte bVar1;
  byte bVar2;
  L2CValue *pLVar3;
  ulong uVar4;
  Hash40 HVar5;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  
  this_00 = &this->globalTable;
  pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_STATUS_KIND_FINAL2_DASH_END);
  uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
  lib::L2CValue::_L2CValue(aLStack80);
  if ((uVar4 & 1) == 0) {
    pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_STATUS_KIND_FINAL2_END);
    uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
    lib::L2CValue::_L2CValue(aLStack80);
    if ((uVar4 & 1) == 0) {
      pLVar3 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)this_00,0xb);
      lib::L2CValue::L2CValue(aLStack80,_FIGHTER_CLOUD_STATUS_KIND_FINAL2_HIT);
      uVar4 = lib::L2CValue::operator__(pLVar3,aLStack80);
      lib::L2CValue::_L2CValue(aLStack80);
      if ((uVar4 & 1) == 0) {
        lib::L2CValue::L2CValue(aLStack80,0x16ca1c5441);
        HVar5 = lib::L2CValue::as_hash(aLStack80);
        app::lua_bind::EffectModule__remove_common_impl(this->moduleAccessor,HVar5);
        lib::L2CValue::_L2CValue(aLStack80);
        lib::L2CValue::L2CValue(aLStack80,0x11dba4ac03);
        lib::L2CValue::L2CValue(aLStack96,false);
        lib::L2CValue::L2CValue(aLStack112,true);
        HVar5 = lib::L2CValue::as_hash(aLStack80);
        bVar1 = lib::L2CValue::as_bool(aLStack96);
        bVar2 = lib::L2CValue::as_bool(aLStack112);
        app::lua_bind::EffectModule__kill_kind_impl
                  (this->moduleAccessor,HVar5,(bool)(bVar1 & 1),(bool)(bVar2 & 1));
        lib::L2CValue::_L2CValue(aLStack112);
        lib::L2CValue::_L2CValue(aLStack96);
        lib::L2CValue::_L2CValue(aLStack80);
        FUN_710000b800(this);
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

