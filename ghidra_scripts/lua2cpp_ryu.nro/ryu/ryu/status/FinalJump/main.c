
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall L2CFighterRyu::status::FinalJump_main(L2CFighterRyu *this,L2CValue *return_value)

{
  HitStatus HVar1;
  float fVar2;
  L2CValue aLStack64 [16];
  L2CValue aLStack48 [16];
  
  lib::L2CValue::L2CValue(aLStack48,1.0);
  fVar2 = (float)lib::L2CValue::as_number(aLStack48);
  app::lua_bind::AttackModule__set_damage_shake_scale_impl(this->moduleAccessor,fVar2);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack48,false);
  FUN_710003dbe0(this,aLStack48);
  lib::L2CValue::_L2CValue(aLStack48);
  lib::L2CValue::L2CValue(aLStack64,_HIT_STATUS_XLU);
  HVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::HitModule__set_whole_impl(this->moduleAccessor,HVar1,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,FinalJump_main_loop);
  lua2cpp::L2CFighterCommon::sub_shift_status_main(this,(L2CValue)0xc0);
  lib::L2CValue::_L2CValue(aLStack64);
  return;
}

