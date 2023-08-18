
void __thiscall
L2CFighterDedede::status::SpecialHiLanding_exit(L2CFighterDedede *this,L2CValue *return_value)

{
  Hash40 HVar1;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,0x570211ebd);
  HVar1 = lib::L2CValue::as_hash(aLStack48);
  app::lua_bind::ModelModule__clear_joint_srt_impl(this->moduleAccessor,HVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

