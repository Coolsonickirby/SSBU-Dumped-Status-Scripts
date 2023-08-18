
void __thiscall
L2CFighterGanon::status::FinalAttack_init(L2CFighterGanon *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,false);
  bVar1 = lib::L2CValue::as_bool(aLStack48);
  app::lua_bind::VisibilityModule__set_whole_impl(this->moduleAccessor,(bool)(bVar1 & 1));
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar2 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

