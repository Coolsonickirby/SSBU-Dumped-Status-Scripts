
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
L2CFighterDaisy::status::LandingFallSpecial_main(L2CFighterDaisy *this,L2CValue *return_value)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  Hash40 HVar4;
  float fVar5;
  L2CValue aLStack96 [16];
  L2CValue aLStack80 [16];
  L2CValue aLStack64 [16];
  
  lib::L2CValue::L2CValue(aLStack96,_FIGHTER_PEACH_GENERATE_ARTICLE_KASSAR);
  iVar2 = lib::L2CValue::as_integer(aLStack96);
  bVar1 = app::lua_bind::ArticleModule__is_exist_impl(this->moduleAccessor,iVar2);
  lib::L2CValue::L2CValue(aLStack80,(bool)(bVar1 & 1));
  lib::L2CValue::L2CValue(aLStack64,true);
  uVar3 = lib::L2CValue::operator__(aLStack80,aLStack64);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::_L2CValue(aLStack80);
  lib::L2CValue::_L2CValue(aLStack96);
  if ((uVar3 & 1) != 0) {
    fVar5 = (float)app::lua_bind::MotionModule__rate_impl(this->moduleAccessor);
    lib::L2CValue::L2CValue(aLStack64,fVar5);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PEACH_GENERATE_ARTICLE_KASSAR);
    lib::L2CValue::L2CValue(aLStack96,0x12cb4acfbc);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    HVar4 = lib::L2CValue::as_hash(aLStack96);
    app::lua_bind::ArticleModule__change_motion_impl(this->moduleAccessor,iVar2,HVar4,false,-1.0);
    lib::L2CValue::_L2CValue(aLStack96);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::L2CValue(aLStack80,_FIGHTER_PEACH_GENERATE_ARTICLE_KASSAR);
    iVar2 = lib::L2CValue::as_integer(aLStack80);
    fVar5 = (float)lib::L2CValue::as_number(aLStack64);
    app::lua_bind::ArticleModule__set_rate_impl(this->moduleAccessor,iVar2,fVar5);
    lib::L2CValue::_L2CValue(aLStack80);
    lib::L2CValue::_L2CValue(aLStack64);
  }
  lua2cpp::L2CFighterCommon::status_landing_fall_special(this);
  lib::L2CValue::_L2CValue(aLStack64);
  lib::L2CValue::L2CValue((L2CValue *)return_value,0);
  return;
}

