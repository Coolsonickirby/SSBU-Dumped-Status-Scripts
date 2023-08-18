
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterMetaknight::status::Guard_main_loop(L2CFighterMetaknight *this,L2CValue *return_value)

{
  int iVar1;
  float fVar2;
  L2CValue aLStack112 [16];
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lua2cpp::L2CFighterCommon::status_Guard_Main(this);
  lib::L2CValue::_L2CValue(aLStack64);
  fVar2 = (float)app::lua_bind::MotionModule__frame_2nd_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack80,fVar2);
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
  iVar1 = lib::L2CValue::as_integer(aLStack96);
  fVar2 = (float)lib::L2CValue::as_number(aLStack80);
  app::lua_bind::ArticleModule__set_frame_2nd_impl(this->moduleAccessor,iVar1,fVar2,true);
  lib::L2CValue::_L2CValue(aLStack96);
  fVar2 = (float)app::lua_bind::MotionModule__weight_impl(this->moduleAccessor);
  lib::L2CValue::L2CValue(aLStack96,fVar2);
  lib::L2CValue::L2CValue(aLStack112,_FIGHTER_METAKNIGHT_GENERATE_ARTICLE_MANTLE);
  iVar1 = lib::L2CValue::as_integer(aLStack112);
  fVar2 = (float)lib::L2CValue::as_number(aLStack96);
  app::lua_bind::ArticleModule__set_weight_impl(this->moduleAccessor,iVar1,fVar2,true);
  lib::L2CValue::_L2CValue(aLStack112);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  lib::L2CValue::_L2CValue(aLStack96);
  lib::L2CValue::_L2CValue(aLStack80);
  return;
}

