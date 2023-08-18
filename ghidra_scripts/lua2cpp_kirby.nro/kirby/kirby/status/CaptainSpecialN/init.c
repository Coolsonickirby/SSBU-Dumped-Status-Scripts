
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterKirby::status::CaptainSpecialN_init(L2CFighterKirby *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  fVar2 = (float)app::lua_bind::PostureModule__lr_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar2);
  lib::L2CValue::L2CValue(aLStack64,0.0);
  lib::L2CValue::operator_(aLStack96,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue
            (aLStack64,_FIGHTER_CAPTAIN_STATUS_WORK_ID_FLOAT_FALCON_PUNCH_START_CHARA_DIR);
  fVar2 = (float)lib::L2CValue::as_number(aLStack80);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::WorkModule__set_float_impl(this->moduleAccessor,fVar2,iVar1);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

