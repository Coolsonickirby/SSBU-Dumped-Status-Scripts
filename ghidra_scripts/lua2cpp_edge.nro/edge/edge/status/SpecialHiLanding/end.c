
void __thiscall
L2CFighterEdge::status::SpecialHiLanding_end(L2CFighterEdge *this,L2CValue *return_value)

{
  Hash40 HVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x13be297b87);
  HVar1 = lib::L2CValue::as_hash(aLStack48);
  app::lua_bind::EffectModule__kill_kind_impl(this->moduleAccessor,HVar1,true,true);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

