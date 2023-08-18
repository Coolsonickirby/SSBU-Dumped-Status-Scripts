
void __thiscall
L2CFighterPacman::status::CatchWait_end(L2CFighterPacman *this,L2CValue *return_value)

{
  Hash40 HVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x16214ed6ba);
  HVar1 = lib::L2CValue::as_hash(aLStack48);
  app::lua_bind::EffectModule__kill_kind_impl(this->moduleAccessor,HVar1,true,true);
  lib::L2CValue::_L2CValue(aLStack48);
  lua2cpp::L2CFighterCommon::status_end_CatchWait(this);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

