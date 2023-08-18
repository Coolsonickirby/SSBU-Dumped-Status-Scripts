
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterFalco::status::FinalScene01_end(L2CFighterFalco *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_FALCO_GENERATE_ARTICLE_ARWING);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack64,_FIGHTER_FALCO_GENERATE_ARTICLE_ARWINGSHOT);
  iVar1 = lib::L2CValue::as_integer(aLStack64);
  app::lua_bind::ArticleModule__remove_exist_impl(this->moduleAccessor,iVar1,0);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_STATUS_WORK_ID_FLOAT_FINAL_OWNER_SCALE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar2);
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::PostureModule__set_owner_scale_impl(this->moduleAccessor,fVar2);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue(aLStack80,_FIGHTER_FALCO_STATUS_WORK_ID_FLOAT_FINAL_INIT_SCALE);
  iVar1 = lib::L2CValue::as_integer(aLStack80);
  fVar2 = (float)app::lua_bind::WorkModule__get_float_impl(this->moduleAccessor,iVar1);
  lib::L2CValue::L2CValue(aLStack64,fVar2);
  fVar2 = (float)lib::L2CValue::as_number(aLStack64);
  app::lua_bind::PostureModule__set_scale_impl(this->moduleAccessor,fVar2,false);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

