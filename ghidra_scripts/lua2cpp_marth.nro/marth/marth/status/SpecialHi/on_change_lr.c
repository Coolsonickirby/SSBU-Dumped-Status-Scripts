
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMarth::status::SpecialHi_on_change_lr(L2CFighterMarth *this,L2CValue *return_value)

{
  int iVar1;
  L2CValue *in_x1;
  L2CValue *in_x2;
  float fVar2;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,in_x1);
  lib::L2CValue::L2CValue(aLStack112,in_x2);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_MARTH_STATUS_SPECIAL_HI_WORK_FLOAT_STICK_CONTROL_ANGLE)
  ;
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_MARTH_STATUS_SPECIAL_HI_FLAG_STICK_CONTROL_ANGLE_CHK_END);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__on_flag_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,true);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::_L2CValue(aLStack96);
  return;
}

