
void __thiscall L2CFighterRyu::status::Final_end(L2CFighterRyu *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue aLStack48 [16];
  
  FUN_710003d4f0();
  lib::L2CValue::L2CValue(aLStack48,FIGHTER_INSTANCE_WORK_ID_FLAG_NO_DEAD);
  iVar1 = lib::L2CValue::as_integer(aLStack48);
  app::lua_bind::WorkModule__off_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack48);
  FUN_710003f3b0(this);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}
