
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterChrom::status::SpecialHi2_end(L2CFighterChrom *this,L2CValue *return_value)

{
  DamageNoReactionMode DVar1;
  L2CValue *this_00;
  ulong uVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_DAMAGE_NO_REACTION_MODE_NORMAL);
  DVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::DamageModule__set_no_reaction_mode_status_impl
            (this->moduleAccessor,DVar1,-1.0,-1.0,-1);
  lib::L2CValue::_L2CValue(aLStack64);
  this_00 = (L2CValue *)lib::L2CValue::operator__((L2CValue *)&this->globalTable,0xb);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_ROY_STATUS_KIND_SPECIAL_HI_3);
  uVar2 = lib::L2CValue::operator__(this_00,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  if ((uVar2 & 1) == 0) {
    lib::L2CValue::L2CValue(aLStack80,_MA_MSC_CMD_EFFECT_AFTER_IMAGE_OFF);
    lib::L2CValue::L2CValue(aLStack96,0);
    lib::L2CAgent::clear_lua_stack((L2CAgent *)this);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack80);
    lib::L2CAgent::push_lua_stack((L2CAgent *)this,aLStack96);
    app::sv_module_access::effect(this->luaStateAgent);
    lib::L2CAgent::pop_lua_stack((L2CAgent *)this,1);
    lib::L2CValue::_L2CValue(aLStack64);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
  }
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

