
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterInkling::status::RunBrake_exec(L2CFighterInkling *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::sub_run_brake_uniq_process_main(this);
  lib::L2CValue::_L2CValue(aLStack64);
  fVar2 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar2);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_INKLING_GENERATE_ARTICLE_SQUID);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar2 = (float)lib::L2CValue::as_number(aLStack80);
  app::lua_bind::ArticleModule__set_rate_impl(this->moduleAccessor,iVar1,fVar2);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

